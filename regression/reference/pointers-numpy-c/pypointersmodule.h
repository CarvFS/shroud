// pypointersmodule.h
// This is generated code, do not edit
// #######################################################################
// Copyright (c) 2017-2019, Lawrence Livermore National Security, LLC.
//
// Produced at the Lawrence Livermore National Laboratory
//
// LLNL-CODE-738041.
//
// All rights reserved.
//
// This file is part of Shroud.
//
// For details about use and distribution, please read LICENSE.
//
// #######################################################################
#ifndef PYPOINTERSMODULE_H
#define PYPOINTERSMODULE_H
#include <Python.h>
// splicer begin header.include
// splicer end header.include

// splicer begin header.C_declaration
// splicer end header.C_declaration

extern PyObject *PY_error_obj;

#if PY_MAJOR_VERSION >= 3
PyMODINIT_FUNC PyInit_pointers(void);
#else
PyMODINIT_FUNC initpointers(void);
#endif

#endif  /* PYPOINTERSMODULE_H */