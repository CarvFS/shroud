// pycxxlibrarymodule.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "pycxxlibrarymodule.hpp"
#define PY_ARRAY_UNIQUE_SYMBOL SHROUD_CXXLIBRARY_ARRAY_API
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include "numpy/arrayobject.h"

// splicer begin include
// splicer end include

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

// splicer begin C_definition
// splicer end C_definition
PyObject *PY_error_obj;
PyObject *PY_init_cxxlibrary_structns(void);
PyArray_Descr *PY_nested_array_descr;
// splicer begin additional_functions
// splicer end additional_functions

// ----------------------------------------
// Function:  int passStructByReferenceCls
// Attrs:     +intent(function)
// Statement: py_function_native_scalar
// ----------------------------------------
// Argument:  Cstruct1_cls & arg
// Attrs:     +intent(inout)
// Statement: py_inout_struct_&_class
static char PY_passStructByReferenceCls__doc__[] =
"documentation"
;

static PyObject *
PY_passStructByReferenceCls(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.passStructByReferenceCls
    PY_Cstruct1_cls * SHPy_arg;
    const char *SHT_kwlist[] = {
        "arg",
        nullptr };
    PyObject *SHTPy_rv = nullptr;  // return value object

    if (!PyArg_ParseTupleAndKeywords(args, kwds,
        "O!:passStructByReferenceCls", const_cast<char **>(SHT_kwlist), 
        &PY_Cstruct1_cls_Type, &SHPy_arg))
        return nullptr;

    // post_declare
    Cstruct1_cls * arg = SHPy_arg ? SHPy_arg->obj : nullptr;

    int SHCXX_rv = passStructByReferenceCls(*arg);

    // post_call
    SHTPy_rv = Py_BuildValue("iO", SHCXX_rv, SHPy_arg);

    return SHTPy_rv;
// splicer end function.passStructByReferenceCls
}

// ----------------------------------------
// Function:  int passStructByReferenceInCls
// Attrs:     +intent(function)
// Statement: py_function_native_scalar
// ----------------------------------------
// Argument:  const Cstruct1_cls & arg
// Attrs:     +intent(in)
// Statement: py_in_struct_&_class
static char PY_passStructByReferenceInCls__doc__[] =
"documentation"
;

/**
 * const defaults to intent(in)
 */
static PyObject *
PY_passStructByReferenceInCls(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.passStructByReferenceInCls
    PY_Cstruct1_cls * SHPy_arg;
    const char *SHT_kwlist[] = {
        "arg",
        nullptr };
    PyObject * SHTPy_rv = nullptr;

    if (!PyArg_ParseTupleAndKeywords(args, kwds,
        "O!:passStructByReferenceInCls",
        const_cast<char **>(SHT_kwlist), &PY_Cstruct1_cls_Type,
        &SHPy_arg))
        return nullptr;

    // post_declare
    const Cstruct1_cls * arg = SHPy_arg ? SHPy_arg->obj : nullptr;

    int SHCXX_rv = passStructByReferenceInCls(*arg);

    // post_call
    SHTPy_rv = PyInt_FromLong(SHCXX_rv);

    return (PyObject *) SHTPy_rv;
// splicer end function.passStructByReferenceInCls
}

// ----------------------------------------
// Function:  void passStructByReferenceInoutCls
// Attrs:     +intent(subroutine)
// Statement: py_default
// ----------------------------------------
// Argument:  Cstruct1_cls & arg +intent(inout)
// Attrs:     +intent(inout)
// Statement: py_inout_struct_&_class
static char PY_passStructByReferenceInoutCls__doc__[] =
"documentation"
;

static PyObject *
PY_passStructByReferenceInoutCls(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.passStructByReferenceInoutCls
    PY_Cstruct1_cls * SHPy_arg;
    const char *SHT_kwlist[] = {
        "arg",
        nullptr };

    if (!PyArg_ParseTupleAndKeywords(args, kwds,
        "O!:passStructByReferenceInoutCls",
        const_cast<char **>(SHT_kwlist), &PY_Cstruct1_cls_Type,
        &SHPy_arg))
        return nullptr;

    // post_declare
    Cstruct1_cls * arg = SHPy_arg ? SHPy_arg->obj : nullptr;

    passStructByReferenceInoutCls(*arg);
    return (PyObject *) SHPy_arg;
// splicer end function.passStructByReferenceInoutCls
}

