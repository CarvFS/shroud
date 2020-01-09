// pyclassesmodule.cpp
// This is generated code, do not edit
// Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "pyclassesmodule.hpp"
#include "classes.hpp"

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
#define PyString_FromString PyUnicode_FromString
#define PyString_FromStringAndSize PyUnicode_FromStringAndSize
#endif

// splicer begin C_definition
// splicer end C_definition
PyObject *PY_error_obj;
// splicer begin additional_functions
// splicer end additional_functions

static char PY_directionFunc__doc__[] =
"documentation"
;

static PyObject *
PY_directionFunc(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// Class1::DIRECTION directionFunc(Class1::DIRECTION arg +intent(in)+value)
// splicer begin function.direction_func
    int arg;
    const char *SHT_kwlist[] = {
        "arg",
        NULL };
    PyObject * SHTPy_rv = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "i:directionFunc",
        const_cast<char **>(SHT_kwlist), &arg))
        return NULL;

    // post_parse
    classes::Class1::DIRECTION SH_arg =
        static_cast<classes::Class1::DIRECTION>(arg);

    classes::Class1::DIRECTION SHCXX_rv =
        classes::directionFunc(SH_arg);

    // post_call
    SHTPy_rv = PyInt_FromLong(SHCXX_rv);

    return (PyObject *) SHTPy_rv;
// splicer end function.direction_func
}

static char PY_passClassByValue__doc__[] =
"documentation"
;

/**
 * \brief Pass arguments to a function.
 *
 */
static PyObject *
PY_passClassByValue(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// void passClassByValue(Class1 arg +intent(in)+value)
// splicer begin function.pass_class_by_value
    PY_Class1 * SHPy_arg;
    const char *SHT_kwlist[] = {
        "arg",
        NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O!:passClassByValue",
        const_cast<char **>(SHT_kwlist), &PY_Class1_Type, &SHPy_arg))
        return NULL;

    // post_parse
    classes::Class1 * arg = SHPy_arg ? SHPy_arg->obj : NULL;

    classes::passClassByValue(*arg);
    Py_RETURN_NONE;
// splicer end function.pass_class_by_value
}

static char PY_useclass__doc__[] =
"documentation"
;

static PyObject *
PY_useclass(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// int useclass(const Class1 * arg +intent(in))
// splicer begin function.useclass
    PY_Class1 * SHPy_arg;
    const char *SHT_kwlist[] = {
        "arg",
        NULL };
    PyObject * SHTPy_rv = NULL;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O!:useclass",
        const_cast<char **>(SHT_kwlist), &PY_Class1_Type, &SHPy_arg))
        return NULL;

    // post_parse
    const classes::Class1 * arg = SHPy_arg ? SHPy_arg->obj : NULL;

    int SHCXX_rv = classes::useclass(arg);

    // post_call
    SHTPy_rv = PyInt_FromLong(SHCXX_rv);

    return (PyObject *) SHTPy_rv;
// splicer end function.useclass
}

static char PY_getclass3__doc__[] =
"documentation"
;

static PyObject *
PY_getclass3(
  PyObject *SHROUD_UNUSED(self),
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// Class1 * getclass3()
// splicer begin function.getclass3
    classes::Class1 * SHCXX_rv = classes::getclass3();

    // post_call
    PY_Class1 * SHTPy_rv = PyObject_New(PY_Class1, &PY_Class1_Type);
    SHTPy_rv->obj = SHCXX_rv;

    return (PyObject *) SHTPy_rv;
// splicer end function.getclass3
}

static char PY_getClassReference__doc__[] =
"documentation"
;

static PyObject *
PY_getClassReference(
  PyObject *SHROUD_UNUSED(self),
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// Class1 & getClassReference()
// splicer begin function.get_class_reference
    classes::Class1 & SHCXX_rv = classes::getClassReference();

    // post_call
    PY_Class1 * SHTPy_rv = PyObject_New(PY_Class1, &PY_Class1_Type);
    SHTPy_rv->obj = &SHCXX_rv;

    return (PyObject *) SHTPy_rv;
// splicer end function.get_class_reference
}

static char PY_set_global_flag__doc__[] =
"documentation"
;

static PyObject *
PY_set_global_flag(
  PyObject *SHROUD_UNUSED(self),
  PyObject *args,
  PyObject *kwds)
{
// void set_global_flag(int arg +intent(in)+value)
// splicer begin function.set_global_flag
    int arg;
    const char *SHT_kwlist[] = {
        "arg",
        NULL };

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "i:set_global_flag",
        const_cast<char **>(SHT_kwlist), &arg))
        return NULL;

    classes::set_global_flag(arg);
    Py_RETURN_NONE;
// splicer end function.set_global_flag
}

static char PY_get_global_flag__doc__[] =
"documentation"
;

static PyObject *
PY_get_global_flag(
  PyObject *SHROUD_UNUSED(self),
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// int get_global_flag()
// splicer begin function.get_global_flag
    PyObject * SHTPy_rv = NULL;

    int SHCXX_rv = classes::get_global_flag();

    // post_call
    SHTPy_rv = PyInt_FromLong(SHCXX_rv);

    return (PyObject *) SHTPy_rv;
// splicer end function.get_global_flag
}

static char PY_LastFunctionCalled__doc__[] =
"documentation"
;

