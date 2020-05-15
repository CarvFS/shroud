// pystructmodule.cpp
// This file is generated by Shroud 0.11.0. Do not edit.
// Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "pystructmodule.hpp"
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
PyArray_Descr *PY_Cstruct1_array_descr;
PyArray_Descr *PY_Cstruct_ptr_array_descr;
PyArray_Descr *PY_Cstruct_list_array_descr;
PyArray_Descr *PY_Cstruct_numpy_array_descr;
PyArray_Descr *PY_Arrays1_array_descr;
// splicer begin additional_functions
// splicer end additional_functions

// ----------------------------------------
// Function:  int passStructByValue
// Requested: py_native_scalar_result
// Match:     py_default
// ----------------------------------------
// Argument:  Cstruct1 arg +intent(in)+value
// Exact:     py_struct_in_numpy
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
    PyObject * SHTPy_arg = nullptr;
    PyArrayObject * SHPy_arg = nullptr;
    const char *SHT_kwlist[] = {
        "arg",
        nullptr };
    PyObject * SHTPy_rv = nullptr;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:passStructByValue",
        const_cast<char **>(SHT_kwlist), &SHTPy_arg))
        return nullptr;

    // post_parse
    Py_INCREF(PY_Cstruct1_array_descr);
    SHPy_arg = reinterpret_cast<PyArrayObject *>(PyArray_FromAny(
        SHTPy_arg, PY_Cstruct1_array_descr, 0, 1, NPY_ARRAY_IN_ARRAY,
        nullptr));
    if (SHPy_arg == nullptr) {
        PyErr_SetString(PyExc_ValueError,
            "arg must be a 1-D array of STR_cstruct1");
        goto fail;
    }
    {
        // pre_call
        Cstruct1 * arg = static_cast<Cstruct1 *>
            (PyArray_DATA(SHPy_arg));

        int SHCXX_rv = passStructByValue(*arg);

        // post_call
        SHTPy_rv = PyInt_FromLong(SHCXX_rv);

        // cleanup
        Py_DECREF(SHPy_arg);

        return (PyObject *) SHTPy_rv;
    }

fail:
    Py_XDECREF(SHPy_arg);
    return nullptr;
// splicer end function.pass_struct_by_value
}

// ----------------------------------------
// Function:  int passStruct1
// Requested: py_native_scalar_result
// Match:     py_default
// ----------------------------------------
// Argument:  Cstruct1 * arg +intent(in)
// Exact:     py_struct_in_numpy
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
    PyObject * SHTPy_arg = nullptr;
    PyArrayObject * SHPy_arg = nullptr;
    const char *SHT_kwlist[] = {
        "arg",
        nullptr };
    PyObject * SHTPy_rv = nullptr;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:passStruct1",
        const_cast<char **>(SHT_kwlist), &SHTPy_arg))
        return nullptr;

    // post_parse
    Py_INCREF(PY_Cstruct1_array_descr);
    SHPy_arg = reinterpret_cast<PyArrayObject *>(PyArray_FromAny(
        SHTPy_arg, PY_Cstruct1_array_descr, 0, 1, NPY_ARRAY_IN_ARRAY,
        nullptr));
    if (SHPy_arg == nullptr) {
        PyErr_SetString(PyExc_ValueError,
            "arg must be a 1-D array of STR_cstruct1");
        goto fail;
    }
    {
        // pre_call
        Cstruct1 * arg = static_cast<Cstruct1 *>
            (PyArray_DATA(SHPy_arg));

        int SHCXX_rv = passStruct1(arg);

        // post_call
        SHTPy_rv = PyInt_FromLong(SHCXX_rv);

        // cleanup
        Py_DECREF(SHPy_arg);

        return (PyObject *) SHTPy_rv;
    }

fail:
    Py_XDECREF(SHPy_arg);
    return nullptr;
// splicer end function.pass_struct1
}

