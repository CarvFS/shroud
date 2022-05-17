// pyClass1type.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "pyclassesmodule.hpp"

// splicer begin class.Class1.impl.include
// splicer end class.Class1.impl.include

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
// splicer begin class.Class1.impl.C_definition
// splicer end class.Class1.impl.C_definition
// splicer begin class.Class1.impl.additional_methods
// splicer end class.Class1.impl.additional_methods
static void
PY_Class1_tp_del (PY_Class1 *self)
{
// splicer begin class.Class1.type.del
    PY_SHROUD_release_memory(self->idtor, self->obj);
    self->obj = nullptr;
// splicer end class.Class1.type.del
}

// ----------------------------------------
// Function:  Class1
// Attrs:     +api(capptr)+intent(ctor)
// Exact:     py_default
static int
PY_Class1_tp_init_default(
  PY_Class1 *self,
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// splicer begin class.Class1.method.ctor_default
    self->obj = new classes::Class1();
    if (self->obj == nullptr) {
        PyErr_NoMemory();
        return -1;
    }
    self->idtor = 1;
    return 0;
// splicer end class.Class1.method.ctor_default
}

// ----------------------------------------
// Function:  Class1
// Attrs:     +api(capptr)+intent(ctor)
// Exact:     py_default
// ----------------------------------------
// Argument:  int flag +value
// Attrs:     +intent(in)
// Requested: py_in_native_scalar
// Match:     py_default
static int
PY_Class1_tp_init_flag(
  PY_Class1 *self,
  PyObject *args,
  PyObject *kwds)
{
// splicer begin class.Class1.method.ctor_flag
    int flag;
    const char *SHT_kwlist[] = {
        "flag",
        nullptr };

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "i:ctor",
        const_cast<char **>(SHT_kwlist), &flag))
        return -1;

    self->obj = new classes::Class1(flag);
    if (self->obj == nullptr) {
        PyErr_NoMemory();
        return -1;
    }
    self->idtor = 1;
    return 0;
// splicer end class.Class1.method.ctor_flag
}

// ----------------------------------------
// Function:  int Method1
// Attrs:     +intent(function)
// Requested: py_function_native_scalar
// Match:     py_default
static char PY_Method1__doc__[] =
"documentation"
;

/**
 * \brief returns the value of flag member
 *
 */
static PyObject *
PY_Method1(
  PY_Class1 *self,
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// splicer begin class.Class1.method.method1
    PyObject * SHTPy_rv = nullptr;

    int SHCXX_rv = self->obj->Method1();

    // post_call
    SHTPy_rv = PyInt_FromLong(SHCXX_rv);

    return (PyObject *) SHTPy_rv;
// splicer end class.Class1.method.method1
}

// ----------------------------------------
// Function:  bool equivalent
// Attrs:     +intent(function)
// Requested: py_function_bool_scalar
// Match:     py_function_bool
// ----------------------------------------
// Argument:  const Class1 & obj2
// Attrs:     +intent(in)
// Exact:     py_in_shadow_&
static char PY_equivalent__doc__[] =
"documentation"
;

/**
 * \brief Pass in reference to instance
 *
 */
static PyObject *
PY_equivalent(
  PY_Class1 *self,
  PyObject *args,
  PyObject *kwds)
{
// splicer begin class.Class1.method.equivalent
    PY_Class1 * SHPy_obj2;
    const char *SHT_kwlist[] = {
        "obj2",
        nullptr };
    PyObject * SHTPy_rv = nullptr;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O!:equivalent",
        const_cast<char **>(SHT_kwlist), &PY_Class1_Type, &SHPy_obj2))
        return nullptr;

    // post_declare
    const classes::Class1 * obj2 = SHPy_obj2 ? SHPy_obj2->obj : nullptr;

    bool SHCXX_rv = self->obj->equivalent(*obj2);

    // post_call
    SHTPy_rv = PyBool_FromLong(SHCXX_rv);
    if (SHTPy_rv == nullptr) goto fail;

    return (PyObject *) SHTPy_rv;

