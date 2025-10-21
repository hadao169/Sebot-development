import rclpy
from rclpy.node import Node

from std_msgs.msg import String

import serial
import time

from motordriver_msgs.msg import MotordriverMessage

class MotordriverNode(Node):
  def __init__(self):
    super().__init__('motordriver_node')

    self.msg = "x\n"
    self.timercount = 0

    self.arduino = serial.Serial("/dev/ttyACM0", 115200, timeout=1)
    if not self.arduino.isOpen():
      raise Exception("No connection to motor controller")
    # motor stops if no new command is received within 1s

    self.arduino.write(("ALIVE;1;\n").encode())

    self.subscriber = self.create_subscription(
        String,
        'motor_command', # relative reference. If you write a slash in front, for example '/motor_command', it becomes absolute, and the namespace setting no longer affects it.
        self.motor_command_callback,
        10
    )

    self.publisher = self.create_publisher(
        MotordriverMessage,
        'motor_data',
        10
    )

    timer_period = 0.01  # Seconds <=> 100Hz
    self.timer = self.create_timer(timer_period, self.timer_callback)

  def timer_callback(self):
    # Create message for Arduino
    if self.msg != "x\n": # only send if there is a new command
        self.arduino.write(self.msg.encode()) #change string into bytes, then send to arduino

    if self.timercount == 11: # every 0.1s <=> 10Hz (inversely proportional to timer period) => after 11 cycles
        if self.msg == "x\n":
            self.arduino.write(self.msg.encode())

        self.timercount = 0
        if self.arduino.inWaiting()>0:
          while self.arduino.inWaiting()>0:
            answer=self.arduino.readline().decode("utf8").split(";")

          msg = MotordriverMessage()

          try:
            msg.encoder1 = int(answer[0])
            msg.encoder2 = int(answer[1])
            msg.speed1 = int(answer[2])
            msg.speed2 = int(answer[3])

            # Publish message on topic
            self.publisher.publish(msg)
          except Exception as err:
            pass

    self.msg = "x\n"
    self.timercount += 1

  def motor_command_callback(self, message):
    self.msg = "%s\n"%(message.data)

def main(args=None):
  rclpy.init(args=args)
  motordriver_node = MotordriverNode()
  try:
    rclpy.spin(motordriver_node)
  except KeyboardInterrupt:
    pass
  finally:
    motordriver_node.destroy_node()
    if rclpy.ok():
      rclpy.shutdown()


if __name__ == '__main__':
  main()