// ----------------------------------------
// Function:  int passStruct2
// Requested: py_native_scalar_result
// Match:     py_default
// ----------------------------------------
// Argument:  Cstruct1 * s1 +intent(in)
// Exact:     py_struct_in_numpy
// ----------------------------------------
// Argument:  char * outbuf +charlen(LENOUTBUF)+intent(out)
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
    PyObject * SHTPy_s1 = nullptr;
    PyArrayObject * SHPy_s1 = nullptr;
    const char *SHT_kwlist[] = {
        "s1",
        nullptr };
    PyObject *SHTPy_rv = nullptr;  // return value object

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:passStruct2",
        const_cast<char **>(SHT_kwlist), &SHTPy_s1))
        return nullptr;

    // post_parse
    Py_INCREF(PY_Cstruct1_array_descr);
    SHPy_s1 = reinterpret_cast<PyArrayObject *>(PyArray_FromAny(
        SHTPy_s1, PY_Cstruct1_array_descr, 0, 1, NPY_ARRAY_IN_ARRAY,
        nullptr));
    if (SHPy_s1 == nullptr) {
        PyErr_SetString(PyExc_ValueError,
            "s1 must be a 1-D array of STR_cstruct1");
        goto fail;
    }
    {
        // pre_call
        Cstruct1 * s1 = static_cast<Cstruct1 *>(PyArray_DATA(SHPy_s1));
        char outbuf[LENOUTBUF];  // intent(out)

        int SHCXX_rv = passStruct2(s1, outbuf);

        // post_call
        SHTPy_rv = Py_BuildValue("is", SHCXX_rv, outbuf);

        // cleanup
        Py_DECREF(SHPy_s1);

        return SHTPy_rv;
    }

fail:
    Py_XDECREF(SHPy_s1);
    return nullptr;
// splicer end function.pass_struct2
}

// ----------------------------------------
// Function:  void acceptStructOutPtr
// Exact:     py_default
// ----------------------------------------
// Argument:  Cstruct1 * arg +intent(out)
// Exact:     py_struct_out_numpy
// ----------------------------------------
// Argument:  int i +intent(in)+value
// Requested: py_native_scalar_in
// Match:     py_default
// ----------------------------------------
// Argument:  double d +intent(in)+value
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
    PyArrayObject * SHPy_arg = nullptr;
    int i;
    double d;
    const char *SHT_kwlist[] = {
        "i",
        "d",
        nullptr };

    if (!PyArg_ParseTupleAndKeywords(args, kwds,
        "id:acceptStructOutPtr", const_cast<char **>(SHT_kwlist), &i,
        &d))
        return nullptr;

    // post_parse
    Py_INCREF(PY_Cstruct1_array_descr);
    SHPy_arg = reinterpret_cast<PyArrayObject *>(PyArray_NewFromDescr(
        &PyArray_Type, PY_Cstruct1_array_descr, 0, nullptr, nullptr,
        nullptr, 0, nullptr));
    if (SHPy_arg == nullptr) {
        PyErr_SetString(PyExc_ValueError,
            "arg must be a 1-D array of STR_cstruct1");
        goto fail;
    }
    {
        // pre_call
        Cstruct1 *arg = static_cast<Cstruct1 *>(PyArray_DATA(SHPy_arg));

        acceptStructOutPtr(arg, i, d);
        return (PyObject *) SHPy_arg;
    }

fail:
    Py_XDECREF(SHPy_arg);
    return nullptr;
// splicer end function.accept_struct_out_ptr
}