// ----------------------------------------
// Function:  void passStructByReferenceOutCls
// Attrs:     +intent(subroutine)
// Statement: py_default
// ----------------------------------------
// Argument:  Cstruct1_cls & arg +intent(out)
// Attrs:     +intent(out)
// Statement: py_out_struct_&_class
static char PY_passStructByReferenceOutCls__doc__[] =
"documentation"
;

static PyObject *
PY_passStructByReferenceOutCls(
  PyObject *SHROUD_UNUSED(self),
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// splicer begin function.passStructByReferenceOutCls
    Cstruct1_cls *arg = nullptr;
    PyObject *SHPy_arg = nullptr;

    // pre_call
    arg = new Cstruct1_cls;

    passStructByReferenceOutCls(*arg);

    // post_call
    SHPy_arg = PP_Cstruct1_cls_to_Object_idtor(arg, 0);
    if (SHPy_arg == nullptr) goto fail;

    return (PyObject *) SHPy_arg;

fail:
    Py_XDECREF(SHPy_arg);
    return nullptr;
// splicer end function.passStructByReferenceOutCls
}

// ----------------------------------------
// Function:  bool defaultPtrIsNULL
// Attrs:     +intent(function)
// Statement: py_function_bool_scalar
// ----------------------------------------
// Argument:  double * data=nullptr +intent(IN)+rank(1)
// Attrs:     +intent(in)
// Statement: py_in_native_*_pointer_numpy
static char PY_defaultPtrIsNULL_1__doc__[] =
"documentation"
;

static PyObject *
PY_defaultPtrIsNULL_1(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.defaultPtrIsNULL
    Py_ssize_t SH_nargs = 0;
    double * data;
    PyObject * SHTPy_data;
    PyArrayObject * SHPy_data = nullptr;
    const char *SHT_kwlist[] = {
        "data",
        nullptr };
    bool SHCXX_rv;
    PyObject * SHTPy_rv = nullptr;

    if (args != nullptr) SH_nargs += PyTuple_Size(args);
    if (kwds != nullptr) SH_nargs += PyDict_Size(args);
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|O:defaultPtrIsNULL",
        const_cast<char **>(SHT_kwlist), &SHTPy_data))
        return nullptr;
    switch (SH_nargs) {
    case 0:
        SHCXX_rv = defaultPtrIsNULL();
        break;
    case 1:
        {
            // post_parse
            SHPy_data = reinterpret_cast<PyArrayObject *>
                (PyArray_ContiguousFromObject(SHTPy_data, NPY_DOUBLE, 1,
                1));
            if (SHPy_data == nullptr) {
                PyErr_SetString(PyExc_ValueError,
                    "data must be a 1-D array of double");
                goto fail;
            }

            // pre_call
            data = static_cast<double *>(PyArray_DATA(SHPy_data));

            SHCXX_rv = defaultPtrIsNULL(data);
            break;
        }
    default:
        PyErr_SetString(PyExc_ValueError, "Wrong number of arguments");
        return nullptr;
    }

    // post_call
    SHTPy_rv = PyBool_FromLong(SHCXX_rv);
    if (SHTPy_rv == nullptr) goto fail;

    // cleanup
    Py_XDECREF(SHPy_data);

    return (PyObject *) SHTPy_rv;

fail:
    Py_XDECREF(SHPy_data);
    Py_XDECREF(SHTPy_rv);
    return nullptr;
// splicer end function.defaultPtrIsNULL
}

// ----------------------------------------
// Function:  void defaultArgsInOut
// Attrs:     +intent(subroutine)
// Statement: py_default
// ----------------------------------------
// Argument:  int in1 +value
// Attrs:     +intent(in)
// Statement: py_in_native_scalar
// ----------------------------------------
// Argument:  int * out1 +intent(out)
// Attrs:     +intent(out)
// Statement: py_out_native_*
// ----------------------------------------
// Argument:  int * out2 +intent(out)
// Attrs:     +intent(out)
// Statement: py_out_native_*
// ----------------------------------------
// Argument:  bool flag=false +value
// Attrs:     +intent(in)
// Statement: py_in_bool_scalar
static char PY_defaultArgsInOut_1__doc__[] =
"documentation"
;

