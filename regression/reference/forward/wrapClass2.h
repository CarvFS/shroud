// wrapClass2.h
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
/**
 * \file wrapClass2.h
 * \brief Shroud generated wrapper for Class2 class
 */
// For C users and C++ implementation

#ifndef WRAPCLASS2_H
#define WRAPCLASS2_H

// typemap
#include "wrapClass1.h"
// shroud
#include "typesforward.h"

// splicer begin class.Class2.CXX_declarations
// splicer end class.Class2.CXX_declarations

#ifdef __cplusplus
extern "C" {
#endif

// splicer begin class.Class2.C_declarations
// splicer end class.Class2.C_declarations

void FOR_Class2_ctor(FOR_Class2 * SHC_rv);

void FOR_Class2_dtor(FOR_Class2 * self);

void FOR_Class2_func1(FOR_Class2 * self, TUT_Class1 * arg);

void FOR_Class2_accept_class3(FOR_Class2 * self, FOR_Class3 * arg);

#ifdef __cplusplus
}
#endif

#endif  // WRAPCLASS2_H