// ----------------------------------------
// Function:  void acceptStructInOutPtr
// Exact:     py_default
// ----------------------------------------
// Argument:  Cstruct1 * arg +intent(inout)
// Exact:     py_struct_inout_numpy
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
    PyObject * SHTPy_arg = nullptr;
    PyArrayObject * SHPy_arg = nullptr;
    const char *SHT_kwlist[] = {
        "arg",
        nullptr };

    if (!PyArg_ParseTupleAndKeywords(args, kwds,
        "O:acceptStructInOutPtr", const_cast<char **>(SHT_kwlist), 
        &SHTPy_arg))
        return nullptr;

    // post_parse
    Py_INCREF(PY_Cstruct1_array_descr);
    SHPy_arg = reinterpret_cast<PyArrayObject *>(PyArray_FromAny(
        SHTPy_arg, PY_Cstruct1_array_descr, 0, 1, NPY_ARRAY_IN_ARRAY,
        nullptr));
    if (SHPy_arg == nullptr) {
        PyErr_SetString(PyExc_ValueError,
            "arg must be a 1-D array of STR_cstruct1");
        goto fail;
    }
    {
        // pre_call
        Cstruct1 * arg = static_cast<Cstruct1 *>
            (PyArray_DATA(SHPy_arg));

        acceptStructInOutPtr(arg);
        return (PyObject *) SHPy_arg;
    }

fail:
    Py_XDECREF(SHPy_arg);
    return nullptr;
// splicer end function.accept_struct_in_out_ptr
}

// ----------------------------------------
// Function:  Cstruct1 returnStructByValue
// Exact:     py_struct_result_numpy
// ----------------------------------------
// Argument:  int i +intent(in)+value
// Requested: py_native_scalar_in
// Match:     py_default
// ----------------------------------------
// Argument:  double d +intent(in)+value
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
    const char *SHT_kwlist[] = {
        "i",
        "d",
        nullptr };
    Cstruct1 * SHCXX_rv = nullptr;
    PyObject * SHTPy_rv = nullptr;
    PyObject *SHC_SHCXX_rv = nullptr;

    if (!PyArg_ParseTupleAndKeywords(args, kwds,
        "id:returnStructByValue", const_cast<char **>(SHT_kwlist), &i,
        &d))
        return nullptr;

    // result pre_call
    SHCXX_rv = new Cstruct1;
    if (SHCXX_rv == nullptr) {
        PyErr_NoMemory();
        goto fail;
    }

    *SHCXX_rv = returnStructByValue(i, d);

    // post_call
    Py_INCREF(PY_Cstruct1_array_descr);
    SHTPy_rv = PyArray_NewFromDescr(&PyArray_Type, 
        PY_Cstruct1_array_descr, 0, nullptr, 
        nullptr, SHCXX_rv, 0, nullptr);
    if (SHTPy_rv == nullptr) goto fail;
    SHC_SHCXX_rv = PyCapsule_New(SHCXX_rv, "PY_array_dtor", 
        PY_SHROUD_capsule_destructor);
    if (SHC_SHCXX_rv == nullptr) goto fail;
    PyCapsule_SetContext(SHC_SHCXX_rv, PY_SHROUD_fetch_context(1));
    if (PyArray_SetBaseObject(reinterpret_cast<PyArrayObject *>
        (SHTPy_rv), SHC_SHCXX_rv) < 0) goto fail;

    return (PyObject *) SHTPy_rv;

fail:
    if (SHCXX_rv != nullptr) {
        PY_SHROUD_release_memory(1, SHCXX_rv);
    }
    Py_XDECREF(SHTPy_rv);
    Py_XDECREF(SHC_SHCXX_rv);
    return nullptr;
// splicer end function.return_struct_by_value
}

