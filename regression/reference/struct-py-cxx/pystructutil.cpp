// pystructutil.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2022, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// shroud
#include "pystructmodule.hpp"

#ifdef __cplusplus
#define SHROUD_UNUSED(param)
#else
#define SHROUD_UNUSED(param) param
#endif

#if PY_MAJOR_VERSION >= 3
#define PyInt_AsLong PyLong_AsLong
#define PyInt_FromLong PyLong_FromLong
#define PyInt_FromSize_t PyLong_FromSize_t
#define PyString_FromString PyUnicode_FromString
#define PyString_FromStringAndSize PyUnicode_FromStringAndSize
#endif

const char *PY_Cstruct_as_class_capsule_name = "Cstruct_as_class";


// Wrap pointer to struct/class.
PyObject *PP_Cstruct_as_class_to_Object_idtor(Cstruct_as_class *addr,
    int idtor)
{
    // splicer begin class.Cstruct_as_class.utility.to_object
    PY_Cstruct_as_class *obj =
        PyObject_New(PY_Cstruct_as_class, &PY_Cstruct_as_class_Type);
    if (obj == nullptr)
        return nullptr;
    obj->obj = addr;
    obj->idtor = idtor;
    return reinterpret_cast<PyObject *>(obj);
    // splicer end class.Cstruct_as_class.utility.to_object
}

// converter which may be used with PyBuild.
PyObject *PP_Cstruct_as_class_to_Object(Cstruct_as_class *addr)
{
    // splicer begin class.Cstruct_as_class.utility.to_object
    PyObject *voidobj;
    PyObject *args;
    PyObject *rv;

    voidobj = PyCapsule_New(addr, PY_Cstruct_as_class_capsule_name, nullptr);
    args = PyTuple_New(1);
    PyTuple_SET_ITEM(args, 0, voidobj);
    rv = PyObject_Call((PyObject *) &PY_Cstruct_as_class_Type, args, nullptr);
    Py_DECREF(args);
    return rv;
    // splicer end class.Cstruct_as_class.utility.to_object
}

// converter which may be used with PyArg_Parse.
int PP_Cstruct_as_class_from_Object(PyObject *obj, void **addr)
{
    // splicer begin class.Cstruct_as_class.utility.from_object
    if (obj->ob_type != &PY_Cstruct_as_class_Type) {
        // raise exception
        return 0;
    }
    PY_Cstruct_as_class * self = (PY_Cstruct_as_class *) obj;
    *addr = self->obj;
    return 1;
    // splicer end class.Cstruct_as_class.utility.from_object
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

// 1 - cxx Cstruct_as_class *
static void PY_SHROUD_capsule_destructor_1(void *ptr)
{
    Cstruct_as_class * cxx_ptr = static_cast<Cstruct_as_class *>(ptr);
    delete cxx_ptr;
}

// Code used to release arrays for NumPy objects
// via a Capsule base object with a destructor.
// Context strings
static PY_SHROUD_dtor_context PY_SHROUD_capsule_context[] = {
    {"--none--", PY_SHROUD_capsule_destructor_0},
    {"cxx Cstruct_as_class *", PY_SHROUD_capsule_destructor_1},
    {nullptr, nullptr},
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
    PY_SHROUD_dtor_context * context = static_cast<PY_SHROUD_dtor_context *>
        (PyCapsule_GetContext(cap));
    context->dtor(ptr);
}
