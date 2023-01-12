// wrapArrayWrapper.h
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
/**
 * \file wrapArrayWrapper.h
 * \brief Shroud generated wrapper for ArrayWrapper class
 */
// For C users and C++ implementation

#ifndef WRAPARRAYWRAPPER_H
#define WRAPARRAYWRAPPER_H

// typemap
#ifndef __cplusplus
#include <stdbool.h>
#endif
// shroud
#include "typesarrayclass.h"

// splicer begin class.ArrayWrapper.CXX_declarations
// splicer end class.ArrayWrapper.CXX_declarations

#ifdef __cplusplus
extern "C" {
#endif

// splicer begin class.ArrayWrapper.C_declarations
// splicer end class.ArrayWrapper.C_declarations

ARR_ArrayWrapper * ARR_ArrayWrapper_ctor(ARR_ArrayWrapper * SHC_rv);

void ARR_ArrayWrapper_set_size(ARR_ArrayWrapper * self, int size);

int ARR_ArrayWrapper_get_size(const ARR_ArrayWrapper * self);

void ARR_ArrayWrapper_fill_size(ARR_ArrayWrapper * self, int * size);

void ARR_ArrayWrapper_allocate(ARR_ArrayWrapper * self);

double * ARR_ArrayWrapper_get_array(ARR_ArrayWrapper * self);

void ARR_ArrayWrapper_get_array_bufferify(ARR_ArrayWrapper * self,
    ARR_SHROUD_array *SHT_rv_cdesc);

double * ARR_ArrayWrapper_get_array_const(
    const ARR_ArrayWrapper * self);

void ARR_ArrayWrapper_get_array_const_bufferify(
    const ARR_ArrayWrapper * self, ARR_SHROUD_array *SHT_rv_cdesc);

const double * ARR_ArrayWrapper_get_array_c(ARR_ArrayWrapper * self);

void ARR_ArrayWrapper_get_array_c_bufferify(ARR_ArrayWrapper * self,
    ARR_SHROUD_array *SHT_rv_cdesc);

const double * ARR_ArrayWrapper_get_array_const_c(
    const ARR_ArrayWrapper * self);

void ARR_ArrayWrapper_get_array_const_c_bufferify(
    const ARR_ArrayWrapper * self, ARR_SHROUD_array *SHT_rv_cdesc);

void ARR_ArrayWrapper_fetch_array_ptr(ARR_ArrayWrapper * self,
    double * * array, int * isize);

void ARR_ArrayWrapper_fetch_array_ptr_bufferify(ARR_ArrayWrapper * self,
    ARR_SHROUD_array *SHT_array_cdesc);

void ARR_ArrayWrapper_fetch_array_ref(ARR_ArrayWrapper * self,
    double * * array, int * isize);

void ARR_ArrayWrapper_fetch_array_ref_bufferify(ARR_ArrayWrapper * self,
    ARR_SHROUD_array *SHT_array_cdesc);

void ARR_ArrayWrapper_fetch_array_ptr_const(ARR_ArrayWrapper * self,
    const double * * array, int * isize);

void ARR_ArrayWrapper_fetch_array_ptr_const_bufferify(
    ARR_ArrayWrapper * self, ARR_SHROUD_array *SHT_array_cdesc);

void ARR_ArrayWrapper_fetch_array_ref_const(ARR_ArrayWrapper * self,
    const double * * array, int * isize);

void ARR_ArrayWrapper_fetch_array_ref_const_bufferify(
    ARR_ArrayWrapper * self, ARR_SHROUD_array *SHT_array_cdesc);

void ARR_ArrayWrapper_fetch_void_ptr(ARR_ArrayWrapper * self,
    void **array);

void ARR_ArrayWrapper_fetch_void_ref(ARR_ArrayWrapper * self,
    void * * array);

bool ARR_ArrayWrapper_check_ptr(ARR_ArrayWrapper * self, void * array);

double ARR_ArrayWrapper_sum_array(ARR_ArrayWrapper * self);

#ifdef __cplusplus
}
#endif

#endif  // WRAPARRAYWRAPPER_H
