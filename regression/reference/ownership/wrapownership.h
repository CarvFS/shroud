// wrapownership.h
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
/**
 * \file wrapownership.h
 * \brief Shroud generated wrapper for ownership library
 */
// For C users and C++ implementation

#ifndef WRAPOWNERSHIP_H
#define WRAPOWNERSHIP_H

// shroud
#include "typesownership.h"

// splicer begin CXX_declarations
// splicer end CXX_declarations

#ifdef __cplusplus
extern "C" {
#endif

// splicer begin C_declarations
// splicer end C_declarations

int * OWN_ReturnIntPtrRaw(void);

int OWN_ReturnIntPtrScalar(void);

int * OWN_ReturnIntPtrPointer(void);

int * OWN_ReturnIntPtrDimRaw(int * len);

int * OWN_ReturnIntPtrDimPointer(int * len);

void OWN_ReturnIntPtrDimPointer_bufferify(
    OWN_SHROUD_array *SHT_rv_cdesc);

int * OWN_ReturnIntPtrDimAlloc(int * len);

void OWN_ReturnIntPtrDimAlloc_bufferify(OWN_SHROUD_array *SHT_rv_cdesc);

int * OWN_ReturnIntPtrDimDefault(int * len);

void OWN_ReturnIntPtrDimDefault_bufferify(
    OWN_SHROUD_array *SHT_rv_cdesc);

int * OWN_ReturnIntPtrDimRawNew(int * len);

int * OWN_ReturnIntPtrDimPointerNew(int * len);

void OWN_ReturnIntPtrDimPointerNew_bufferify(
    OWN_SHROUD_array *SHT_rv_cdesc);

int * OWN_ReturnIntPtrDimAllocNew(int * len);

int * OWN_ReturnIntPtrDimDefaultNew(int * len);

void OWN_ReturnIntPtrDimDefaultNew_bufferify(
    OWN_SHROUD_array *SHT_rv_cdesc);

void OWN_createClassStatic(int flag);

OWN_Class1 * OWN_getClassStatic(OWN_Class1 * SHC_rv);

OWN_Class1 * OWN_getClassNew(int flag, OWN_Class1 * SHC_rv);

#ifdef __cplusplus
}
#endif

#endif  // WRAPOWNERSHIP_H