// ----------------------------------------
// Function:  const Cstruct1 returnConstStructByValue
// Exact:     py_struct_result_numpy
// ----------------------------------------
// Argument:  int i +intent(in)+value
// Requested: py_native_scalar_in
// Match:     py_default
// ----------------------------------------
// Argument:  double d +intent(in)+value
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
    const char *SHT_kwlist[] = {
        "i",
        "d",
        nullptr };
    Cstruct1 * SHCXX_rv = nullptr;
    PyObject * SHTPy_rv = nullptr;
    PyObject *SHC_SHCXX_rv = nullptr;

    if (!PyArg_ParseTupleAndKeywords(args, kwds,
        "id:returnConstStructByValue", const_cast<char **>(SHT_kwlist), 
        &i, &d))
        return nullptr;

    // result pre_call
    SHCXX_rv = new Cstruct1;
    if (SHCXX_rv == nullptr) {
        PyErr_NoMemory();
        goto fail;
    }

    *SHCXX_rv = returnConstStructByValue(i, d);

    // post_call
    Py_INCREF(PY_Cstruct1_array_descr);
    SHTPy_rv = PyArray_NewFromDescr(&PyArray_Type, 
        PY_Cstruct1_array_descr, 0, nullptr, 
        nullptr, SHCXX_rv, 0, nullptr);
    if (SHTPy_rv == nullptr) goto fail;
    SHC_SHCXX_rv = PyCapsule_New(SHCXX_rv, "PY_array_dtor", 
        PY_SHROUD_capsule_destructor);
    if (SHC_SHCXX_rv == nullptr) goto fail;
    PyCapsule_SetContext(SHC_SHCXX_rv, PY_SHROUD_fetch_context(2));
    if (PyArray_SetBaseObject(reinterpret_cast<PyArrayObject *>
        (SHTPy_rv), SHC_SHCXX_rv) < 0) goto fail;

    return (PyObject *) SHTPy_rv;

fail:
    if (SHCXX_rv != nullptr) {
        PY_SHROUD_release_memory(2, SHCXX_rv);
    }
    Py_XDECREF(SHTPy_rv);
    Py_XDECREF(SHC_SHCXX_rv);
    return nullptr;
// splicer end function.return_const_struct_by_value
}

// ----------------------------------------
// Function:  Cstruct1 * returnStructPtr1 +deref(pointer)
// Exact:     py_struct_result_numpy
// ----------------------------------------
// Argument:  int i +intent(in)+value
// Requested: py_native_scalar_in
// Match:     py_default
// ----------------------------------------
// Argument:  double d +intent(in)+value
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
    const char *SHT_kwlist[] = {
        "i",
        "d",
        nullptr };
    PyObject * SHTPy_rv = nullptr;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "id:returnStructPtr1",
        const_cast<char **>(SHT_kwlist), &i, &d))
        return nullptr;

    Cstruct1 * SHCXX_rv = returnStructPtr1(i, d);

    // post_call
    Py_INCREF(PY_Cstruct1_array_descr);
    SHTPy_rv = PyArray_NewFromDescr(&PyArray_Type, 
        PY_Cstruct1_array_descr, 0, nullptr, 
        nullptr, SHCXX_rv, 0, nullptr);
    if (SHTPy_rv == nullptr) goto fail;

    return (PyObject *) SHTPy_rv;

fail:
    Py_XDECREF(SHTPy_rv);
    return nullptr;
// splicer end function.return_struct_ptr1
}

// ----------------------------------------
// Function:  Cstruct1 * returnStructPtr2 +deref(pointer)
// Exact:     py_struct_result_numpy
// ----------------------------------------
// Argument:  int i +intent(in)+value
// Requested: py_native_scalar_in
// Match:     py_default
// ----------------------------------------
// Argument:  double d +intent(in)+value
// Requested: py_native_scalar_in
// Match:     py_default
// ----------------------------------------
// Argument:  char * outbuf +charlen(LENOUTBUF)+intent(out)
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
    const char *SHT_kwlist[] = {
        "i",
        "d",
        nullptr };
    PyObject * SHTPy_rv = nullptr;
    PyObject *SHPyResult = nullptr;  // return value object

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "id:returnStructPtr2",
        const_cast<char **>(SHT_kwlist), &i, &d))
        return nullptr;

    // pre_call
    char outbuf[LENOUTBUF];  // intent(out)

    Cstruct1 * SHCXX_rv = returnStructPtr2(i, d, outbuf);

    // post_call
    Py_INCREF(PY_Cstruct1_array_descr);
    SHTPy_rv = PyArray_NewFromDescr(&PyArray_Type, 
        PY_Cstruct1_array_descr, 0, nullptr, 
        nullptr, SHCXX_rv, 0, nullptr);
    if (SHTPy_rv == nullptr) goto fail;
    SHPyResult = Py_BuildValue("Os", SHTPy_rv, outbuf);

    return SHPyResult;

