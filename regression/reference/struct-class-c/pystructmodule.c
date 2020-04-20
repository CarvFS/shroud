// pystructmodule.c
// This file is generated by Shroud 0.11.0. Do not edit.
// Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "pystructmodule.h"
#define PY_ARRAY_UNIQUE_SYMBOL SHROUD_STRUCT_ARRAY_API
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
// splicer begin additional_functions
// splicer end additional_functions

// int passStructByValue(Cstruct1 arg +intent(in)+value)
// ----------------------------------------
// Argument:  arg
// Exact:     py_struct_in_class
static char PY_passStructByValue__doc__[] =
"documentation"
;

static PyObject *
PY_passStructByValue(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.pass_struct_by_value
    PY_Cstruct1 * SHPy_arg;
    char *SHT_kwlist[] = {
        "arg",
        NULL };
    PyObject * SHTPy_rv = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O!:passStructByValue",
        SHT_kwlist, &PY_Cstruct1_Type, &SHPy_arg))
        return NULL;

    // post_parse
    Cstruct1 * arg = SHPy_arg ? SHPy_arg->obj : NULL;

    int SHCXX_rv = passStructByValue(*arg);

    // post_call
    SHTPy_rv = PyInt_FromLong(SHCXX_rv);

    return (PyObject *) SHTPy_rv;
// splicer end function.pass_struct_by_value
}

// int passStruct1(Cstruct1 * arg +intent(in))
// ----------------------------------------
// Argument:  arg
// Exact:     py_struct_in_class
static char PY_passStruct1__doc__[] =
"documentation"
;

static PyObject *
PY_passStruct1(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.pass_struct1
    PY_Cstruct1 * SHPy_arg;
    char *SHT_kwlist[] = {
        "arg",
        NULL };
    PyObject * SHTPy_rv = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O!:passStruct1",
        SHT_kwlist, &PY_Cstruct1_Type, &SHPy_arg))
        return NULL;

    // post_parse
    Cstruct1 * arg = SHPy_arg ? SHPy_arg->obj : NULL;

    int SHCXX_rv = passStruct1(arg);

    // post_call
    SHTPy_rv = PyInt_FromLong(SHCXX_rv);

    return (PyObject *) SHTPy_rv;
// splicer end function.pass_struct1
}

// int passStruct2(Cstruct1 * s1 +intent(in), char * outbuf +charlen(LENOUTBUF)+intent(out))
// ----------------------------------------
// Argument:  s1
// Exact:     py_struct_in_class
// ----------------------------------------
// Argument:  outbuf
// Exact:     py_char_*_out_charlen
static char PY_passStruct2__doc__[] =
"documentation"
;

/**
 * Pass name argument which will build a bufferify function.
 */
static PyObject *
PY_passStruct2(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.pass_struct2
    PY_Cstruct1 * SHPy_s1;
    char *SHT_kwlist[] = {
        "s1",
        NULL };
    PyObject *SHTPy_rv = NULL;  // return value object

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O!:passStruct2",
        SHT_kwlist, &PY_Cstruct1_Type, &SHPy_s1))
        return NULL;

    // post_parse
    Cstruct1 * s1 = SHPy_s1 ? SHPy_s1->obj : NULL;

    // pre_call
    char outbuf[LENOUTBUF];  // intent(out)

    int SHCXX_rv = passStruct2(s1, outbuf);

    // post_call
    SHTPy_rv = Py_BuildValue("is", SHCXX_rv, outbuf);

    return SHTPy_rv;
// splicer end function.pass_struct2
}

// void acceptStructOutPtr(Cstruct1 * arg +intent(out), int i +intent(in)+value, double d +intent(in)+value)
// ----------------------------------------
// Argument:  arg
// Exact:     py_struct_out_class
// ----------------------------------------
// Argument:  i
// Requested: py_native_scalar_in
// Match:     py_default
// ----------------------------------------
// Argument:  d
// Requested: py_native_scalar_in
// Match:     py_default
static char PY_acceptStructOutPtr__doc__[] =
"documentation"
;

/**
 * Pass name argument which will build a bufferify function.
 */
static PyObject *
PY_acceptStructOutPtr(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.accept_struct_out_ptr
    PyObject *SHPy_arg = NULL;
    int i;
    double d;
    char *SHT_kwlist[] = {
        "i",
        "d",
        NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwds,
        "id:acceptStructOutPtr", SHT_kwlist, &i, &d))
        return NULL;

    // pre_call
    Cstruct1 * arg = malloc(sizeof(Cstruct1));

    acceptStructOutPtr(arg, i, d);

    // post_call
    SHPy_arg = PP_Cstruct1_to_Object_idtor(arg, 0);
    if (SHPy_arg == NULL) goto fail;

    return (PyObject *) SHPy_arg;

