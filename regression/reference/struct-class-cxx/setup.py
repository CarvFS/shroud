# setup.py
# This file is generated by Shroud nowrite-version. Do not edit.
# Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
# other Shroud Project Developers.
# See the top-level COPYRIGHT file for details.
#
# SPDX-License-Identifier: (BSD-3-Clause)
#
from setuptools import setup, Extension
import numpy

module = Extension(
    'struct',
    sources=[
         'pyCstruct1type.cpp',
         'pyCstruct_ptrtype.cpp',
         'pyCstruct_listtype.cpp',
         'pyCstruct_numpytype.cpp',
         'pyArrays1type.cpp',
         'pystructmodule.cpp',
         'pystructutil.cpp'
    ],
    language='c++',
    include_dirs = [numpy.get_include()],
#    libraries = ['tcl83'],
#    library_dirs = ['/usr/local/lib'],      
#    extra_compile_args = [ '-O0', '-g' ],
#    extra_link_args =
)

setup(
    name='struct',
    ext_modules = [module],
)