fail:
    Py_XDECREF(SHTPy_rv);
    return nullptr;
// splicer end function.return_struct_ptr2
}

// ----------------------------------------
// Function:  Cstruct_list * get_global_struct_list +deref(pointer)
// Exact:     py_struct_result_numpy
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
    PyObject * SHTPy_rv = nullptr;

    Cstruct_list * SHCXX_rv = get_global_struct_list();

    // post_call
    Py_INCREF(PY_Cstruct_list_array_descr);
    SHTPy_rv = PyArray_NewFromDescr(&PyArray_Type, 
        PY_Cstruct_list_array_descr, 0, nullptr, 
        nullptr, SHCXX_rv, 0, nullptr);
    if (SHTPy_rv == nullptr) goto fail;

    return (PyObject *) SHTPy_rv;

fail:
    Py_XDECREF(SHTPy_rv);
    return nullptr;
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
{nullptr,   (PyCFunction)nullptr, 0, nullptr}            /* sentinel */
};

// start PY_Cstruct1_create_array_descr
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
// end PY_Cstruct1_create_array_descr

// Create PyArray_Descr for Cstruct_ptr
static PyArray_Descr *PY_Cstruct_ptr_create_array_descr()
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

    // cfield
    obj = PyString_FromString("cfield");
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(lnames, 0, obj);
    obj = (PyObject *) PyArray_DescrFromType(NPY_INTP);
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(ldescr, 0, obj);

    // const_dvalue
    obj = PyString_FromString("const_dvalue");
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(lnames, 1, obj);
    obj = (PyObject *) PyArray_DescrFromType(NPY_INTP);
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

// Create PyArray_Descr for Cstruct_list
static PyArray_Descr *PY_Cstruct_list_create_array_descr()
{
    int ierr;
    PyObject *obj = nullptr;
    PyObject * lnames = nullptr;
    PyObject * ldescr = nullptr;
    PyObject * dict = nullptr;
    PyArray_Descr *dtype = nullptr;

    lnames = PyList_New(4);
    if (lnames == nullptr) goto fail;
    ldescr = PyList_New(4);
    if (ldescr == nullptr) goto fail;

    // nitems
    obj = PyString_FromString("nitems");
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(lnames, 0, obj);
    obj = (PyObject *) PyArray_DescrFromType(NPY_INT);
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(ldescr, 0, obj);

    // ivalue
    obj = PyString_FromString("ivalue");
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(lnames, 1, obj);
    obj = (PyObject *) PyArray_DescrFromType(NPY_INTP);
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(ldescr, 1, obj);

    // dvalue
    obj = PyString_FromString("dvalue");
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(lnames, 2, obj);
    obj = (PyObject *) PyArray_DescrFromType(NPY_INTP);
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(ldescr, 2, obj);

    // svalue
    obj = PyString_FromString("svalue");
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(lnames, 3, obj);
    obj = (PyObject *) PyArray_DescrFromType(NPY_INTP);
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(ldescr, 3, obj);
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
        for (int i=0; i < 4; i++) {
            Py_XDECREF(PyList_GET_ITEM(lnames, i));
        }
        Py_DECREF(lnames);
    }
    if (ldescr != nullptr) {
        for (int i=0; i < 4; i++) {
            Py_XDECREF(PyList_GET_ITEM(ldescr, i));
        }
        Py_DECREF(ldescr);
    }
    Py_XDECREF(dict);
    Py_XDECREF(dtype);
    return nullptr;
}

