// pyclassesmodule.hpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2022, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#ifndef PYCLASSESMODULE_HPP
#define PYCLASSESMODULE_HPP

#include <Python.h>

// cxx_header
#include "classes.hpp"

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

// start object PY_Class1
typedef struct {
PyObject_HEAD
    classes::Class1 * obj;
    int idtor;
    // splicer begin class.Class1.C_object
    // splicer end class.Class1.C_object
} PY_Class1;
// end object PY_Class1

extern const char *PY_Class1_capsule_name;
PyObject *PP_Class1_to_Object_idtor(classes::Class1 *addr, int idtor);
PyObject *PP_Class1_to_Object(classes::Class1 *addr);
int PP_Class1_from_Object(PyObject *obj, void **addr);

// ------------------------------
extern PyTypeObject PY_Class2_Type;
// splicer begin class.Class2.C_declaration
// splicer end class.Class2.C_declaration

typedef struct {
PyObject_HEAD
    classes::Class2 * obj;
    int idtor;
    // splicer begin class.Class2.C_object
    // splicer end class.Class2.C_object
} PY_Class2;

extern const char *PY_Class2_capsule_name;
PyObject *PP_Class2_to_Object_idtor(classes::Class2 *addr, int idtor);
PyObject *PP_Class2_to_Object(classes::Class2 *addr);
int PP_Class2_from_Object(PyObject *obj, void **addr);

// ------------------------------
extern PyTypeObject PY_Singleton_Type;
// splicer begin class.Singleton.C_declaration
// splicer end class.Singleton.C_declaration

typedef struct {
PyObject_HEAD
    classes::Singleton * obj;
    int idtor;
    // splicer begin class.Singleton.C_object
    // splicer end class.Singleton.C_object
} PY_Singleton;

extern const char *PY_Singleton_capsule_name;
PyObject *PP_Singleton_to_Object_idtor(classes::Singleton *addr,
    int idtor);
PyObject *PP_Singleton_to_Object(classes::Singleton *addr);
int PP_Singleton_from_Object(PyObject *obj, void **addr);

// ------------------------------
extern PyTypeObject PY_Shape_Type;
// splicer begin class.Shape.C_declaration
// splicer end class.Shape.C_declaration

typedef struct {
PyObject_HEAD
    classes::Shape * obj;
    int idtor;
    // splicer begin class.Shape.C_object
    // splicer end class.Shape.C_object
} PY_Shape;

extern const char *PY_Shape_capsule_name;
PyObject *PP_Shape_to_Object_idtor(classes::Shape *addr, int idtor);
PyObject *PP_Shape_to_Object(classes::Shape *addr);
int PP_Shape_from_Object(PyObject *obj, void **addr);

// ------------------------------
extern PyTypeObject PY_Circle_Type;
// splicer begin class.Circle.C_declaration
// splicer end class.Circle.C_declaration

typedef struct {
PyObject_HEAD
    classes::Circle * obj;
    int idtor;
    // splicer begin class.Circle.C_object
    // splicer end class.Circle.C_object
} PY_Circle;

extern const char *PY_Circle_capsule_name;
PyObject *PP_Circle_to_Object_idtor(classes::Circle *addr, int idtor);
PyObject *PP_Circle_to_Object(classes::Circle *addr);
int PP_Circle_from_Object(PyObject *obj, void **addr);
// ------------------------------

// splicer begin header.C_declaration
// splicer end header.C_declaration

extern PyObject *PY_error_obj;

#if PY_MAJOR_VERSION >= 3
extern "C" PyMODINIT_FUNC PyInit_classes(void);
#else
extern "C" PyMODINIT_FUNC initclasses(void);
#endif

#endif  /* PYCLASSESMODULE_HPP */
