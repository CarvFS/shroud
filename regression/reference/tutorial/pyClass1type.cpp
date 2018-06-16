// pyClass1type.cpp
// This is generated code, do not edit
// #######################################################################
// Copyright (c) 2017-2018, Lawrence Livermore National Security, LLC.
// Produced at the Lawrence Livermore National Laboratory
//
// LLNL-CODE-738041.
// All rights reserved.
//
// This file is part of Shroud.  For details, see
// https://github.com/LLNL/shroud. Please also read shroud/LICENSE.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
// * Redistributions of source code must retain the above copyright
//   notice, this list of conditions and the disclaimer below.
//
// * Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the disclaimer (as noted below)
//   in the documentation and/or other materials provided with the
//   distribution.
//
// * Neither the name of the LLNS/LLNL nor the names of its contributors
//   may be used to endorse or promote products derived from this
//   software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL LAWRENCE
// LIVERMORE NATIONAL SECURITY, LLC, THE U.S. DEPARTMENT OF ENERGY OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// #######################################################################
#include "pyTutorialmodule.hpp"
#include "tutorial.hpp"
// splicer begin class.Class1.impl.include
// splicer end class.Class1.impl.include

#ifdef __cplusplus
#define SHROUD_UNUSED(param)
#else
#define SHROUD_UNUSED(param) param
#endif

#if PY_MAJOR_VERSION >= 3
#define PyInt_FromLong PyLong_FromLong
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
    delete self->obj;
    self->obj = NULL;
// splicer end class.Class1.type.del
}

static int
PY_Class1_tp_init_default(
  PY_Class1 *self,
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// Class1() +name(new)
// splicer begin class.Class1.method.new_default
    self->obj = new tutorial::Class1();
    return 0;
// splicer end class.Class1.method.new_default
}

static int
PY_Class1_tp_init_flag(
  PY_Class1 *self,
  PyObject *args,
  PyObject *kwds)
{
// Class1(int flag +intent(in)+value) +name(new)
// splicer begin class.Class1.method.new_flag
    int flag;
    const char *SHT_kwlist[] = {
        "flag",
        NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "i:new",
        const_cast<char **>(SHT_kwlist), &flag))
        return -1;

    self->obj = new tutorial::Class1(flag);
    return 0;
// splicer end class.Class1.method.new_flag
}

static char PY_class1_Method1__doc__[] =
"documentation"
;

/**
 * \brief returns the value of flag member
 *
 */
static PyObject *
PY_class1_Method1(
  PY_Class1 *self,
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// int Method1()
// splicer begin class.Class1.method.method1
    int SHC_rv = self->obj->Method1();

    // post_call
    PyObject * SHTPy_rv = PyInt_FromLong(SHC_rv);

    return (PyObject *) SHTPy_rv;
// splicer end class.Class1.method.method1
}

static char PY_class1_equivalent__doc__[] =
"documentation"
;

/**
 * \brief Pass in reference to instance
 *
 */
static PyObject *
PY_class1_equivalent(
  PY_Class1 *self,
  PyObject *args,
  PyObject *kwds)
{
// bool equivalent(const Class1 & obj2 +intent(in)) const
// splicer begin class.Class1.method.equivalent
    PY_Class1 * SHPy_obj2;
    const char *SHT_kwlist[] = {
        "obj2",
        NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O!:equivalent",
        const_cast<char **>(SHT_kwlist), &PY_Class1_Type, &SHPy_obj2))
        return NULL;

    // post_parse
    const tutorial::Class1 * obj2 = SHPy_obj2 ? SHPy_obj2->obj : NULL;

    bool SHC_rv = self->obj->equivalent(*obj2);

    // post_call
    PyObject * SHTPy_rv = PyBool_FromLong(SHC_rv);

    return (PyObject *) SHTPy_rv;
// splicer end class.Class1.method.equivalent
}

static char PY_class1_directionFunc__doc__[] =
"documentation"
;