fail:
    Py_XDECREF(SHPy_arg);
    return NULL;
// splicer end function.accept_struct_out_ptr
}

// void acceptStructInOutPtr(Cstruct1 * arg +intent(inout))
// ----------------------------------------
// Argument:  arg
// Exact:     py_struct_inout_class
static char PY_acceptStructInOutPtr__doc__[] =
"documentation"
;

static PyObject *
PY_acceptStructInOutPtr(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.accept_struct_in_out_ptr
    PY_Cstruct1 * SHPy_arg;
    char *SHT_kwlist[] = {
        "arg",
        NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwds,
        "O!:acceptStructInOutPtr", SHT_kwlist, &PY_Cstruct1_Type,
        &SHPy_arg))
        return NULL;

    // post_parse
    Cstruct1 * arg = SHPy_arg ? SHPy_arg->obj : NULL;

    acceptStructInOutPtr(arg);
    return (PyObject *) SHPy_arg;
// splicer end function.accept_struct_in_out_ptr
}

// Cstruct1 returnStructByValue(int i +intent(in)+value, double d +intent(in)+value)
// ----------------------------------------
// Argument:  i
// Requested: py_native_scalar_in
// Match:     py_default
// ----------------------------------------
// Argument:  d
// Requested: py_native_scalar_in
// Match:     py_default
static char PY_returnStructByValue__doc__[] =
"documentation"
;

static PyObject *
PY_returnStructByValue(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.return_struct_by_value
    int i;
    double d;
    char *SHT_kwlist[] = {
        "i",
        "d",
        NULL };
    Cstruct1 * SHCXX_rv = NULL;
    PyObject *SHTPy_rv = NULL;  // struct_result_class

    if (!PyArg_ParseTupleAndKeywords(args, kwds,
        "id:returnStructByValue", SHT_kwlist, &i, &d))
        return NULL;

    // result pre_call
    SHCXX_rv = malloc(sizeof(Cstruct1));
    if (SHCXX_rv == NULL) {
        PyErr_NoMemory();
        goto fail;
    }

    *SHCXX_rv = returnStructByValue(i, d);

    // post_call
    SHTPy_rv = PP_Cstruct1_to_Object_idtor(SHCXX_rv, 1);
    if (SHTPy_rv == NULL) goto fail;

    return (PyObject *) SHTPy_rv;

fail:
    if (SHCXX_rv != NULL) {
        PY_SHROUD_release_memory(1, SHCXX_rv);
    }
    Py_XDECREF(SHTPy_rv);
    return NULL;
// splicer end function.return_struct_by_value
}

// const Cstruct1 returnConstStructByValue(int i +intent(in)+value, double d +intent(in)+value)
// ----------------------------------------
// Argument:  i
// Requested: py_native_scalar_in
// Match:     py_default
// ----------------------------------------
// Argument:  d
// Requested: py_native_scalar_in
// Match:     py_default
static char PY_returnConstStructByValue__doc__[] =
"documentation"
;

static PyObject *
PY_returnConstStructByValue(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.return_const_struct_by_value
    int i;
    double d;
    char *SHT_kwlist[] = {
        "i",
        "d",
        NULL };
    Cstruct1 * SHCXX_rv = NULL;
    PyObject *SHTPy_rv = NULL;  // struct_result_class

    if (!PyArg_ParseTupleAndKeywords(args, kwds,
        "id:returnConstStructByValue", SHT_kwlist, &i, &d))
        return NULL;

    // result pre_call
    SHCXX_rv = malloc(sizeof(Cstruct1));
    if (SHCXX_rv == NULL) {
        PyErr_NoMemory();
        goto fail;
    }

    *SHCXX_rv = returnConstStructByValue(i, d);

    // post_call
    SHTPy_rv = PP_Cstruct1_to_Object_idtor(SHCXX_rv, 6);
    if (SHTPy_rv == NULL) goto fail;

    return (PyObject *) SHTPy_rv;

fail:
    if (SHCXX_rv != NULL) {
        PY_SHROUD_release_memory(6, SHCXX_rv);
    }
    Py_XDECREF(SHTPy_rv);
    return NULL;
// splicer end function.return_const_struct_by_value
}

// Cstruct1 * returnStructPtr1(int i +intent(in)+value, double d +intent(in)+value)
// ----------------------------------------
// Argument:  i
// Requested: py_native_scalar_in
// Match:     py_default
// ----------------------------------------
// Argument:  d
// Requested: py_native_scalar_in
// Match:     py_default
static char PY_returnStructPtr1__doc__[] =
"documentation"
;

/**
 * \brief Return a pointer to a struct
 *
 * Does not generate a bufferify C wrapper.
 */
