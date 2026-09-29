from setuptools import find_packages
from setuptools import setup

setup(
    name='ur_llm_planner',
    version='0.1.0',
    packages=find_packages(
        include=('ur_llm_planner', 'ur_llm_planner.*')),
)