static PyObject *
PY_class1_directionFunc(
  PY_Class1 *self,
  PyObject *args,
  PyObject *kwds)
{
// DIRECTION directionFunc(DIRECTION arg +intent(in)+value)
// splicer begin class.Class1.method.direction_func
    int arg;
    const char *SHT_kwlist[] = {
        "arg",
        NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "i:directionFunc",
        const_cast<char **>(SHT_kwlist), &arg))
        return NULL;

    // post_parse
    tutorial::Class1::DIRECTION SH_arg =
        static_cast<tutorial::Class1::DIRECTION>(arg);

    tutorial::Class1::DIRECTION SHCXX_rv =
        self->obj->directionFunc(SH_arg);

    // post_call
    PyObject * SHTPy_rv = PyInt_FromLong(SHCXX_rv);

    return (PyObject *) SHTPy_rv;
// splicer end class.Class1.method.direction_func
}

static int
PY_Class1_tp_init(
  PY_Class1 *self,
  PyObject *args,
  PyObject *kwds)
{
// splicer begin class.Class1.method.new
    Py_ssize_t SHT_nargs = 0;
    if (args != NULL) SHT_nargs += PyTuple_Size(args);
    if (kwds != NULL) SHT_nargs += PyDict_Size(args);
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
// splicer end class.Class1.method.new
}
// splicer begin class.Class1.impl.after_methods
// splicer end class.Class1.impl.after_methods

static PyObject *PY_Class1_m_flag_getter(PY_Class1 *self,
    void *SHROUD_UNUSED(closure))
{
    PyObject * rv = PyInt_FromLong(self->obj->m_flag);
    return rv;
}

static PyObject *PY_Class1_test_getter(PY_Class1 *self,
    void *SHROUD_UNUSED(closure))
{
    PyObject * rv = PyInt_FromLong(self->obj->m_test);
    return rv;
}

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
    {(char *)"m_flag", (getter)PY_Class1_m_flag_getter, (setter)NULL,
        NULL, NULL},
    {(char *)"test", (getter)PY_Class1_test_getter,
        (setter)PY_Class1_test_setter, NULL, NULL},
    // splicer begin class.Class1.PyGetSetDef
    // splicer end class.Class1.PyGetSetDef
    {NULL}            /* sentinel */
};
static PyMethodDef PY_Class1_methods[] = {
    {"Method1", (PyCFunction)PY_class1_Method1, METH_NOARGS,
        PY_class1_Method1__doc__},
    {"equivalent", (PyCFunction)PY_class1_equivalent,
        METH_VARARGS|METH_KEYWORDS, PY_class1_equivalent__doc__},
    {"directionFunc", (PyCFunction)PY_class1_directionFunc,
        METH_VARARGS|METH_KEYWORDS, PY_class1_directionFunc__doc__},
    // splicer begin class.Class1.PyMethodDef
    // splicer end class.Class1.PyMethodDef
    {NULL,   (PyCFunction)NULL, 0, NULL}            /* sentinel */
};

static char Class1__doc__[] =
"virtual class"
;

/* static */
PyTypeObject PY_Class1_Type = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "tutorial.Class1",                       /* tp_name */
    sizeof(PY_Class1),         /* tp_basicsize */
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
    Class1__doc__,         /* tp_doc */
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
    PY_Class1_methods,                             /* tp_methods */
    0,                              /* tp_members */
    PY_Class1_getset,                             /* tp_getset */
    0,                              /* tp_base */
    0,                              /* tp_dict */
    (descrgetfunc)0,                /* tp_descr_get */
    (descrsetfunc)0,                /* tp_descr_set */
    0,                              /* tp_dictoffset */
    (initproc)PY_Class1_tp_init,                   /* tp_init */
    (allocfunc)0,                  /* tp_alloc */
    (newfunc)0,                    /* tp_new */
    (freefunc)0,                   /* tp_free */
    (inquiry)0,                     /* tp_is_gc */
    0,                              /* tp_bases */
    0,                              /* tp_mro */
    0,                              /* tp_cache */
    0,                              /* tp_subclasses */
    0,                              /* tp_weaklist */
    (destructor)PY_Class1_tp_del,                 /* tp_del */
    0,                              /* tp_version_tag */
#if PY_MAJOR_VERSION >= 3
    (destructor)0,                  /* tp_finalize */
#endif
};