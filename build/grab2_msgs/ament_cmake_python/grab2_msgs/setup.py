from setuptools import find_packages
from setuptools import setup

setup(
    name='grab2_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('grab2_msgs', 'grab2_msgs.*')),
)
