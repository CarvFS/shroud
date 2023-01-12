// pyUser1type.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "pypreprocessmodule.hpp"

// splicer begin class.User1.impl.include
// splicer end class.User1.impl.include

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
// splicer begin class.User1.impl.C_definition
// splicer end class.User1.impl.C_definition
// splicer begin class.User1.impl.additional_methods
// splicer end class.User1.impl.additional_methods
static void
PY_User1_tp_del (PY_User1 *self)
{
// splicer begin class.User1.type.del
    PY_SHROUD_release_memory(self->idtor, self->obj);
    self->obj = nullptr;
// splicer end class.User1.type.del
}

// ----------------------------------------
// Function:  void method1
// Attrs:     +intent(subroutine)
// Exact:     py_default
static char PY_method1__doc__[] =
"documentation"
;

static PyObject *
PY_method1(
  PY_User1 *self,
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// splicer begin class.User1.method.method1
    self->obj->method1();
    Py_RETURN_NONE;
// splicer end class.User1.method.method1
}

// ----------------------------------------
// Function:  void method2
// Attrs:     +intent(subroutine)
// Exact:     py_default
#if defined(USE_TWO)
static char PY_method2__doc__[] =
"documentation"
;

static PyObject *
PY_method2(
  PY_User1 *self,
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// splicer begin class.User1.method.method2
    self->obj->method2();
    Py_RETURN_NONE;
// splicer end class.User1.method.method2
}
#endif // if defined(USE_TWO)

// ----------------------------------------
// Function:  void method3def
// Attrs:     +intent(subroutine)
// Exact:     py_default
// ----------------------------------------
// Argument:  int i=0 +value
// Attrs:     +intent(in)
// Requested: py_in_native_scalar
// Match:     py_default
#if defined(USE_THREE)
static char PY_method3def_1__doc__[] =
"documentation"
;

static PyObject *
PY_method3def_1(
  PY_User1 *self,
  PyObject *args,
  PyObject *kwds)
{
// splicer begin class.User1.method.method3def
    Py_ssize_t SH_nargs = 0;
    int i;
    const char *SHT_kwlist[] = {
        "i",
        nullptr };

    if (args != nullptr) SH_nargs += PyTuple_Size(args);
    if (kwds != nullptr) SH_nargs += PyDict_Size(args);
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|i:method3def",
        const_cast<char **>(SHT_kwlist), &i))
        return nullptr;
    switch (SH_nargs) {
    case 0:
        self->obj->method3def();
        break;
    case 1:
        self->obj->method3def(i);
        break;
    default:
        PyErr_SetString(PyExc_ValueError, "Wrong number of arguments");
        return nullptr;
    }
    Py_RETURN_NONE;
// splicer end class.User1.method.method3def
}
#endif // if defined(USE_THREE)
// splicer begin class.User1.impl.after_methods
// splicer end class.User1.impl.after_methods
static PyMethodDef PY_User1_methods[] = {
    {"method1", (PyCFunction)PY_method1, METH_NOARGS,
        PY_method1__doc__},
#if defined(USE_TWO)
    {"method2", (PyCFunction)PY_method2, METH_NOARGS,
        PY_method2__doc__},
#endif // if defined(USE_TWO)
#if defined(USE_THREE)
    {"method3def", (PyCFunction)PY_method3def_1,
        METH_VARARGS|METH_KEYWORDS, PY_method3def_1__doc__},
#endif // if defined(USE_THREE)
    // splicer begin class.User1.PyMethodDef
    // splicer end class.User1.PyMethodDef
    {nullptr,   (PyCFunction)nullptr, 0, nullptr}            /* sentinel */
};

static char User1__doc__[] =
"virtual class"
;

/* static */
PyTypeObject PY_User1_Type = {
    PyVarObject_HEAD_INIT(nullptr, 0)
    "preprocess.User1",                       /* tp_name */
    sizeof(PY_User1),         /* tp_basicsize */
    0,                              /* tp_itemsize */
    /* Methods to implement standard operations */
    (destructor)nullptr,                 /* tp_dealloc */
    (printfunc)nullptr,                   /* tp_print */
    (getattrfunc)nullptr,                 /* tp_getattr */
    (setattrfunc)nullptr,                 /* tp_setattr */
#if PY_MAJOR_VERSION >= 3
    nullptr,                               /* tp_reserved */
#else
    (cmpfunc)nullptr,                     /* tp_compare */
#endif
    (reprfunc)nullptr,                    /* tp_repr */
    /* Method suites for standard classes */
    nullptr,                              /* tp_as_number */
    nullptr,                              /* tp_as_sequence */
    nullptr,                              /* tp_as_mapping */
    /* More standard operations (here for binary compatibility) */
    (hashfunc)nullptr,                    /* tp_hash */
    (ternaryfunc)nullptr,                 /* tp_call */
    (reprfunc)nullptr,                    /* tp_str */
    (getattrofunc)nullptr,                /* tp_getattro */
    (setattrofunc)nullptr,                /* tp_setattro */
    /* Functions to access object as input/output buffer */
    nullptr,                              /* tp_as_buffer */
    /* Flags to define presence of optional/expanded features */
    Py_TPFLAGS_DEFAULT,             /* tp_flags */
    User1__doc__,         /* tp_doc */
    /* Assigned meaning in release 2.0 */
    /* call function for all accessible objects */
    (traverseproc)nullptr,                /* tp_traverse */
    /* delete references to contained objects */
    (inquiry)nullptr,                     /* tp_clear */
    /* Assigned meaning in release 2.1 */
    /* rich comparisons */
    (richcmpfunc)nullptr,                 /* tp_richcompare */
    /* weak reference enabler */
    0,                              /* tp_weaklistoffset */
    /* Added in release 2.2 */
    /* Iterators */
    (getiterfunc)nullptr,                 /* tp_iter */
    (iternextfunc)nullptr,                /* tp_iternext */
    /* Attribute descriptor and subclassing stuff */
    PY_User1_methods,                             /* tp_methods */
    nullptr,                              /* tp_members */
    nullptr,                             /* tp_getset */
    nullptr,                              /* tp_base */
    nullptr,                              /* tp_dict */
    (descrgetfunc)nullptr,                /* tp_descr_get */
    (descrsetfunc)nullptr,                /* tp_descr_set */
    0,                              /* tp_dictoffset */
    (initproc)0,                   /* tp_init */
    (allocfunc)nullptr,                  /* tp_alloc */
    (newfunc)nullptr,                    /* tp_new */
    (freefunc)nullptr,                   /* tp_free */
    (inquiry)nullptr,                     /* tp_is_gc */
    nullptr,                              /* tp_bases */
    nullptr,                              /* tp_mro */
    nullptr,                              /* tp_cache */
    nullptr,                              /* tp_subclasses */
    nullptr,                              /* tp_weaklist */
    (destructor)PY_User1_tp_del,                 /* tp_del */
    0,                              /* tp_version_tag */
#if PY_MAJOR_VERSION >= 3
    (destructor)nullptr,                  /* tp_finalize */
#endif
};