static PyObject *
PY_returnStructPtr1(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.return_struct_ptr1
    int i;
    double d;
    char *SHT_kwlist[] = {
        "i",
        "d",
        NULL };
    PyObject *SHTPy_rv = NULL;  // struct_result_class

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "id:returnStructPtr1",
        SHT_kwlist, &i, &d))
        return NULL;

    Cstruct1 * SHCXX_rv = returnStructPtr1(i, d);

    // post_call
    SHTPy_rv = PP_Cstruct1_to_Object_idtor(SHCXX_rv, 0);
    if (SHTPy_rv == NULL) goto fail;

    return (PyObject *) SHTPy_rv;

fail:
    Py_XDECREF(SHTPy_rv);
    return NULL;
// splicer end function.return_struct_ptr1
}

// Cstruct1 * returnStructPtr2(int i +intent(in)+value, double d +intent(in)+value, char * outbuf +charlen(LENOUTBUF)+intent(out))
// ----------------------------------------
// Argument:  i
// Requested: py_native_scalar_in
// Match:     py_default
// ----------------------------------------
// Argument:  d
// Requested: py_native_scalar_in
// Match:     py_default
// ----------------------------------------
// Argument:  outbuf
// Exact:     py_char_*_out_charlen
static char PY_returnStructPtr2__doc__[] =
"documentation"
;

/**
 * \brief Return a pointer to a struct
 *
 * Generates a bufferify C wrapper function.
 */
static PyObject *
PY_returnStructPtr2(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.return_struct_ptr2
    int i;
    double d;
    char *SHT_kwlist[] = {
        "i",
        "d",
        NULL };
    PyObject *SHTPy_rv = NULL;  // struct_result_class
    PyObject *SHPyResult = NULL;  // return value object

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "id:returnStructPtr2",
        SHT_kwlist, &i, &d))
        return NULL;

    // pre_call
    char outbuf[LENOUTBUF];  // intent(out)

    Cstruct1 * SHCXX_rv = returnStructPtr2(i, d, outbuf);

    // post_call
    SHTPy_rv = PP_Cstruct1_to_Object_idtor(SHCXX_rv, 0);
    if (SHTPy_rv == NULL) goto fail;
    SHPyResult = Py_BuildValue("Os", SHTPy_rv, outbuf);

    return SHPyResult;

fail:
    Py_XDECREF(SHTPy_rv);
    return NULL;
// splicer end function.return_struct_ptr2
}

// Cstruct_list * get_global_struct_list()
static char PY_get_global_struct_list__doc__[] =
"documentation"
;

static PyObject *
PY_get_global_struct_list(
  PyObject *SHROUD_UNUSED(self),
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// splicer begin function.get_global_struct_list
    PyObject *SHTPy_rv = NULL;  // struct_result_class

    Cstruct_list * SHCXX_rv = get_global_struct_list();

    // post_call
    SHTPy_rv = PP_Cstruct_list_to_Object_idtor(SHCXX_rv, 0);
    if (SHTPy_rv == NULL) goto fail;

    return (PyObject *) SHTPy_rv;

fail:
    Py_XDECREF(SHTPy_rv);
    return NULL;
// splicer end function.get_global_struct_list
}
static PyMethodDef PY_methods[] = {
{"passStructByValue", (PyCFunction)PY_passStructByValue,
    METH_VARARGS|METH_KEYWORDS, PY_passStructByValue__doc__},
{"passStruct1", (PyCFunction)PY_passStruct1, METH_VARARGS|METH_KEYWORDS,
    PY_passStruct1__doc__},
{"passStruct2", (PyCFunction)PY_passStruct2, METH_VARARGS|METH_KEYWORDS,
    PY_passStruct2__doc__},
{"acceptStructOutPtr", (PyCFunction)PY_acceptStructOutPtr,
    METH_VARARGS|METH_KEYWORDS, PY_acceptStructOutPtr__doc__},
{"acceptStructInOutPtr", (PyCFunction)PY_acceptStructInOutPtr,
    METH_VARARGS|METH_KEYWORDS, PY_acceptStructInOutPtr__doc__},
{"returnStructByValue", (PyCFunction)PY_returnStructByValue,
    METH_VARARGS|METH_KEYWORDS, PY_returnStructByValue__doc__},
{"returnConstStructByValue", (PyCFunction)PY_returnConstStructByValue,
    METH_VARARGS|METH_KEYWORDS, PY_returnConstStructByValue__doc__},
{"returnStructPtr1", (PyCFunction)PY_returnStructPtr1,
    METH_VARARGS|METH_KEYWORDS, PY_returnStructPtr1__doc__},
{"returnStructPtr2", (PyCFunction)PY_returnStructPtr2,
    METH_VARARGS|METH_KEYWORDS, PY_returnStructPtr2__doc__},
{"get_global_struct_list", (PyCFunction)PY_get_global_struct_list,
    METH_NOARGS, PY_get_global_struct_list__doc__},
{NULL,   (PyCFunction)NULL, 0, NULL}            /* sentinel */
};

