from setuptools import setup
from Cython.Build import cythonize

setup(
    ext_modules=cythonize("pandas_ev_cy.pyx"),
)