fail:
    Py_XDECREF(SHTPy_rv);
    return nullptr;
// splicer end class.Class1.method.equivalent
}

// ----------------------------------------
// Function:  Class1 * getclass3
// Attrs:     +api(capptr)+intent(function)
// Exact:     py_function_shadow_*
static char PY_getclass3__doc__[] =
"documentation"
;

/**
 * \brief Test const method
 *
 */
static PyObject *
PY_getclass3(
  PY_Class1 *self,
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// splicer begin class.Class1.method.getclass3
    classes::Class1 * SHCXX_rv = self->obj->getclass3();

    // post_call
    PY_Class1 * SHTPy_rv = PyObject_New(PY_Class1, &PY_Class1_Type);
    SHTPy_rv->obj = SHCXX_rv;

    return (PyObject *) SHTPy_rv;
// splicer end class.Class1.method.getclass3
}

// ----------------------------------------
// Function:  const std::string & getName
// Attrs:     +deref(allocatable)+intent(function)
// Exact:     py_function_string_&
static char PY_getName__doc__[] =
"documentation"
;

/**
 * \brief test helper
 *
 */
static PyObject *
PY_getName(
  PY_Class1 *self,
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// splicer begin class.Class1.method.get_name
    PyObject * SHTPy_rv = nullptr;

    const std::string & SHCXX_rv = self->obj->getName();

    // post_call
    SHTPy_rv = PyString_FromStringAndSize(SHCXX_rv.data(),
        SHCXX_rv.size());

    return (PyObject *) SHTPy_rv;
// splicer end class.Class1.method.get_name
}

// ----------------------------------------
// Function:  DIRECTION directionFunc
// Attrs:     +intent(function)
// Requested: py_function_native_scalar
// Match:     py_default
// ----------------------------------------
// Argument:  DIRECTION arg +value
// Attrs:     +intent(in)
// Requested: py_in_native_scalar
// Match:     py_default
static char PY_directionFunc__doc__[] =
"documentation"
;

static PyObject *
PY_directionFunc(
  PY_Class1 *self,
  PyObject *args,
  PyObject *kwds)
{
// splicer begin class.Class1.method.direction_func
    int arg;
    const char *SHT_kwlist[] = {
        "arg",
        nullptr };
    PyObject * SHTPy_rv = nullptr;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "i:directionFunc",
        const_cast<char **>(SHT_kwlist), &arg))
        return nullptr;

    // post_declare
    classes::Class1::DIRECTION SH_arg =
        static_cast<classes::Class1::DIRECTION>(arg);

    classes::Class1::DIRECTION SHCXX_rv =
        self->obj->directionFunc(SH_arg);

    // post_call
    SHTPy_rv = PyInt_FromLong(SHCXX_rv);

    return (PyObject *) SHTPy_rv;
// splicer end class.Class1.method.direction_func
}

static int
PY_Class1_tp_init(
  PY_Class1 *self,
  PyObject *args,
  PyObject *kwds)
{
// splicer begin class.Class1.method.ctor
    Py_ssize_t SHT_nargs = 0;
    if (args != nullptr) SHT_nargs += PyTuple_Size(args);
    if (kwds != nullptr) SHT_nargs += PyDict_Size(args);
    int rv;
    if (SHT_nargs == 0) {
        rv = PY_Class1_tp_init_default(self, args, kwds);
        if (!PyErr_Occurred()) {
            return rv;
        } else if (! PyErr_ExceptionMatches(PyExc_TypeError)) {
            return rv;
        }
        PyErr_Clear();
    }
    if (SHT_nargs == 1) {
        rv = PY_Class1_tp_init_flag(self, args, kwds);
        if (!PyErr_Occurred()) {
            return rv;
        } else if (! PyErr_ExceptionMatches(PyExc_TypeError)) {
            return rv;
        }
        PyErr_Clear();
    }
    PyErr_SetString(PyExc_TypeError, "wrong arguments multi-dispatch");
    return -1;
// splicer end class.Class1.method.ctor
}
// splicer begin class.Class1.impl.after_methods
// splicer end class.Class1.impl.after_methods

