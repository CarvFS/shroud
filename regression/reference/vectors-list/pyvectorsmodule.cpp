// pyvectorsmodule.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "pyvectorsmodule.hpp"

// shroud
#include <cstdlib>

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

// helper create_from_PyObject_vector_int
// Convert obj into an array of type int
// Return -1 on error.
static int SHROUD_create_from_PyObject_vector_int(PyObject *obj,
    const char *name, std::vector<int> & in)
{
    PyObject *seq = PySequence_Fast(obj, "holder");
    if (seq == NULL) {
        PyErr_Format(PyExc_TypeError, "argument '%s' must be iterable",
            name);
        return -1;
    }
    Py_ssize_t size = PySequence_Fast_GET_SIZE(seq);
    for (Py_ssize_t i = 0; i < size; i++) {
        PyObject *item = PySequence_Fast_GET_ITEM(seq, i);
        int cvalue = PyInt_AsLong(item);
        if (PyErr_Occurred()) {
            Py_DECREF(seq);
            PyErr_Format(PyExc_ValueError,
                "argument '%s', index %d must be int", name, (int) i);
            return -1;
        }
        in.push_back(cvalue);
    }
    Py_DECREF(seq);
    return 0;
}

// helper py_capsule_dtor
// Release memory in PyCapsule.
// Used with native arrays.
static void FREE_py_capsule_dtor(PyObject *obj)
{
    void *in = PyCapsule_GetPointer(obj, nullptr);
    if (in != nullptr) {
        std::free(in);
    }
}

// helper get_from_object_int_list
// Convert list of PyObject to array of int.
// Return 0 on error, 1 on success.
// Set Python exception on error.
static int SHROUD_get_from_object_int_list(PyObject *obj,
    VEC_SHROUD_converter_value *value)
{
    PyObject *seq = PySequence_Fast(obj, "holder");
    if (seq == NULL) {
        PyErr_Format(PyExc_TypeError, "argument '%s' must be iterable",
            value->name);
        return 0;
    }
    Py_ssize_t size = PySequence_Fast_GET_SIZE(seq);
    int *in = static_cast<int *>(std::malloc(size * sizeof(int)));
    for (Py_ssize_t i = 0; i < size; i++) {
        PyObject *item = PySequence_Fast_GET_ITEM(seq, i);
        int cvalue = PyInt_AsLong(item);
        if (PyErr_Occurred()) {
            std::free(in);
            Py_DECREF(seq);
            PyErr_Format(PyExc_TypeError,
                "argument '%s', index %d must be int", value->name,
                (int) i);
            return 0;
        }
        in[i] = cvalue;
    }
    Py_DECREF(seq);

    value->obj = nullptr;  // Do not save list object.
    value->dataobj = PyCapsule_New(in, nullptr, FREE_py_capsule_dtor);
    value->data = static_cast<int *>(in);
    value->size = size;
    return 1;
}

// helper to_PyList_vector_double
static PyObject *SHROUD_to_PyList_vector_double
    (std::vector<double> & in)
{
    size_t size = in.size();
    PyObject *out = PyList_New(size);
    for (size_t i = 0; i < size; ++i) {
        PyList_SET_ITEM(out, i, PyFloat_FromDouble(in[i]));
    }
    return out;
}

// helper to_PyList_vector_int
static PyObject *SHROUD_to_PyList_vector_int(std::vector<int> & in)
{
    size_t size = in.size();
    PyObject *out = PyList_New(size);
    for (size_t i = 0; i < size; ++i) {
        PyList_SET_ITEM(out, i, PyInt_FromLong(in[i]));
    }
    return out;
}

// splicer begin C_definition
// splicer end C_definition
PyObject *PY_error_obj;
// splicer begin additional_functions
// splicer end additional_functions

// ----------------------------------------
// Function:  int vector_sum
// Attrs:     +intent(function)
// Statement: py_function_native_scalar
// ----------------------------------------
// Argument:  const std::vector<int> & arg +rank(1)
// Attrs:     +intent(in)
// Statement: py_in_vector_list
static char PY_vector_sum__doc__[] =
"documentation"
;

