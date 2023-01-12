// pyarrayclassmodule.hpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#ifndef PYARRAYCLASSMODULE_HPP
#define PYARRAYCLASSMODULE_HPP

#include <Python.h>

// cxx_header
#include "arrayclass.hpp"

// splicer begin header.include
// splicer end header.include

// utility functions
extern void PY_SHROUD_release_memory(int icontext, void *ptr);
extern void *PY_SHROUD_fetch_context(int icontext);
extern void PY_SHROUD_capsule_destructor(PyObject *cap);

// ------------------------------
extern PyTypeObject PY_ArrayWrapper_Type;
// splicer begin class.ArrayWrapper.C_declaration
// splicer end class.ArrayWrapper.C_declaration

typedef struct {
PyObject_HEAD
    ArrayWrapper * obj;
    int idtor;
    // splicer begin class.ArrayWrapper.C_object
    // splicer end class.ArrayWrapper.C_object
} PY_ArrayWrapper;

extern const char *PY_ArrayWrapper_capsule_name;
PyObject *PP_ArrayWrapper_to_Object_idtor(ArrayWrapper *addr,
    int idtor);
PyObject *PP_ArrayWrapper_to_Object(ArrayWrapper *addr);
int PP_ArrayWrapper_from_Object(PyObject *obj, void **addr);
// ------------------------------

// splicer begin header.C_declaration
// splicer end header.C_declaration

extern PyObject *PY_error_obj;

#if PY_MAJOR_VERSION >= 3
extern "C" PyMODINIT_FUNC PyInit_arrayclass(void);
#else
extern "C" PyMODINIT_FUNC initarrayclass(void);
#endif

#endif  /* PYARRAYCLASSMODULE_HPP */