static PyObject *
PY_LastFunctionCalled(
  PyObject *SHROUD_UNUSED(self),
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// const std::string & LastFunctionCalled() +deref(result_as_arg)+len(30)
// splicer begin function.last_function_called
    PyObject * SHTPy_rv = NULL;

    const std::string & SHCXX_rv = classes::LastFunctionCalled();

    // post_call
    SHTPy_rv = PyString_FromStringAndSize(SHCXX_rv.data(),
        SHCXX_rv.size());

    return (PyObject *) SHTPy_rv;
// splicer end function.last_function_called
}
static PyMethodDef PY_methods[] = {
{"directionFunc", (PyCFunction)PY_directionFunc,
    METH_VARARGS|METH_KEYWORDS, PY_directionFunc__doc__},
{"passClassByValue", (PyCFunction)PY_passClassByValue,
    METH_VARARGS|METH_KEYWORDS, PY_passClassByValue__doc__},
{"useclass", (PyCFunction)PY_useclass, METH_VARARGS|METH_KEYWORDS,
    PY_useclass__doc__},
{"getclass3", (PyCFunction)PY_getclass3, METH_NOARGS,
    PY_getclass3__doc__},
{"getClassReference", (PyCFunction)PY_getClassReference, METH_NOARGS,
    PY_getClassReference__doc__},
{"set_global_flag", (PyCFunction)PY_set_global_flag,
    METH_VARARGS|METH_KEYWORDS, PY_set_global_flag__doc__},
{"get_global_flag", (PyCFunction)PY_get_global_flag, METH_NOARGS,
    PY_get_global_flag__doc__},
{"LastFunctionCalled", (PyCFunction)PY_LastFunctionCalled, METH_NOARGS,
    PY_LastFunctionCalled__doc__},
{NULL,   (PyCFunction)NULL, 0, NULL}            /* sentinel */
};

/*
 * initclasses - Initialization function for the module
 * *must* be called initclasses
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
static int classes_traverse(PyObject *m, visitproc visit, void *arg) {
    Py_VISIT(GETSTATE(m)->error);
    return 0;
}

static int classes_clear(PyObject *m) {
    Py_CLEAR(GETSTATE(m)->error);
    return 0;
}

static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT,
    "classes", /* m_name */
    PY__doc__, /* m_doc */
    sizeof(struct module_state), /* m_size */
    PY_methods, /* m_methods */
    NULL, /* m_reload */
    classes_traverse, /* m_traverse */
    classes_clear, /* m_clear */
    NULL  /* m_free */
};

#define RETVAL m
#define INITERROR return NULL
#else
#define RETVAL
#define INITERROR return
#endif

extern "C" PyMODINIT_FUNC
#if PY_MAJOR_VERSION >= 3
PyInit_classes(void)
#else
initclasses(void)
#endif
{
    PyObject *m = NULL;
    const char * error_name = "classes.Error";

    // splicer begin C_init_locals
    // splicer end C_init_locals


    /* Create the module and add the functions */
#if PY_MAJOR_VERSION >= 3
    m = PyModule_Create(&moduledef);
#else
    m = Py_InitModule4("classes", PY_methods,
        PY__doc__,
        (PyObject*)NULL,PYTHON_API_VERSION);
#endif
    if (m == NULL)
        return RETVAL;
    struct module_state *st = GETSTATE(m);

    // Class1
    PY_Class1_Type.tp_new   = PyType_GenericNew;
    PY_Class1_Type.tp_alloc = PyType_GenericAlloc;
    if (PyType_Ready(&PY_Class1_Type) < 0)
        return RETVAL;
    Py_INCREF(&PY_Class1_Type);
    PyModule_AddObject(m, "Class1", (PyObject *)&PY_Class1_Type);

    // Singleton
    PY_Singleton_Type.tp_new   = PyType_GenericNew;
    PY_Singleton_Type.tp_alloc = PyType_GenericAlloc;
    if (PyType_Ready(&PY_Singleton_Type) < 0)
        return RETVAL;
    Py_INCREF(&PY_Singleton_Type);
    PyModule_AddObject(m, "Singleton", (PyObject *)&PY_Singleton_Type);

    {
        // enumeration DIRECTION
        PyObject *tmp_value;
        tmp_value = PyLong_FromLong(classes::Class1::UP);
        PyDict_SetItemString((PyObject*) PY_Class1_Type.tp_dict, "UP", tmp_value);
        Py_DECREF(tmp_value);
        tmp_value = PyLong_FromLong(classes::Class1::DOWN);
        PyDict_SetItemString((PyObject*) PY_Class1_Type.tp_dict, "DOWN", tmp_value);
        Py_DECREF(tmp_value);
        tmp_value = PyLong_FromLong(classes::Class1::LEFT);
        PyDict_SetItemString((PyObject*) PY_Class1_Type.tp_dict, "LEFT", tmp_value);
        Py_DECREF(tmp_value);
        tmp_value = PyLong_FromLong(classes::Class1::RIGHT);
        PyDict_SetItemString((PyObject*) PY_Class1_Type.tp_dict, "RIGHT", tmp_value);
        Py_DECREF(tmp_value);
    }

    PY_error_obj = PyErr_NewException((char *) error_name, NULL, NULL);
    if (PY_error_obj == NULL)
        return RETVAL;
    st->error = PY_error_obj;
    PyModule_AddObject(m, "Error", st->error);

    // splicer begin C_init_body
    // splicer end C_init_body

    /* Check for errors */
    if (PyErr_Occurred())
        Py_FatalError("can't initialize module classes");
    return RETVAL;
}