static PyObject *
PY_defaultArgsInOut_1(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.defaultArgsInOut
    Py_ssize_t SH_nargs = 0;
    int in1;
    int out1;
    int out2;
    bool flag;
    PyObject * SHPy_flag;
    const char *SHT_kwlist[] = {
        "in1",
        "flag",
        nullptr };
    PyObject *SHTPy_rv = nullptr;  // return value object

    if (args != nullptr) SH_nargs += PyTuple_Size(args);
    if (kwds != nullptr) SH_nargs += PyDict_Size(args);
    if (!PyArg_ParseTupleAndKeywords(args, kwds,
        "i|O!:defaultArgsInOut", const_cast<char **>(SHT_kwlist), &in1,
        &PyBool_Type, &SHPy_flag))
        return nullptr;
    switch (SH_nargs) {
    case 1:
        defaultArgsInOut(in1, &out1, &out2);
        break;
    case 2:
        {
            // pre_call
            flag = PyObject_IsTrue(SHPy_flag);

            defaultArgsInOut(in1, &out1, &out2, flag);
            break;
        }
    default:
        PyErr_SetString(PyExc_ValueError, "Wrong number of arguments");
        return nullptr;
    }

    // post_call
    SHTPy_rv = Py_BuildValue("ii", out1, out2);

    return SHTPy_rv;
// splicer end function.defaultArgsInOut
}
static PyMethodDef PY_methods[] = {
{"passStructByReferenceCls", (PyCFunction)PY_passStructByReferenceCls,
    METH_VARARGS|METH_KEYWORDS, PY_passStructByReferenceCls__doc__},
{"passStructByReferenceInCls",
    (PyCFunction)PY_passStructByReferenceInCls,
    METH_VARARGS|METH_KEYWORDS, PY_passStructByReferenceInCls__doc__},
{"passStructByReferenceInoutCls",
    (PyCFunction)PY_passStructByReferenceInoutCls,
    METH_VARARGS|METH_KEYWORDS,
    PY_passStructByReferenceInoutCls__doc__},
{"passStructByReferenceOutCls",
    (PyCFunction)PY_passStructByReferenceOutCls, METH_NOARGS,
    PY_passStructByReferenceOutCls__doc__},
{"defaultPtrIsNULL", (PyCFunction)PY_defaultPtrIsNULL_1,
    METH_VARARGS|METH_KEYWORDS, PY_defaultPtrIsNULL_1__doc__},
{"defaultArgsInOut", (PyCFunction)PY_defaultArgsInOut_1,
    METH_VARARGS|METH_KEYWORDS, PY_defaultArgsInOut_1__doc__},
{nullptr,   (PyCFunction)nullptr, 0, nullptr}            /* sentinel */
};

// Create PyArray_Descr for nested
static PyArray_Descr *PY_nested_create_array_descr()
{
    int ierr;
    PyObject *obj = nullptr;
    PyObject * lnames = nullptr;
    PyObject * ldescr = nullptr;
    PyObject * dict = nullptr;
    PyArray_Descr *dtype = nullptr;

    lnames = PyList_New(1);
    if (lnames == nullptr) goto fail;
    ldescr = PyList_New(1);
    if (ldescr == nullptr) goto fail;

    // sublevels
    obj = PyString_FromString("sublevels");
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(lnames, 0, obj);
    obj = (PyObject *) PyArray_DescrFromType(NPY_INT);
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(ldescr, 0, obj);
    obj = nullptr;

    dict = PyDict_New();
    if (dict == nullptr) goto fail;
    ierr = PyDict_SetItemString(dict, "names", lnames);
    if (ierr == -1) goto fail;
    lnames = nullptr;
    ierr = PyDict_SetItemString(dict, "formats", ldescr);
    if (ierr == -1) goto fail;
    ldescr = nullptr;
    ierr = PyArray_DescrAlignConverter(dict, &dtype);
    if (ierr == 0) goto fail;
    return dtype;
fail:
    Py_XDECREF(obj);
    if (lnames != nullptr) {
        for (int i=0; i < 1; i++) {
            Py_XDECREF(PyList_GET_ITEM(lnames, i));
        }
        Py_DECREF(lnames);
    }
    if (ldescr != nullptr) {
        for (int i=0; i < 1; i++) {
            Py_XDECREF(PyList_GET_ITEM(ldescr, i));
        }
        Py_DECREF(ldescr);
    }
    Py_XDECREF(dict);
    Py_XDECREF(dtype);
    return nullptr;
}

