// pycxxlibrarymodule.cpp
// This file is generated by Shroud 0.11.0. Do not edit.
// Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
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
PyArray_Descr *PY_Cstruct1_array_descr;
// splicer begin additional_functions
// splicer end additional_functions

// ----------------------------------------
// Function:  int passStructByReference
// Requested: py_native_scalar_result
// Match:     py_default
// ----------------------------------------
// Argument:  Cstruct1 & arg +intent(in)
// Exact:     py_struct_&_in_numpy
static char PY_passStructByReference__doc__[] =
"documentation"
;

static PyObject *
PY_passStructByReference(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.pass_struct_by_reference
    Cstruct1 *arg;
    PyObject * SHTPy_arg = nullptr;
    PyArrayObject * SHPy_arg = nullptr;
    const char *SHT_kwlist[] = {
        "arg",
        nullptr };
    PyObject * SHTPy_rv = nullptr;

    if (!PyArg_ParseTupleAndKeywords(args, kwds,
        "O:passStructByReference", const_cast<char **>(SHT_kwlist), 
        &SHTPy_arg))
        return nullptr;

    // post_parse
    Py_INCREF(PY_Cstruct1_array_descr);
    SHPy_arg = reinterpret_cast<PyArrayObject *>(PyArray_FromAny(
        SHTPy_arg, PY_Cstruct1_array_descr, 0, 1, NPY_ARRAY_IN_ARRAY,
        nullptr));
    if (SHPy_arg == nullptr) {
        PyErr_SetString(PyExc_ValueError,
            "arg must be a 1-D array of CXX_cstruct1");
        goto fail;
    }
    {
        // pre_call
        arg = static_cast<Cstruct1 *>(PyArray_DATA(SHPy_arg));

        int SHCXX_rv = passStructByReference(*arg);

        // post_call
        SHTPy_rv = PyInt_FromLong(SHCXX_rv);

        // cleanup
        Py_DECREF(SHPy_arg);

        return (PyObject *) SHTPy_rv;
    }

fail:
    Py_XDECREF(SHPy_arg);
    return nullptr;
// splicer end function.pass_struct_by_reference
}

// ----------------------------------------
// Function:  int passStructByReferenceCls
// Requested: py_native_scalar_result
// Match:     py_default
// ----------------------------------------
// Argument:  Cstruct1_cls & arg +intent(in)
// Exact:     py_struct_&_in_class
static char PY_passStructByReferenceCls__doc__[] =
"documentation"
;

static PyObject *
PY_passStructByReferenceCls(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.pass_struct_by_reference_cls
    PY_Cstruct1_cls * SHPy_arg;
    const char *SHT_kwlist[] = {
        "arg",
        nullptr };
    PyObject * SHTPy_rv = nullptr;

    if (!PyArg_ParseTupleAndKeywords(args, kwds,
        "O!:passStructByReferenceCls", const_cast<char **>(SHT_kwlist), 
        &PY_Cstruct1_cls_Type, &SHPy_arg))
        return nullptr;

    // post_declare
    Cstruct1_cls * arg = SHPy_arg ? SHPy_arg->obj : nullptr;

    int SHCXX_rv = passStructByReferenceCls(*arg);

    // post_call
    SHTPy_rv = PyInt_FromLong(SHCXX_rv);

    return (PyObject *) SHTPy_rv;
// splicer end function.pass_struct_by_reference_cls
}
static PyMethodDef PY_methods[] = {
{"passStructByReference", (PyCFunction)PY_passStructByReference,
    METH_VARARGS|METH_KEYWORDS, PY_passStructByReference__doc__},
{"passStructByReferenceCls", (PyCFunction)PY_passStructByReferenceCls,
    METH_VARARGS|METH_KEYWORDS, PY_passStructByReferenceCls__doc__},
{nullptr,   (PyCFunction)nullptr, 0, nullptr}            /* sentinel */
};

// Create PyArray_Descr for Cstruct1
static PyArray_Descr *PY_Cstruct1_create_array_descr()
{
    int ierr;
    PyObject *obj = nullptr;
    PyObject * lnames = nullptr;
    PyObject * ldescr = nullptr;
    PyObject * dict = nullptr;
    PyArray_Descr *dtype = nullptr;

    lnames = PyList_New(2);
    if (lnames == nullptr) goto fail;
    ldescr = PyList_New(2);
    if (ldescr == nullptr) goto fail;

    // ifield
    obj = PyString_FromString("ifield");
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(lnames, 0, obj);
    obj = (PyObject *) PyArray_DescrFromType(NPY_INT);
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(ldescr, 0, obj);

    // dfield
    obj = PyString_FromString("dfield");
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(lnames, 1, obj);
    obj = (PyObject *) PyArray_DescrFromType(NPY_DOUBLE);
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(ldescr, 1, obj);
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
        for (int i=0; i < 2; i++) {
            Py_XDECREF(PyList_GET_ITEM(lnames, i));
        }
        Py_DECREF(lnames);
    }
    if (ldescr != nullptr) {
        for (int i=0; i < 2; i++) {
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

    // Cstruct1_cls
    PY_Cstruct1_cls_Type.tp_new   = PyType_GenericNew;
    PY_Cstruct1_cls_Type.tp_alloc = PyType_GenericAlloc;
    if (PyType_Ready(&PY_Cstruct1_cls_Type) < 0)
        return RETVAL;
    Py_INCREF(&PY_Cstruct1_cls_Type);
    PyModule_AddObject(m, "Cstruct1_cls", (PyObject *)&PY_Cstruct1_cls_Type);

    // Define PyArray_Descr for structs
    PY_Cstruct1_array_descr = PY_Cstruct1_create_array_descr();
    PyModule_AddObject(m, "Cstruct1_dtype", 
        (PyObject *) PY_Cstruct1_array_descr);

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

