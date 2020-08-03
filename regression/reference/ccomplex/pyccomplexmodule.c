// pyccomplexmodule.c
// This file is generated by Shroud 0.12.1. Do not edit.
// Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "pyccomplexmodule.h"

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

// ----------------------------------------
// Function:  void accept_double_complex
// Exact:     py_default
// ----------------------------------------
// Argument:  double complex * arg1 +intent(inout)
// Exact:     py_native_*_inout
static char PY_accept_double_complex__doc__[] =
"documentation"
;

static PyObject *
PY_accept_double_complex(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// splicer begin function.accept_double_complex
    double complex arg1;
    Py_complex SHCPY_arg1;
    char *SHT_kwlist[] = {
        "arg1",
        NULL };
    PyObject * SHPy_arg1 = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwds,
        "D:accept_double_complex", SHT_kwlist, &SHCPY_arg1))
        return NULL;

    // post_parse
    arg1 = SHCPY_arg1.real + SHCPY_arg1.imag * I;

    accept_double_complex(&arg1);

    // post_call
    SHPy_arg1 = PyComplex_FromDoubles(creal(arg1), cimag(arg1));

    return (PyObject *) SHPy_arg1;
// splicer end function.accept_double_complex
}
static PyMethodDef PY_methods[] = {
{"accept_double_complex", (PyCFunction)PY_accept_double_complex,
    METH_VARARGS|METH_KEYWORDS, PY_accept_double_complex__doc__},
{NULL,   (PyCFunction)NULL, 0, NULL}            /* sentinel */
};

/*
 * initccomplex - Initialization function for the module
 * *must* be called initccomplex
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
static int ccomplex_traverse(PyObject *m, visitproc visit, void *arg) {
    Py_VISIT(GETSTATE(m)->error);
    return 0;
}

static int ccomplex_clear(PyObject *m) {
    Py_CLEAR(GETSTATE(m)->error);
    return 0;
}

static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT,
    "ccomplex", /* m_name */
    PY__doc__, /* m_doc */
    sizeof(struct module_state), /* m_size */
    PY_methods, /* m_methods */
    NULL, /* m_reload */
    ccomplex_traverse, /* m_traverse */
    ccomplex_clear, /* m_clear */
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
PyInit_ccomplex(void)
#else
initccomplex(void)
#endif
{
    PyObject *m = NULL;
    const char * error_name = "ccomplex.Error";

    // splicer begin C_init_locals
    // splicer end C_init_locals


    /* Create the module and add the functions */
#if PY_MAJOR_VERSION >= 3
    m = PyModule_Create(&moduledef);
#else
    m = Py_InitModule4("ccomplex", PY_methods,
        PY__doc__,
        (PyObject*)NULL,PYTHON_API_VERSION);
#endif
    if (m == NULL)
        return RETVAL;
    struct module_state *st = GETSTATE(m);

    PY_error_obj = PyErr_NewException((char *) error_name, NULL, NULL);
    if (PY_error_obj == NULL)
        return RETVAL;
    st->error = PY_error_obj;
    PyModule_AddObject(m, "Error", st->error);

    // splicer begin C_init_body
    // splicer end C_init_body

    /* Check for errors */
    if (PyErr_Occurred())
        Py_FatalError("can't initialize module ccomplex");
    return RETVAL;
}

