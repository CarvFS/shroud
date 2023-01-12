// pyCstruct1type.c
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "pystructmodule.h"

// splicer begin class.Cstruct1.impl.include
// splicer end class.Cstruct1.impl.include

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
// splicer begin class.Cstruct1.impl.C_definition
// splicer end class.Cstruct1.impl.C_definition
// splicer begin class.Cstruct1.impl.additional_methods
// splicer end class.Cstruct1.impl.additional_methods
static void
PY_Cstruct1_tp_del (PY_Cstruct1 *self)
{
// splicer begin class.Cstruct1.type.del
    PY_SHROUD_release_memory(self->idtor, self->obj);
    self->obj = NULL;
// splicer end class.Cstruct1.type.del
}

// ----------------------------------------
// Function:  Cstruct1 +name(Cstruct1_ctor)
// Attrs:     +intent(ctor)
// Exact:     py_default
// ----------------------------------------
// Argument:  int ifield
// Attrs:     +intent(in)
// Requested: py_ctor_native_scalar_numpy
// Match:     py_ctor_native
// ----------------------------------------
// Argument:  double dfield
// Attrs:     +intent(in)
// Requested: py_ctor_native_scalar_numpy
// Match:     py_ctor_native
static int
PY_Cstruct1_tp_init(
  PY_Cstruct1 *self,
  PyObject *args,
  PyObject *kwds)
{
// splicer begin class.Cstruct1.method.cstruct1_ctor
    int ifield = 0;
    double dfield = 0;
    char *SHT_kwlist[] = {
        "ifield",
        "dfield",
        NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|id:Cstruct1_ctor",
        SHT_kwlist, &ifield, &dfield))
        return -1;

    self->obj = malloc(sizeof(Cstruct1));
    if (self->obj == NULL) {
        PyErr_NoMemory();
        return -1;
    }
    self->idtor = 1;

    // post_call - initialize fields
    Cstruct1 *SH_obj = self->obj;
    SH_obj->ifield = ifield;
    SH_obj->dfield = dfield;

    return 0;
// splicer end class.Cstruct1.method.cstruct1_ctor
}
// splicer begin class.Cstruct1.impl.after_methods
// splicer end class.Cstruct1.impl.after_methods

// Requested: py_descr_native_scalar
// Match:     py_descr_native
static PyObject *PY_Cstruct1_ifield_getter(PY_Cstruct1 *self,
    void *SHROUD_UNUSED(closure))
{
    PyObject * rv = PyInt_FromLong(self->obj->ifield);
    return rv;
}

// Requested: py_descr_native_scalar
// Match:     py_descr_native
static int PY_Cstruct1_ifield_setter(PY_Cstruct1 *self, PyObject *value,
    void *SHROUD_UNUSED(closure))
{
    int rv = PyInt_AsLong(value);
    if (PyErr_Occurred()) {
        return -1;
    }
    self->obj->ifield = rv;
    return 0;
}

// Requested: py_descr_native_scalar
// Match:     py_descr_native
static PyObject *PY_Cstruct1_dfield_getter(PY_Cstruct1 *self,
    void *SHROUD_UNUSED(closure))
{
    PyObject * rv = PyFloat_FromDouble(self->obj->dfield);
    return rv;
}

// Requested: py_descr_native_scalar
// Match:     py_descr_native
static int PY_Cstruct1_dfield_setter(PY_Cstruct1 *self, PyObject *value,
    void *SHROUD_UNUSED(closure))
{
    double rv = PyFloat_AsDouble(value);
    if (PyErr_Occurred()) {
        return -1;
    }
    self->obj->dfield = rv;
    return 0;
}

static PyGetSetDef PY_Cstruct1_getset[] = {
    {(char *)"ifield", (getter)PY_Cstruct1_ifield_getter,
        (setter)PY_Cstruct1_ifield_setter, NULL, NULL},
    {(char *)"dfield", (getter)PY_Cstruct1_dfield_getter,
        (setter)PY_Cstruct1_dfield_setter, NULL, NULL},
    // splicer begin class.Cstruct1.PyGetSetDef
    // splicer end class.Cstruct1.PyGetSetDef
    {NULL}            /* sentinel */
};
static PyMethodDef PY_Cstruct1_methods[] = {
    // splicer begin class.Cstruct1.PyMethodDef
    // splicer end class.Cstruct1.PyMethodDef
    {NULL,   (PyCFunction)NULL, 0, NULL}            /* sentinel */
};

static char Cstruct1__doc__[] =
"virtual class"
;

/* static */
PyTypeObject PY_Cstruct1_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "cstruct.Cstruct1",                       /* tp_name */
    sizeof(PY_Cstruct1),         /* tp_basicsize */
    0,                              /* tp_itemsize */
    /* Methods to implement standard operations */
    (destructor)NULL,                 /* tp_dealloc */
    (printfunc)NULL,                   /* tp_print */
    (getattrfunc)NULL,                 /* tp_getattr */
    (setattrfunc)NULL,                 /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    NULL,                               /* tp_reserved */
#else
    (cmpfunc)NULL,                     /* tp_compare */
#endif
    (reprfunc)NULL,                    /* tp_repr */
    /* Method suites for standard classes */
    NULL,                              /* tp_as_number */
    NULL,                              /* tp_as_sequence */
    NULL,                              /* tp_as_mapping */
    /* More standard operations (here for binary compatibility) */
    (hashfunc)NULL,                    /* tp_hash */
    (ternaryfunc)NULL,                 /* tp_call */
    (reprfunc)NULL,                    /* tp_str */
    (getattrofunc)NULL,                /* tp_getattro */
    (setattrofunc)NULL,                /* tp_setattro */
    /* Functions to access object as input/output buffer */
    NULL,                              /* tp_as_buffer */
    /* Flags to define presence of optional/expanded features */
    Py_TPFLAGS_DEFAULT,             /* tp_flags */
    Cstruct1__doc__,         /* tp_doc */
    /* Assigned meaning in release 2.0 */
    /* call function for all accessible objects */
    (traverseproc)NULL,                /* tp_traverse */
    /* delete references to contained objects */
    (inquiry)NULL,                     /* tp_clear */
    /* Assigned meaning in release 2.1 */
    /* rich comparisons */
    (richcmpfunc)NULL,                 /* tp_richcompare */
    /* weak reference enabler */
    0,                              /* tp_weaklistoffset */
    /* Added in release 2.2 */
    /* Iterators */
    (getiterfunc)NULL,                 /* tp_iter */
    (iternextfunc)NULL,                /* tp_iternext */
    /* Attribute descriptor and subclassing stuff */
    PY_Cstruct1_methods,                             /* tp_methods */
    NULL,                              /* tp_members */
    PY_Cstruct1_getset,                             /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,                /* tp_descr_get */
    (descrsetfunc)NULL,                /* tp_descr_set */
    0,                              /* tp_dictoffset */
    (initproc)PY_Cstruct1_tp_init,                   /* tp_init */
    (allocfunc)NULL,                  /* tp_alloc */
    (newfunc)NULL,                    /* tp_new */
    (freefunc)NULL,                   /* tp_free */
    (inquiry)NULL,                     /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor)PY_Cstruct1_tp_del,                 /* tp_del */
    0,                              /* tp_version_tag */
#if PY_MAJOR_VERSION >= 3
    (destructor)NULL,                  /* tp_finalize */
#endif
};
