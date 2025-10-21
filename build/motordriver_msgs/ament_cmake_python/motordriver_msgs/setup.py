from setuptools import find_packages
from setuptools import setup

setup(
    name='motordriver_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('motordriver_msgs', 'motordriver_msgs.*')),
)
