// wrapcxxlibrary_structns.h
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
/**
 * \file wrapcxxlibrary_structns.h
 * \brief Shroud generated wrapper for structns namespace
 */
// For C users and C++ implementation

#ifndef WRAPCXXLIBRARY_STRUCTNS_H
#define WRAPCXXLIBRARY_STRUCTNS_H

// shroud
#include "typescxxlibrary.h"

// splicer begin namespace.structns.CXX_declarations
// splicer end namespace.structns.CXX_declarations

#ifdef __cplusplus
extern "C" {
#endif


typedef struct s_CXX_cstruct1 CXX_cstruct1;
struct s_CXX_cstruct1 {
    int ifield;
    double dfield;
};

// splicer begin namespace.structns.C_declarations
// splicer end namespace.structns.C_declarations

int CXX_structns_passStructByReference(CXX_cstruct1 * arg);

int CXX_structns_passStructByReferenceIn(const CXX_cstruct1 * arg);

void CXX_structns_passStructByReferenceInout(CXX_cstruct1 * arg);

void CXX_structns_passStructByReferenceOut(CXX_cstruct1 * arg);

#ifdef __cplusplus
}
#endif

#endif  // WRAPCXXLIBRARY_STRUCTNS_H
