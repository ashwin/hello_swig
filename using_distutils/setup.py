#!/usr/bin/env python3

"""
setup.py file for SWIG example
"""

from distutils.core import setup, Extension


phonebook_module = Extension('_phonebook',
                           sources=['phonebook_wrap.cxx', 'phonebook.cpp'],
                           extra_compile_args=["-std=c++11"],
                           )

setup (name = 'phonebook',
       version = '0.1',
       author      = "SWIG Docs",
       description = """Simple swig example from docs""",
       ext_modules = [phonebook_module],
       py_modules = ["phonebook"],
       )
