// pycxxlibrarymodule.hpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#ifndef PYCXXLIBRARYMODULE_HPP
#define PYCXXLIBRARYMODULE_HPP

#include <Python.h>

// cxx_header
#include "cxxlibrary.hpp"

// splicer begin header.include
// splicer end header.include

// utility functions
extern void PY_SHROUD_release_memory(int icontext, void *ptr);
extern void *PY_SHROUD_fetch_context(int icontext);
extern void PY_SHROUD_capsule_destructor(PyObject *cap);

// ------------------------------
extern PyTypeObject PY_Cstruct1_cls_Type;
// splicer begin class.Cstruct1_cls.C_declaration
// splicer end class.Cstruct1_cls.C_declaration

typedef struct {
PyObject_HEAD
    Cstruct1_cls * obj;
    int idtor;
    // splicer begin class.Cstruct1_cls.C_object
    // splicer end class.Cstruct1_cls.C_object
} PY_Cstruct1_cls;

extern const char *PY_Cstruct1_cls_capsule_name;
PyObject *PP_Cstruct1_cls_to_Object_idtor(Cstruct1_cls *addr,
    int idtor);
PyObject *PP_Cstruct1_cls_to_Object(Cstruct1_cls *addr);
int PP_Cstruct1_cls_from_Object(PyObject *obj, void **addr);
// ------------------------------

// splicer begin header.C_declaration
// splicer end header.C_declaration

extern PyObject *PY_error_obj;

#if PY_MAJOR_VERSION >= 3
extern "C" PyMODINIT_FUNC PyInit_cxxlibrary(void);
#else
extern "C" PyMODINIT_FUNC initcxxlibrary(void);
#endif

#endif  /* PYCXXLIBRARYMODULE_HPP */