static PyObject *
PY_vector_sum(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.vector_sum
    PyObject * SHTPy_arg;
    const char *SHT_kwlist[] = {
        "arg",
        nullptr };
    int SHCXX_rv;
    PyObject * SHTPy_rv = nullptr;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:vector_sum",
        const_cast<char **>(SHT_kwlist), &SHTPy_arg))
        return nullptr;

    // post_declare
    std::vector<int> SH_arg;

    // pre_call
    if (SHROUD_create_from_PyObject_vector_int(SHTPy_arg, "arg",
        SH_arg) == -1)
        goto fail;

    SHCXX_rv = vector_sum(SH_arg);

    // post_call
    SHTPy_rv = PyInt_FromLong(SHCXX_rv);

    return (PyObject *) SHTPy_rv;

fail:
    return nullptr;
// splicer end function.vector_sum
}

// ----------------------------------------
// Function:  void vector_iota_out
// Attrs:     +intent(subroutine)
// Statement: py_default
// ----------------------------------------
// Argument:  std::vector<int> & arg +intent(out)+rank(1)
// Attrs:     +intent(out)
// Statement: py_out_vector_list
static char PY_vector_iota_out__doc__[] =
"documentation"
;

/**
 * \brief Copy vector into Fortran input array
 *
 */
static PyObject *
PY_vector_iota_out(
  PyObject *SHROUD_UNUSED(self),
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// splicer begin function.vector_iota_out
    PyObject * SHPy_arg = nullptr;

    // post_declare
    std::vector<int> SH_arg;

    vector_iota_out(SH_arg);

    // post_call
    SHPy_arg = SHROUD_to_PyList_vector_int(SH_arg);
    if (SHPy_arg == nullptr) goto fail;

    return (PyObject *) SHPy_arg;

fail:
    Py_XDECREF(SHPy_arg);
    return nullptr;
// splicer end function.vector_iota_out
}

// ----------------------------------------
// Function:  void vector_iota_out_d
// Attrs:     +intent(subroutine)
// Statement: py_default
// ----------------------------------------
// Argument:  std::vector<double> & arg +intent(out)+rank(1)
// Attrs:     +intent(out)
// Statement: py_out_vector_list
static char PY_vector_iota_out_d__doc__[] =
"documentation"
;

/**
 * \brief Copy vector into Fortran input array
 *
 */
static PyObject *
PY_vector_iota_out_d(
  PyObject *SHROUD_UNUSED(self),
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// splicer begin function.vector_iota_out_d
    PyObject * SHPy_arg = nullptr;

    // post_declare
    std::vector<double> SH_arg;

    vector_iota_out_d(SH_arg);

    // post_call
    SHPy_arg = SHROUD_to_PyList_vector_double(SH_arg);
    if (SHPy_arg == nullptr) goto fail;

    return (PyObject *) SHPy_arg;

fail:
    Py_XDECREF(SHPy_arg);
    return nullptr;
// splicer end function.vector_iota_out_d
}

// ----------------------------------------
// Function:  std::vector<int> ReturnVectorAlloc +rank(1)
// Attrs:     +deref(allocatable)+intent(function)
// Statement: py_function_vector_list_targ_native_scalar
// ----------------------------------------
// Argument:  int n +value
// Attrs:     +intent(in)
// Statement: py_in_native_scalar
static char PY_ReturnVectorAlloc__doc__[] =
"documentation"
;

/**
 * Implement iota function.
 * Return a vector as an ALLOCATABLE array.
 * Copy results into the new array.
 */
static PyObject *
PY_ReturnVectorAlloc(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.ReturnVectorAlloc
    int n;
    const char *SHT_kwlist[] = {
        "n",
        nullptr };
    PyObject * SHTPy_rv = nullptr;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "i:ReturnVectorAlloc",
        const_cast<char **>(SHT_kwlist), &n))
        return nullptr;

    std::vector<int> SHCXX_rv = ReturnVectorAlloc(n);

    // post_call
    SHTPy_rv = SHROUD_to_PyList_vector_int(SHCXX_rv);
    if (SHTPy_rv == nullptr) goto fail;

    return (PyObject *) SHTPy_rv;

fail:
    Py_XDECREF(SHTPy_rv);
    return nullptr;
// splicer end function.ReturnVectorAlloc
}

