// pyvectorsmodule.hpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#ifndef PYVECTORSMODULE_HPP
#define PYVECTORSMODULE_HPP

#include <Python.h>

// cxx_header
#include "vectors.hpp"

// splicer begin header.include
// splicer end header.include

// helper PY_converter_type
// Store PyObject and pointer to the data it contains.
// name - used in error messages
// obj  - A mutable object which holds the data.
//        For example, a NumPy array, Python array.
//        But not a list or str object.
// dataobj - converter allocated memory.
//           Decrement dataobj to release memory.
//           For example, extracted from a list or str.
// data  - C accessable pointer to data which is in obj or dataobj.
// size  - number of items in data (not number of bytes).
typedef struct {
    const char *name;
    PyObject *obj;
    PyObject *dataobj;
    void *data;   // points into obj.
    size_t size;
} VEC_SHROUD_converter_value;

// splicer begin header.C_declaration
// splicer end header.C_declaration

extern PyObject *PY_error_obj;

#if PY_MAJOR_VERSION >= 3
extern "C" PyMODINIT_FUNC PyInit_vectors(void);
#else
extern "C" PyMODINIT_FUNC initvectors(void);
#endif

#endif  /* PYVECTORSMODULE_HPP */
