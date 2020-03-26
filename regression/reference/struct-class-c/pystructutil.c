// pystructutil.c
// This file is generated by Shroud 0.11.0. Do not edit.
// Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "pystructmodule.h"

const char *PY_Cstruct1_capsule_name = "Cstruct1";
const char *PY_Cstruct_ptr_capsule_name = "Cstruct_ptr";
const char *PY_Cstruct_list_capsule_name = "Cstruct_list";
const char *PY_Cstruct_numpy_capsule_name = "Cstruct_numpy";


// Wrap pointer to struct/class.
PyObject *PP_Cstruct1_to_Object_idtor(Cstruct1 *addr, int idtor)
{
    // splicer begin class.Cstruct1.utility.to_object
    PY_Cstruct1 *obj = PyObject_New(PY_Cstruct1, &PY_Cstruct1_Type);
    if (obj == NULL)
        return NULL;
    obj->obj = addr;
    obj->idtor = idtor;
    return (PyObject *) obj;
    // splicer end class.Cstruct1.utility.to_object
}

// converter which may be used with PyBuild.
PyObject *PP_Cstruct1_to_Object(Cstruct1 *addr)
{
    // splicer begin class.Cstruct1.utility.to_object
    PyObject *voidobj;
    PyObject *args;
    PyObject *rv;

    voidobj = PyCapsule_New(addr, PY_Cstruct1_capsule_name, NULL);
    args = PyTuple_New(1);
    PyTuple_SET_ITEM(args, 0, voidobj);
    rv = PyObject_Call((PyObject *) &PY_Cstruct1_Type, args, NULL);
    Py_DECREF(args);
    return rv;
    // splicer end class.Cstruct1.utility.to_object
}

// converter which may be used with PyArg_Parse.
int PP_Cstruct1_from_Object(PyObject *obj, void **addr)
{
    // splicer begin class.Cstruct1.utility.from_object
    if (obj->ob_type != &PY_Cstruct1_Type) {
        // raise exception
        return 0;
    }
    PY_Cstruct1 * self = (PY_Cstruct1 *) obj;
    *addr = self->obj;
    return 1;
    // splicer end class.Cstruct1.utility.from_object
}

// Wrap pointer to struct/class.
PyObject *PP_Cstruct_ptr_to_Object_idtor(Cstruct_ptr *addr, int idtor)
{
    // splicer begin class.Cstruct_ptr.utility.to_object
    PY_Cstruct_ptr *obj =
        PyObject_New(PY_Cstruct_ptr, &PY_Cstruct_ptr_Type);
    if (obj == NULL)
        return NULL;
    obj->obj = addr;
    obj->idtor = idtor;
    // Python objects for members.
    obj->cfield_obj = NULL;
    return (PyObject *) obj;
    // splicer end class.Cstruct_ptr.utility.to_object
}

// converter which may be used with PyBuild.
PyObject *PP_Cstruct_ptr_to_Object(Cstruct_ptr *addr)
{
    // splicer begin class.Cstruct_ptr.utility.to_object
    PyObject *voidobj;
    PyObject *args;
    PyObject *rv;

    voidobj = PyCapsule_New(addr, PY_Cstruct_ptr_capsule_name, NULL);
    args = PyTuple_New(1);
    PyTuple_SET_ITEM(args, 0, voidobj);
    rv = PyObject_Call((PyObject *) &PY_Cstruct_ptr_Type, args, NULL);
    Py_DECREF(args);
    return rv;
    // splicer end class.Cstruct_ptr.utility.to_object
}

// converter which may be used with PyArg_Parse.
int PP_Cstruct_ptr_from_Object(PyObject *obj, void **addr)
{
    // splicer begin class.Cstruct_ptr.utility.from_object
    if (obj->ob_type != &PY_Cstruct_ptr_Type) {
        // raise exception
        return 0;
    }
    PY_Cstruct_ptr * self = (PY_Cstruct_ptr *) obj;
    *addr = self->obj;
    return 1;
    // splicer end class.Cstruct_ptr.utility.from_object
}

// Wrap pointer to struct/class.
PyObject *PP_Cstruct_list_to_Object_idtor(Cstruct_list *addr, int idtor)
{
    // splicer begin class.Cstruct_list.utility.to_object
    PY_Cstruct_list *obj =
        PyObject_New(PY_Cstruct_list, &PY_Cstruct_list_Type);
    if (obj == NULL)
        return NULL;
    obj->obj = addr;
    obj->idtor = idtor;
    // Python objects for members.
    obj->ivalue_obj = NULL;
    obj->dvalue_obj = NULL;
    obj->svalue_obj = NULL;
    return (PyObject *) obj;
    // splicer end class.Cstruct_list.utility.to_object
}