/*
 * initcxxlibrary - Initialization function for the module
 * *must* be called initcxxlibrary
 */
static char PY__doc__[] =
"library documentation"
;

struct module_state {
    PyObject *error;
};

#if PY_MAJOR_VERSION >= 3
#define GETSTATE(m) ((struct module_state*)PyModule_GetState(m))
#else
#define GETSTATE(m) (&_state)
static struct module_state _state;
#endif

#if PY_MAJOR_VERSION >= 3
static int cxxlibrary_traverse(PyObject *m, visitproc visit, void *arg) {
    Py_VISIT(GETSTATE(m)->error);
    return 0;
}

static int cxxlibrary_clear(PyObject *m) {
    Py_CLEAR(GETSTATE(m)->error);
    return 0;
}

static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT,
    "cxxlibrary", /* m_name */
    PY__doc__, /* m_doc */
    sizeof(struct module_state), /* m_size */
    PY_methods, /* m_methods */
    nullptr, /* m_reload */
    cxxlibrary_traverse, /* m_traverse */
    cxxlibrary_clear, /* m_clear */
    NULL  /* m_free */
};

#define RETVAL m
#define INITERROR return nullptr
#else
#define RETVAL
#define INITERROR return
#endif

extern "C" PyMODINIT_FUNC
#if PY_MAJOR_VERSION >= 3
PyInit_cxxlibrary(void)
#else
initcxxlibrary(void)
#endif
{
    PyObject *m = nullptr;
    const char * error_name = "cxxlibrary.Error";

    // splicer begin C_init_locals
    // splicer end C_init_locals


    /* Create the module and add the functions */
#if PY_MAJOR_VERSION >= 3
    m = PyModule_Create(&moduledef);
#else
    m = Py_InitModule4("cxxlibrary", PY_methods,
        PY__doc__,
        (PyObject*)nullptr,PYTHON_API_VERSION);
#endif
    if (m == nullptr)
        return RETVAL;
    struct module_state *st = GETSTATE(m);

    import_array();

    {
        PyObject *submodule = PY_init_cxxlibrary_structns();
        if (submodule == nullptr)
            INITERROR;
        Py_INCREF(submodule);
        PyModule_AddObject(m, (char *) "structns", submodule);
    }

    // Cstruct1_cls
    PY_Cstruct1_cls_Type.tp_new   = PyType_GenericNew;
    PY_Cstruct1_cls_Type.tp_alloc = PyType_GenericAlloc;
    if (PyType_Ready(&PY_Cstruct1_cls_Type) < 0)
        return RETVAL;
    Py_INCREF(&PY_Cstruct1_cls_Type);
    PyModule_AddObject(m, "Cstruct1_cls", (PyObject *)&PY_Cstruct1_cls_Type);

    // Define PyArray_Descr for structs
    PY_nested_array_descr = PY_nested_create_array_descr();
    PyModule_AddObject(m, "nested_dtype", 
        (PyObject *) PY_nested_array_descr);

    PY_error_obj = PyErr_NewException((char *) error_name, nullptr, nullptr);
    if (PY_error_obj == nullptr)
        return RETVAL;
    st->error = PY_error_obj;
    PyModule_AddObject(m, "Error", st->error);

    // splicer begin C_init_body
    // splicer end C_init_body

    /* Check for errors */
    if (PyErr_Occurred())
        Py_FatalError("can't initialize module cxxlibrary");
    return RETVAL;
}