/*
 * initstruct - Initialization function for the module
 * *must* be called initstruct
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
static int struct_traverse(PyObject *m, visitproc visit, void *arg) {
    Py_VISIT(GETSTATE(m)->error);
    return 0;
}

static int struct_clear(PyObject *m) {
    Py_CLEAR(GETSTATE(m)->error);
    return 0;
}

static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT,
    "struct", /* m_name */
    PY__doc__, /* m_doc */
    sizeof(struct module_state), /* m_size */
    PY_methods, /* m_methods */
    NULL, /* m_reload */
    struct_traverse, /* m_traverse */
    struct_clear, /* m_clear */
    NULL  /* m_free */
};

#define RETVAL m
#define INITERROR return NULL
#else
#define RETVAL
#define INITERROR return
#endif

PyMODINIT_FUNC
#if PY_MAJOR_VERSION >= 3
PyInit_cstruct(void)
#else
initcstruct(void)
#endif
{
    PyObject *m = NULL;
    const char * error_name = "struct.Error";

    // splicer begin C_init_locals
    // splicer end C_init_locals


    /* Create the module and add the functions */
#if PY_MAJOR_VERSION >= 3
    m = PyModule_Create(&moduledef);
#else
    m = Py_InitModule4("cstruct", PY_methods,
        PY__doc__,
        (PyObject*)NULL,PYTHON_API_VERSION);
#endif
    if (m == NULL)
        return RETVAL;
    struct module_state *st = GETSTATE(m);

    import_array();

    // Cstruct1
    PY_Cstruct1_Type.tp_new   = PyType_GenericNew;
    PY_Cstruct1_Type.tp_alloc = PyType_GenericAlloc;
    if (PyType_Ready(&PY_Cstruct1_Type) < 0)
        return RETVAL;
    Py_INCREF(&PY_Cstruct1_Type);
    PyModule_AddObject(m, "Cstruct1", (PyObject *)&PY_Cstruct1_Type);

    // Cstruct_ptr
    PY_Cstruct_ptr_Type.tp_new   = PyType_GenericNew;
    PY_Cstruct_ptr_Type.tp_alloc = PyType_GenericAlloc;
    if (PyType_Ready(&PY_Cstruct_ptr_Type) < 0)
        return RETVAL;
    Py_INCREF(&PY_Cstruct_ptr_Type);
    PyModule_AddObject(m, "Cstruct_ptr", (PyObject *)&PY_Cstruct_ptr_Type);

    // Cstruct_list
    PY_Cstruct_list_Type.tp_new   = PyType_GenericNew;
    PY_Cstruct_list_Type.tp_alloc = PyType_GenericAlloc;
    if (PyType_Ready(&PY_Cstruct_list_Type) < 0)
        return RETVAL;
    Py_INCREF(&PY_Cstruct_list_Type);
    PyModule_AddObject(m, "Cstruct_list", (PyObject *)&PY_Cstruct_list_Type);

    // Cstruct_numpy
    PY_Cstruct_numpy_Type.tp_new   = PyType_GenericNew;
    PY_Cstruct_numpy_Type.tp_alloc = PyType_GenericAlloc;
    if (PyType_Ready(&PY_Cstruct_numpy_Type) < 0)
        return RETVAL;
    Py_INCREF(&PY_Cstruct_numpy_Type);
    PyModule_AddObject(m, "Cstruct_numpy", (PyObject *)&PY_Cstruct_numpy_Type);

    // Arrays1
    PY_Arrays1_Type.tp_new   = PyType_GenericNew;
    PY_Arrays1_Type.tp_alloc = PyType_GenericAlloc;
    if (PyType_Ready(&PY_Arrays1_Type) < 0)
        return RETVAL;
    Py_INCREF(&PY_Arrays1_Type);
    PyModule_AddObject(m, "Arrays1", (PyObject *)&PY_Arrays1_Type);

    PY_error_obj = PyErr_NewException((char *) error_name, NULL, NULL);
    if (PY_error_obj == NULL)
        return RETVAL;
    st->error = PY_error_obj;
    PyModule_AddObject(m, "Error", st->error);

    // splicer begin C_init_body
    // splicer end C_init_body

    /* Check for errors */
    if (PyErr_Occurred())
        Py_FatalError("can't initialize module cstruct");
    return RETVAL;
}