// converter which may be used with PyBuild.
PyObject *PP_Cstruct_list_to_Object(Cstruct_list *addr)
{
    // splicer begin class.Cstruct_list.utility.to_object
    PyObject *voidobj;
    PyObject *args;
    PyObject *rv;

    voidobj = PyCapsule_New(addr, PY_Cstruct_list_capsule_name, NULL);
    args = PyTuple_New(1);
    PyTuple_SET_ITEM(args, 0, voidobj);
    rv = PyObject_Call((PyObject *) &PY_Cstruct_list_Type, args, NULL);
    Py_DECREF(args);
    return rv;
    // splicer end class.Cstruct_list.utility.to_object
}

// converter which may be used with PyArg_Parse.
int PP_Cstruct_list_from_Object(PyObject *obj, void **addr)
{
    // splicer begin class.Cstruct_list.utility.from_object
    if (obj->ob_type != &PY_Cstruct_list_Type) {
        // raise exception
        return 0;
    }
    PY_Cstruct_list * self = (PY_Cstruct_list *) obj;
    *addr = self->obj;
    return 1;
    // splicer end class.Cstruct_list.utility.from_object
}

// Wrap pointer to struct/class.
PyObject *PP_Cstruct_numpy_to_Object_idtor(Cstruct_numpy *addr,
    int idtor)
{
    // splicer begin class.Cstruct_numpy.utility.to_object
    PY_Cstruct_numpy *obj =
        PyObject_New(PY_Cstruct_numpy, &PY_Cstruct_numpy_Type);
    if (obj == NULL)
        return NULL;
    obj->obj = addr;
    obj->idtor = idtor;
    // Python objects for members.
    obj->ivalue_obj = NULL;
    obj->dvalue_obj = NULL;
    return (PyObject *) obj;
    // splicer end class.Cstruct_numpy.utility.to_object
}

// converter which may be used with PyBuild.
PyObject *PP_Cstruct_numpy_to_Object(Cstruct_numpy *addr)
{
    // splicer begin class.Cstruct_numpy.utility.to_object
    PyObject *voidobj;
    PyObject *args;
    PyObject *rv;

    voidobj = PyCapsule_New(addr, PY_Cstruct_numpy_capsule_name, NULL);
    args = PyTuple_New(1);
    PyTuple_SET_ITEM(args, 0, voidobj);
    rv = PyObject_Call((PyObject *) &PY_Cstruct_numpy_Type, args, NULL);
    Py_DECREF(args);
    return rv;
    // splicer end class.Cstruct_numpy.utility.to_object
}

// converter which may be used with PyArg_Parse.
int PP_Cstruct_numpy_from_Object(PyObject *obj, void **addr)
{
    // splicer begin class.Cstruct_numpy.utility.from_object
    if (obj->ob_type != &PY_Cstruct_numpy_Type) {
        // raise exception
        return 0;
    }
    PY_Cstruct_numpy * self = (PY_Cstruct_numpy *) obj;
    *addr = self->obj;
    return 1;
    // splicer end class.Cstruct_numpy.utility.from_object
}

// ----------------------------------------
typedef struct {
    const char *name;
    void (*dtor)(void *ptr);
} PY_SHROUD_dtor_context;

// 0 - --none--
static void PY_SHROUD_capsule_destructor_0(void *ptr)
{
    // Do not release
}

// 1 - c Cstruct1 *
static void PY_SHROUD_capsule_destructor_1(void *ptr)
{
    free(ptr);
}

// 2 - c Cstruct_ptr *
static void PY_SHROUD_capsule_destructor_2(void *ptr)
{
    free(ptr);
}

// 3 - c Cstruct_list *
static void PY_SHROUD_capsule_destructor_3(void *ptr)
{
    free(ptr);
}

// 4 - c Cstruct_numpy *
static void PY_SHROUD_capsule_destructor_4(void *ptr)
{
    free(ptr);
}

// 5 - c const Cstruct1 *
static void PY_SHROUD_capsule_destructor_5(void *ptr)
{
    free(ptr);
}

// Code used to release arrays for NumPy objects
// via a Capsule base object with a destructor.
// Context strings
static PY_SHROUD_dtor_context PY_SHROUD_capsule_context[] = {
    {"--none--", PY_SHROUD_capsule_destructor_0},
    {"c Cstruct1 *", PY_SHROUD_capsule_destructor_1},
    {"c Cstruct_ptr *", PY_SHROUD_capsule_destructor_2},
    {"c Cstruct_list *", PY_SHROUD_capsule_destructor_3},
    {"c Cstruct_numpy *", PY_SHROUD_capsule_destructor_4},
    {"c const Cstruct1 *", PY_SHROUD_capsule_destructor_5},
    {NULL, NULL},
};

// Release memory based on icontext.
void PY_SHROUD_release_memory(int icontext, void *ptr)
{
    PY_SHROUD_capsule_context[icontext].dtor(ptr);
}

//Fetch garbage collection context.
void *PY_SHROUD_fetch_context(int icontext)
{
    return PY_SHROUD_capsule_context + icontext;
}

// destructor function for PyCapsule
void PY_SHROUD_capsule_destructor(PyObject *cap)
{
    void *ptr = PyCapsule_GetPointer(cap, "PY_array_dtor");
    PY_SHROUD_dtor_context * context = PyCapsule_GetContext(cap);
    context->dtor(ptr);
}
