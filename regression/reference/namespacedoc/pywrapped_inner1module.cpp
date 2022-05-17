// pywrapped_inner1module.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2022, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "pywrappedmodule.hpp"

// splicer begin namespace.inner1.include
// splicer end namespace.inner1.include

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

// splicer begin namespace.inner1.C_definition
// splicer end namespace.inner1.C_definition
// splicer begin namespace.inner1.additional_functions
// splicer end namespace.inner1.additional_functions

// ----------------------------------------
// Function:  void worker
// Attrs:     +intent(subroutine)
// Exact:     py_default
static char PY_worker__doc__[] =
"documentation"
;

static PyObject *
PY_worker(
  PyObject *SHROUD_UNUSED(self),
  PyObject *SHROUD_UNUSED(args),
  PyObject *SHROUD_UNUSED(kwds))
{
// splicer begin namespace.inner1.function.worker
    outer::inner1::worker();
    Py_RETURN_NONE;
// splicer end namespace.inner1.function.worker
}
static PyMethodDef PY_methods[] = {
{"worker", (PyCFunction)PY_worker, METH_NOARGS, PY_worker__doc__},
{nullptr,   (PyCFunction)nullptr, 0, nullptr}            /* sentinel */
};

#if PY_MAJOR_VERSION >= 3
static char PY__doc__[] =
"XXX submodule doc"  //"library documentation"
;

struct module_state {
    PyObject *error;
};

static struct PyModuleDef moduledef = {
    PyModuleDef_HEAD_INIT,
    "wrapped.inner1", /* m_name */
    PY__doc__, /* m_doc */
    sizeof(struct module_state), /* m_size */
    PY_methods, /* m_methods */
    nullptr, /* m_reload */
//    wrapped_traverse, /* m_traverse */
//    wrapped_clear, /* m_clear */
    nullptr, /* m_traverse */
    nullptr, /* m_clear */
    nullptr  /* m_free */
};
#endif
#define RETVAL nullptr

PyObject *PY_init_wrapped_inner1(void)
{
    PyObject *m;
#if PY_MAJOR_VERSION >= 3
    m = PyModule_Create(&moduledef);
#else
    m = Py_InitModule3((char *) "inner1", PY_methods, nullptr);
#endif
    if (m == nullptr)
        return nullptr;


    return m;
}