// Requested: py_descr_native_scalar
// Match:     py_descr_native
static PyObject *PY_Class1_m_flag_getter(PY_Class1 *self,
    void *SHROUD_UNUSED(closure))
{
    PyObject * rv = PyInt_FromLong(self->obj->m_flag);
    return rv;
}

// Requested: py_descr_native_scalar
// Match:     py_descr_native
static PyObject *PY_Class1_test_getter(PY_Class1 *self,
    void *SHROUD_UNUSED(closure))
{
    PyObject * rv = PyInt_FromLong(self->obj->m_test);
    return rv;
}

// Requested: py_descr_native_scalar
// Match:     py_descr_native
static int PY_Class1_test_setter(PY_Class1 *self, PyObject *value,
    void *SHROUD_UNUSED(closure))
{
    int rv = PyInt_AsLong(value);
    if (PyErr_Occurred()) {
        return -1;
    }
    self->obj->m_test = rv;
    return 0;
}

static PyGetSetDef PY_Class1_getset[] = {
    {(char *)"m_flag", (getter)PY_Class1_m_flag_getter, (setter)nullptr,
        nullptr, nullptr},
    {(char *)"test", (getter)PY_Class1_test_getter,
        (setter)PY_Class1_test_setter, nullptr, nullptr},
    // splicer begin class.Class1.PyGetSetDef
    // splicer end class.Class1.PyGetSetDef
    {nullptr}            /* sentinel */
};
static PyMethodDef PY_Class1_methods[] = {
    {"Method1", (PyCFunction)PY_Method1, METH_NOARGS,
        PY_Method1__doc__},
    {"equivalent", (PyCFunction)PY_equivalent,
        METH_VARARGS|METH_KEYWORDS, PY_equivalent__doc__},
    {"getclass3", (PyCFunction)PY_getclass3, METH_NOARGS,
        PY_getclass3__doc__},
    {"getName", (PyCFunction)PY_getName, METH_NOARGS,
        PY_getName__doc__},
    {"directionFunc", (PyCFunction)PY_directionFunc,
        METH_VARARGS|METH_KEYWORDS, PY_directionFunc__doc__},
    // splicer begin class.Class1.PyMethodDef
    // splicer end class.Class1.PyMethodDef
    {nullptr,   (PyCFunction)nullptr, 0, nullptr}            /* sentinel */
};

static char Class1__doc__[] =
"virtual class"
;

/* static */
PyTypeObject PY_Class1_Type = {
    PyVarObject_HEAD_INIT(nullptr, 0)
    "classes.Class1",                       /* tp_name */
    sizeof(PY_Class1),         /* tp_basicsize */
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
    Class1__doc__,         /* tp_doc */
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
    PY_Class1_methods,                             /* tp_methods */
    nullptr,                              /* tp_members */
    PY_Class1_getset,                             /* tp_getset */
    nullptr,                              /* tp_base */
    nullptr,                              /* tp_dict */
    (descrgetfunc)nullptr,                /* tp_descr_get */
    (descrsetfunc)nullptr,                /* tp_descr_set */
    0,                              /* tp_dictoffset */
    (initproc)PY_Class1_tp_init,                   /* tp_init */
    (allocfunc)nullptr,                  /* tp_alloc */
    (newfunc)nullptr,                    /* tp_new */
    (freefunc)nullptr,                   /* tp_free */
    (inquiry)nullptr,                     /* tp_is_gc */
    nullptr,                              /* tp_bases */
    nullptr,                              /* tp_mro */
    nullptr,                              /* tp_cache */
    nullptr,                              /* tp_subclasses */
    nullptr,                              /* tp_weaklist */
    (destructor)PY_Class1_tp_del,                 /* tp_del */
    0,                              /* tp_version_tag */
#if PY_MAJOR_VERSION >= 3
    (destructor)nullptr,                  /* tp_finalize */
#endif
};
