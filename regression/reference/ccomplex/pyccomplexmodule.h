// pyccomplexmodule.h
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2022, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#ifndef PYCCOMPLEXMODULE_H
#define PYCCOMPLEXMODULE_H

#include <Python.h>

// cxx_header
#include "ccomplex.h"

// splicer begin header.include
// splicer end header.include

// splicer begin header.C_declaration
// splicer end header.C_declaration

extern PyObject *PY_error_obj;

#if PY_MAJOR_VERSION >= 3
PyMODINIT_FUNC PyInit_ccomplex(void);
#else
PyMODINIT_FUNC initccomplex(void);
#endif

#endif  /* PYCCOMPLEXMODULE_H */
