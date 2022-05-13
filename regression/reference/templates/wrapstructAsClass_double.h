// wrapstructAsClass_double.h
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
/**
 * \file wrapstructAsClass_double.h
 * \brief Shroud generated wrapper for structAsClass class
 */
// For C users and C++ implementation

#ifndef WRAPSTRUCTASCLASS_DOUBLE_H
#define WRAPSTRUCTASCLASS_DOUBLE_H

// shroud
#include "typestemplates.h"

// splicer begin class.structAsClass.CXX_declarations
// splicer end class.structAsClass.CXX_declarations

#ifdef __cplusplus
extern "C" {
#endif

// splicer begin class.structAsClass.C_declarations
// splicer end class.structAsClass.C_declarations

TEM_structAsClass_double * TEM_structAsClass_double_ctor(
    TEM_structAsClass_double * SHC_rv);

void TEM_structAsClass_double_set_npts(TEM_structAsClass_double * self,
    int n);

int TEM_structAsClass_double_get_npts(TEM_structAsClass_double * self);

void TEM_structAsClass_double_set_value(TEM_structAsClass_double * self,
    double v);

double TEM_structAsClass_double_get_value(
    TEM_structAsClass_double * self);

#ifdef __cplusplus
}
#endif

#endif  // WRAPSTRUCTASCLASS_DOUBLE_H