// Create PyArray_Descr for Cstruct_numpy
static PyArray_Descr *PY_Cstruct_numpy_create_array_descr()
{
    int ierr;
    PyObject *obj = nullptr;
    PyObject * lnames = nullptr;
    PyObject * ldescr = nullptr;
    PyObject * dict = nullptr;
    PyArray_Descr *dtype = nullptr;

    lnames = PyList_New(3);
    if (lnames == nullptr) goto fail;
    ldescr = PyList_New(3);
    if (ldescr == nullptr) goto fail;

    // nitems
    obj = PyString_FromString("nitems");
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(lnames, 0, obj);
    obj = (PyObject *) PyArray_DescrFromType(NPY_INT);
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(ldescr, 0, obj);

    // ivalue
    obj = PyString_FromString("ivalue");
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(lnames, 1, obj);
    obj = (PyObject *) PyArray_DescrFromType(NPY_INTP);
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(ldescr, 1, obj);

    // dvalue
    obj = PyString_FromString("dvalue");
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(lnames, 2, obj);
    obj = (PyObject *) PyArray_DescrFromType(NPY_INTP);
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(ldescr, 2, obj);
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
        for (int i=0; i < 3; i++) {
            Py_XDECREF(PyList_GET_ITEM(lnames, i));
        }
        Py_DECREF(lnames);
    }
    if (ldescr != nullptr) {
        for (int i=0; i < 3; i++) {
            Py_XDECREF(PyList_GET_ITEM(ldescr, i));
        }
        Py_DECREF(ldescr);
    }
    Py_XDECREF(dict);
    Py_XDECREF(dtype);
    return nullptr;
}

// Create PyArray_Descr for Arrays1
static PyArray_Descr *PY_Arrays1_create_array_descr()
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

    // name
    obj = PyString_FromString("name");
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(lnames, 0, obj);
    obj = (PyObject *) PyArray_DescrFromType(NPY_INTP);
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(ldescr, 0, obj);

    // count
    obj = PyString_FromString("count");
    if (obj == nullptr) goto fail;
    PyList_SET_ITEM(lnames, 1, obj);
    obj = (PyObject *) PyArray_DescrFromType(NPY_INT);
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
    nullptr, /* m_reload */
    struct_traverse, /* m_traverse */
    struct_clear, /* m_clear */
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
PyInit_cstruct(void)
#else
initcstruct(void)
#endif
{
    PyObject *m = nullptr;
    const char * error_name = "struct.Error";

    // splicer begin C_init_locals
    // splicer end C_init_locals


    /* Create the module and add the functions */
#if PY_MAJOR_VERSION >= 3
    m = PyModule_Create(&moduledef);
#else
    m = Py_InitModule4("cstruct", PY_methods,
        PY__doc__,
        (PyObject*)nullptr,PYTHON_API_VERSION);
#endif
    if (m == nullptr)
        return RETVAL;
    struct module_state *st = GETSTATE(m);

    import_array();

    // Define PyArray_Descr for structs
    PY_Cstruct1_array_descr = PY_Cstruct1_create_array_descr();
    PyModule_AddObject(m, "Cstruct1_dtype", 
        (PyObject *) PY_Cstruct1_array_descr);
    PY_Cstruct_ptr_array_descr = PY_Cstruct_ptr_create_array_descr();
    PyModule_AddObject(m, "Cstruct_ptr_dtype", 
        (PyObject *) PY_Cstruct_ptr_array_descr);
    PY_Cstruct_list_array_descr = PY_Cstruct_list_create_array_descr();
    PyModule_AddObject(m, "Cstruct_list_dtype", 
        (PyObject *) PY_Cstruct_list_array_descr);
    PY_Cstruct_numpy_array_descr = PY_Cstruct_numpy_create_array_descr();
    PyModule_AddObject(m, "Cstruct_numpy_dtype", 
        (PyObject *) PY_Cstruct_numpy_array_descr);
    PY_Arrays1_array_descr = PY_Arrays1_create_array_descr();
    PyModule_AddObject(m, "Arrays1_dtype", 
        (PyObject *) PY_Arrays1_array_descr);

    PY_error_obj = PyErr_NewException((char *) error_name, nullptr, nullptr);
    if (PY_error_obj == nullptr)
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