// ----------------------------------------
// Function:  int returnDim2
// Attrs:     +intent(function)
// Statement: py_function_native_scalar
// ----------------------------------------
// Argument:  int * arg +intent(in)+rank(2)
// Attrs:     +intent(in)
// Statement: py_in_native_*_pointer_list
// ----------------------------------------
// Argument:  int len +implied(size(arg,2))+value
// Exact:     py_default
static char PY_returnDim2__doc__[] =
"documentation"
;

static PyObject *
PY_returnDim2(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.returnDim2
    int * arg = nullptr;
    PyObject *SHTPy_arg = nullptr;
    VEC_SHROUD_converter_value SHValue_arg = {NULL, NULL, NULL, NULL, 0};
    SHValue_arg.name = "arg";
    Py_ssize_t SHSize_arg;
    int len;
    const char *SHT_kwlist[] = {
        "arg",
        nullptr };
    int SHCXX_rv;
    PyObject * SHTPy_rv = nullptr;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:returnDim2",
        const_cast<char **>(SHT_kwlist), &SHTPy_arg))
        return nullptr;

    // post_parse
    if (SHROUD_get_from_object_int_list(SHTPy_arg, &SHValue_arg) == 0)
        goto fail;
    arg = static_cast<int *>(SHValue_arg.data);
    SHSize_arg = SHValue_arg.size;

    // pre_call
    len = SHSize_arg;

    SHCXX_rv = returnDim2(arg, len);

    // post_call
    SHTPy_rv = PyInt_FromLong(SHCXX_rv);

    // cleanup
    Py_XDECREF(SHValue_arg.dataobj);

    return (PyObject *) SHTPy_rv;

fail:
    Py_XDECREF(SHValue_arg.dataobj);
    return nullptr;
// splicer end function.returnDim2
}
static PyMethodDef PY_methods[] = {
{"vector_sum", (PyCFunction)PY_vector_sum, METH_VARARGS|METH_KEYWORDS,
    PY_vector_sum__doc__},
{"vector_iota_out", (PyCFunction)PY_vector_iota_out, METH_NOARGS,
    PY_vector_iota_out__doc__},
{"vector_iota_out_d", (PyCFunction)PY_vector_iota_out_d, METH_NOARGS,
    PY_vector_iota_out_d__doc__},
{"ReturnVectorAlloc", (PyCFunction)PY_ReturnVectorAlloc,
    METH_VARARGS|METH_KEYWORDS, PY_ReturnVectorAlloc__doc__},
{"returnDim2", (PyCFunction)PY_returnDim2, METH_VARARGS|METH_KEYWORDS,
    PY_returnDim2__doc__},
{nullptr,   (PyCFunction)nullptr, 0, nullptr}            /* sentinel */
};

/*
 * initvectors - Initialization function for the module
 * *must* be called initvectors
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
static int vectors_traverse(PyObject *m, visitproc visit, void *arg) {
    Py_VISIT(GETSTATE(m)->error);
    return 0;
}

static int vectors_clear(PyObject *m) {
    Py_CLEAR(GETSTATE(m)->error);
    return 0;
}

static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT,
    "vectors", /* m_name */
    PY__doc__, /* m_doc */
    sizeof(struct module_state), /* m_size */
    PY_methods, /* m_methods */
    nullptr, /* m_reload */
    vectors_traverse, /* m_traverse */
    vectors_clear, /* m_clear */
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
PyInit_vectors(void)
#else
initvectors(void)
#endif
{
    PyObject *m = nullptr;
    const char * error_name = "vectors.Error";

    // splicer begin C_init_locals
    // splicer end C_init_locals


    /* Create the module and add the functions */
#if PY_MAJOR_VERSION >= 3
    m = PyModule_Create(&moduledef);
#else
    m = Py_InitModule4("vectors", PY_methods,
        PY__doc__,
        (PyObject*)nullptr,PYTHON_API_VERSION);
#endif
    if (m == nullptr)
        return RETVAL;
    struct module_state *st = GETSTATE(m);

    PY_error_obj = PyErr_NewException((char *) error_name, nullptr, nullptr);
    if (PY_error_obj == nullptr)
        return RETVAL;
    st->error = PY_error_obj;
    PyModule_AddObject(m, "Error", st->error);

    // splicer begin C_init_body
    // splicer end C_init_body

    /* Check for errors */
    if (PyErr_Occurred())
        Py_FatalError("can't initialize module vectors");
    return RETVAL;
}

