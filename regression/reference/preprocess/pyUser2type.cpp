// pyUser2type.cpp
// This is generated code, do not edit
// #######################################################################
// Copyright (c) 2017-2019, Lawrence Livermore National Security, LLC.
//
// Produced at the Lawrence Livermore National Laboratory
//
// LLNL-CODE-738041.
//
// All rights reserved.
//
// This file is part of Shroud.
//
// For details about use and distribution, please read LICENSE.
//
// #######################################################################
#ifdef USE_USER2
#include "pypreprocessmodule.hpp"
#include "User2.hpp"
// splicer begin class.User2.impl.include
// splicer end class.User2.impl.include

#ifdef __cplusplus
#define SHROUD_UNUSED(param)
#else
#define SHROUD_UNUSED(param) param
#endif

#if PY_MAJOR_VERSION >= 3
#define PyInt_AsLong PyLong_AsLong
#define PyInt_FromLong PyLong_FromLong
#define PyString_FromString PyUnicode_FromString
#define PyString_FromStringAndSize PyUnicode_FromStringAndSize
#endif
// splicer begin class.User2.impl.C_definition
// splicer end class.User2.impl.C_definition
// splicer begin class.User2.impl.additional_methods
// splicer end class.User2.impl.additional_methods
static void
PY_User2_tp_del (PY_User2 *self)
{
// splicer begin class.User2.type.del
    PY_SHROUD_release_memory(self->idtor, self->obj);
    self->obj = NULL;
// splicer end class.User2.type.del
}

#ifdef USE_CLASS3_A
static PyObject *
PY_exfunc_0(
  PY_User2 *self,
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// void exfunc()
// splicer begin class.User2.method.exfunc_0
    self->obj->exfunc();
    Py_RETURN_NONE;
// splicer end class.User2.method.exfunc_0
}
#endif // ifdef USE_CLASS3_A

#ifndef USE_CLASS3_A
static PyObject *
PY_exfunc_1(
  PY_User2 *self,
  PyObject *args,
  PyObject *kwds)
{
// void exfunc(int flag +intent(in)+value)
// splicer begin class.User2.method.exfunc_1
    int flag;
    const char *SHT_kwlist[] = {
        "flag",
        NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "i:exfunc",
        const_cast<char **>(SHT_kwlist), &flag))
        return NULL;

    self->obj->exfunc(flag);
    Py_RETURN_NONE;
// splicer end class.User2.method.exfunc_1
}
#endif // ifndef USE_CLASS3_A

static char PY_exfunc__doc__[] =
"documentation"
;

static PyObject *
PY_exfunc(
  PY_User2 *self,
  PyObject *args,
  PyObject *kwds)
{
// splicer begin class.User2.method.exfunc
    Py_ssize_t SHT_nargs = 0;
    if (args != NULL) SHT_nargs += PyTuple_Size(args);
    if (kwds != NULL) SHT_nargs += PyDict_Size(args);
    PyObject *rvobj;
#ifdef USE_CLASS3_A
    if (SHT_nargs == 0) {
        rvobj = PY_exfunc_0(self, args, kwds);
        if (!PyErr_Occurred()) {
            return rvobj;
        } else if (! PyErr_ExceptionMatches(PyExc_TypeError)) {
            return rvobj;
        }
        PyErr_Clear();
    }
#endif // ifdef USE_CLASS3_A
#ifndef USE_CLASS3_A
    if (SHT_nargs == 1) {
        rvobj = PY_exfunc_1(self, args, kwds);
        if (!PyErr_Occurred()) {
            return rvobj;
        } else if (! PyErr_ExceptionMatches(PyExc_TypeError)) {
            return rvobj;
        }
        PyErr_Clear();
    }
#endif // ifndef USE_CLASS3_A
    PyErr_SetString(PyExc_TypeError, "wrong arguments multi-dispatch");
    return NULL;
// splicer end class.User2.method.exfunc
}
// splicer begin class.User2.impl.after_methods
// splicer end class.User2.impl.after_methods
static PyMethodDef PY_User2_methods[] = {
    {"exfunc", (PyCFunction)PY_exfunc, METH_VARARGS|METH_KEYWORDS,
        PY_exfunc__doc__},
    // splicer begin class.User2.PyMethodDef
    // splicer end class.User2.PyMethodDef
    {NULL,   (PyCFunction)NULL, 0, NULL}            /* sentinel */
};

static char User2__doc__[] =
"virtual class"
;

/* static */
PyTypeObject PY_User2_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "preprocess.User2",                       /* tp_name */
    sizeof(PY_User2),         /* tp_basicsize */
    0,                              /* tp_itemsize */
    /* Methods to implement standard operations */
    (destructor)0,                 /* tp_dealloc */
    (printfunc)0,                   /* tp_print */
    (getattrfunc)0,                 /* tp_getattr */
    (setattrfunc)0,                 /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    0,                               /* tp_reserved */
#else
    (cmpfunc)0,                     /* tp_compare */
#endif
    (reprfunc)0,                    /* tp_repr */
    /* Method suites for standard classes */
    0,                              /* tp_as_number */
    0,                              /* tp_as_sequence */
    0,                              /* tp_as_mapping */
    /* More standard operations (here for binary compatibility) */
    (hashfunc)0,                    /* tp_hash */
    (ternaryfunc)0,                 /* tp_call */
    (reprfunc)0,                    /* tp_str */
    (getattrofunc)0,                /* tp_getattro */
    (setattrofunc)0,                /* tp_setattro */
    /* Functions to access object as input/output buffer */
    0,                              /* tp_as_buffer */
    /* Flags to define presence of optional/expanded features */
    Py_TPFLAGS_DEFAULT,             /* tp_flags */
    User2__doc__,         /* tp_doc */
    /* Assigned meaning in release 2.0 */
    /* call function for all accessible objects */
    (traverseproc)0,                /* tp_traverse */
    /* delete references to contained objects */
    (inquiry)0,                     /* tp_clear */
    /* Assigned meaning in release 2.1 */
    /* rich comparisons */
    (richcmpfunc)0,                 /* tp_richcompare */
    /* weak reference enabler */
    0,                              /* tp_weaklistoffset */
    /* Added in release 2.2 */
    /* Iterators */
    (getiterfunc)0,                 /* tp_iter */
    (iternextfunc)0,                /* tp_iternext */
    /* Attribute descriptor and subclassing stuff */
    PY_User2_methods,                             /* tp_methods */
    0,                              /* tp_members */
    0,                             /* tp_getset */
    0,                              /* tp_base */
    0,                              /* tp_dict */
    (descrgetfunc)0,                /* tp_descr_get */
    (descrsetfunc)0,                /* tp_descr_set */
    0,                              /* tp_dictoffset */
    (initproc)0,                   /* tp_init */
    (allocfunc)0,                  /* tp_alloc */
    (newfunc)0,                    /* tp_new */
    (freefunc)0,                   /* tp_free */
    (inquiry)0,                     /* tp_is_gc */
    0,                              /* tp_bases */
    0,                              /* tp_mro */
    0,                              /* tp_cache */
    0,                              /* tp_subclasses */
    0,                              /* tp_weaklist */
    (destructor)PY_User2_tp_del,                 /* tp_del */
    0,                              /* tp_version_tag */
#if PY_MAJOR_VERSION >= 3
    (destructor)0,                  /* tp_finalize */
#endif
};
#endif // ifdef USE_USER2
