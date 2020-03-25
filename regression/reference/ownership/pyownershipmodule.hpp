// pyownershipmodule.hpp
// This file is generated by Shroud 0.11.0. Do not edit.
// Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#ifndef PYOWNERSHIPMODULE_HPP
#define PYOWNERSHIPMODULE_HPP
#include <Python.h>
#include "ownership.hpp"
// splicer begin header.include
// splicer end header.include

// utility functions
extern void PY_SHROUD_release_memory(int icontext, void *ptr);
extern void *PY_SHROUD_fetch_context(int icontext);
extern void PY_SHROUD_capsule_destructor(PyObject *cap);

// ------------------------------
extern PyTypeObject PY_Class1_Type;
// splicer begin class.Class1.C_declaration
// splicer end class.Class1.C_declaration

typedef struct {
PyObject_HEAD
    Class1 * obj;
    int idtor;
    // splicer begin class.Class1.C_object
    // splicer end class.Class1.C_object
} PY_Class1;

extern const char *PY_Class1_capsule_name;
PyObject *PP_Class1_to_Object_idtor(Class1 *addr, int idtor);
PyObject *PP_Class1_to_Object(Class1 *addr);
int PP_Class1_from_Object(PyObject *obj, void **addr);
// ------------------------------

// splicer begin header.C_declaration
// splicer end header.C_declaration

extern PyObject *PY_error_obj;

#if PY_MAJOR_VERSION >= 3
extern "C" PyMODINIT_FUNC PyInit_ownership(void);
#else
extern "C" PyMODINIT_FUNC initownership(void);
#endif

#endif  /* PYOWNERSHIPMODULE_HPP */
