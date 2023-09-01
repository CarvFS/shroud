// pyArrays1type.c
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "pystructmodule.h"
#define NO_IMPORT_ARRAY
#define PY_ARRAY_UNIQUE_SYMBOL SHROUD_STRUCT_ARRAY_API
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include "numpy/arrayobject.h"

// splicer begin class.Arrays1.impl.include
// splicer end class.Arrays1.impl.include

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
// splicer begin class.Arrays1.impl.C_definition
// splicer end class.Arrays1.impl.C_definition
// splicer begin class.Arrays1.impl.additional_methods
// splicer end class.Arrays1.impl.additional_methods
static void
PY_Arrays1_tp_del (PY_Arrays1 *self)
{
// splicer begin class.Arrays1.type.del
    PY_SHROUD_release_memory(self->idtor, self->obj);
    self->obj = NULL;
    // Python objects for members.
    Py_XDECREF(self->name_obj);
    Py_XDECREF(self->count_obj);
    // Python objects for members.
    Py_XDECREF(self->name_dataobj);
    Py_XDECREF(self->count_dataobj);
// splicer end class.Arrays1.type.del
}

// ----------------------------------------
// Function:  Arrays1 +name(Arrays1_ctor)
// Attrs:     +intent(ctor)
// Exact:     py_default
// ----------------------------------------
// Argument:  char name[20]
// Attrs:     +intent(in)
// Exact:     py_ctor_char_[]_numpy
// ----------------------------------------
// Argument:  int count[10]
// Attrs:     +intent(in)
// Exact:     py_ctor_native_[]_numpy
static int
PY_Arrays1_tp_init(
  PY_Arrays1 *self,
  PyObject *args,
  PyObject *kwds)
{
// splicer begin class.Arrays1.method.Arrays1_ctor
    PyObject *SHPy_name = NULL;
    PyObject *SHPy_count = NULL;
    char *SHT_kwlist[] = {
        "name",
        "count",
        NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|OO:Arrays1_ctor",
        SHT_kwlist, &SHPy_name, &SHPy_count))
        return -1;

    self->obj = malloc(sizeof(Arrays1));
    if (self->obj == NULL) {
        PyErr_NoMemory();
        return -1;
    }
    self->idtor = 5;

    // post_call - initialize fields
    Arrays1 *SH_obj = self->obj;
    if (SHPy_name != NULL) {
        if (STR_SHROUD_fill_from_PyObject_char(SHPy_name, "name",
            SH_obj->name, 20) == -1)
            goto fail;
        self->name_obj = NULL;
    }
    if (SHPy_count != NULL) {
        if (STR_SHROUD_fill_from_PyObject_int_numpy(SHPy_count, "count",
            SH_obj->count, 10) == -1)
            goto fail;
        self->count_obj = NULL;
    }

    return 0;

fail:
    return -1;
// splicer end class.Arrays1.method.Arrays1_ctor
}
// splicer begin class.Arrays1.impl.after_methods
// splicer end class.Arrays1.impl.after_methods

// Exact:     py_descr_char_[]_numpy
static PyObject *PY_Arrays1_name_getter(PY_Arrays1 *self,
    void *SHROUD_UNUSED(closure))
{
    if (self->name_obj != NULL) {
        Py_INCREF(self->name_obj);
        return self->name_obj;
    }
    PyObject * rv = PyString_FromString(self->obj->name);
    // XXX assumes is null terminated
    return rv;
}

// Exact:     py_descr_char_[]_numpy
static int PY_Arrays1_name_setter(PY_Arrays1 *self, PyObject *value,
    void *SHROUD_UNUSED(closure))
{
    Py_XDECREF(self->name_obj);
    self->name_obj = NULL;
    if (STR_SHROUD_fill_from_PyObject_char(value, "name",
        self->obj->name, 20) == -1) {
        return -1;
    }
    return 0;
}

// Exact:     py_descr_native_[]_numpy
static PyObject *PY_Arrays1_count_getter(PY_Arrays1 *self,
    void *SHROUD_UNUSED(closure))
{
    if (self->count_obj == NULL) {
        // Create Numpy object which points to struct member.
        npy_intp dims[1] = { 10 };
        self->count_obj = PyArray_SimpleNewFromData(1, dims, NPY_INT,
            self->obj->count);
    }
    Py_INCREF(self->count_obj);
    return self->count_obj;
}

// Exact:     py_descr_native_[]_numpy
static int PY_Arrays1_count_setter(PY_Arrays1 *self, PyObject *value,
    void *SHROUD_UNUSED(closure))
{
    Py_XDECREF(self->count_obj);
    self->count_obj = NULL;
    if (STR_SHROUD_fill_from_PyObject_int_numpy(value, "count",
        self->obj->count, 10) == -1) {
        return -1;
    }
    return 0;
}

static PyGetSetDef PY_Arrays1_getset[] = {
    {(char *)"name", (getter)PY_Arrays1_name_getter,
        (setter)PY_Arrays1_name_setter, NULL, NULL},
    {(char *)"count", (getter)PY_Arrays1_count_getter,
        (setter)PY_Arrays1_count_setter, NULL, NULL},
    // splicer begin class.Arrays1.PyGetSetDef
    // splicer end class.Arrays1.PyGetSetDef
    {NULL}            /* sentinel */
};
static PyMethodDef PY_Arrays1_methods[] = {
    // splicer begin class.Arrays1.PyMethodDef
    // splicer end class.Arrays1.PyMethodDef
    {NULL,   (PyCFunction)NULL, 0, NULL}            /* sentinel */
};

static char Arrays1__doc__[] =
"virtual class"
;

/* static */
PyTypeObject PY_Arrays1_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "cstruct.Arrays1",                       /* tp_name */
    sizeof(PY_Arrays1),         /* tp_basicsize */
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
    Arrays1__doc__,         /* tp_doc */
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
    PY_Arrays1_methods,                             /* tp_methods */
    NULL,                              /* tp_members */
    PY_Arrays1_getset,                             /* tp_getset */
    NULL,                              /* tp_base */
    NULL,                              /* tp_dict */
    (descrgetfunc)NULL,                /* tp_descr_get */
    (descrsetfunc)NULL,                /* tp_descr_set */
    0,                              /* tp_dictoffset */
    (initproc)PY_Arrays1_tp_init,                   /* tp_init */
    (allocfunc)NULL,                  /* tp_alloc */
    (newfunc)NULL,                    /* tp_new */
    (freefunc)NULL,                   /* tp_free */
    (inquiry)NULL,                     /* tp_is_gc */
    NULL,                              /* tp_bases */
    NULL,                              /* tp_mro */
    NULL,                              /* tp_cache */
    NULL,                              /* tp_subclasses */
    NULL,                              /* tp_weaklist */
    (destructor)PY_Arrays1_tp_del,                 /* tp_del */
    0,                              /* tp_version_tag */
#if PY_MAJOR_VERSION >= 3
    (destructor)NULL,                  /* tp_finalize */
#endif
};
