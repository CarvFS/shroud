# setup.py
# This file is generated by Shroud 0.12.1. Do not edit.
# Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
# other Shroud Project Developers.
# See the top-level COPYRIGHT file for details.
#
# SPDX-License-Identifier: (BSD-3-Clause)
#
from setuptools import setup, Extension
import numpy

module = Extension(
    'pointers',
    sources=[
         'pypointersmodule.cpp'
    ],
    language='c++',
    include_dirs = [numpy.get_include()],
#    libraries = ['tcl83'],
#    library_dirs = ['/usr/local/lib'],      
#    extra_compile_args = [ '-O0', '-g' ],
#    extra_link_args =
)

setup(
    name='pointers',
    ext_modules = [module],
)
