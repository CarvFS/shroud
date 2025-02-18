// pyforwardmodule.hpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#ifndef PYFORWARDMODULE_HPP
#define PYFORWARDMODULE_HPP

#include <Python.h>

// cxx_header
#include "header1.hpp"
#include "header2.hpp"
#include "forward.hpp"

// splicer begin header.include
// splicer end header.include

// utility functions
extern void PY_SHROUD_release_memory(int icontext, void *ptr);
extern void *PY_SHROUD_fetch_context(int icontext);
extern void PY_SHROUD_capsule_destructor(PyObject *cap);

// ------------------------------
extern PyTypeObject PY_Class3_Type;
// splicer begin class.Class3.C_declaration
// splicer end class.Class3.C_declaration

typedef struct {
PyObject_HEAD
    forward::Class3 * obj;
    int idtor;
    // splicer begin class.Class3.C_object
    // splicer end class.Class3.C_object
} PY_Class3;

extern const char *PY_Class3_capsule_name;
PyObject *PP_Class3_to_Object_idtor(forward::Class3 *addr, int idtor);
PyObject *PP_Class3_to_Object(forward::Class3 *addr);
int PP_Class3_from_Object(PyObject *obj, void **addr);

// ------------------------------
extern PyTypeObject PY_Class2_Type;
// splicer begin class.Class2.C_declaration
// splicer end class.Class2.C_declaration

typedef struct {
PyObject_HEAD
    forward::Class2 * obj;
    int idtor;
    // splicer begin class.Class2.C_object
    // splicer end class.Class2.C_object
} PY_Class2;

extern const char *PY_Class2_capsule_name;
PyObject *PP_Class2_to_Object_idtor(forward::Class2 *addr, int idtor);
PyObject *PP_Class2_to_Object(forward::Class2 *addr);
int PP_Class2_from_Object(PyObject *obj, void **addr);
// ------------------------------

// splicer begin header.C_declaration
// splicer end header.C_declaration

extern PyObject *PY_error_obj;

#if PY_MAJOR_VERSION >= 3
extern "C" PyMODINIT_FUNC PyInit_forward(void);
#else
extern "C" PyMODINIT_FUNC initforward(void);
#endif

#endif  /* PYFORWARDMODULE_HPP */
