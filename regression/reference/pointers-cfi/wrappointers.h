// wrappointers.h
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
/**
 * \file wrappointers.h
 * \brief Shroud generated wrapper for pointers library
 */
// For C users and C++ implementation

#ifndef WRAPPOINTERS_H
#define WRAPPOINTERS_H

// typemap
#ifdef __cplusplus
#include <cstddef>
#else
#include <stddef.h>
#endif
// shroud
#include "typespointers.h"

// splicer begin CXX_declarations
// splicer end CXX_declarations

#ifdef __cplusplus
extern "C" {
#endif

// shroud
#include "ISO_Fortran_binding.h"

// splicer begin C_declarations
// splicer end C_declarations

void POI_intargs_in(const int * arg);

void POI_intargs_inout(int * arg);

void POI_intargs_out(int * arg);

void POI_intargs(const int argin, int * arginout, int * argout);

void POI_cos_doubles(double * in, double * out, int sizein);

void POI_cos_doubles_CFI(CFI_cdesc_t *SHT_in_cfi, double * out,
    int sizein);

void POI_truncate_to_int(double * in, int * out, int sizein);

void POI_truncate_to_int_CFI(CFI_cdesc_t *SHT_in_cfi, int * out,
    int sizein);

void POI_get_values(int * nvalues, int * values);

void POI_get_values2(int * arg1, int * arg2);

void POI_iota_dimension(int nvar, int * values);

void POI_Sum(int len, const int * values, int * result);

void POI_Sum_CFI(int len, CFI_cdesc_t *SHT_values_cfi, int * result);

void POI_fillIntArray(int * out);

void POI_incrementIntArray(int * array, int sizein);

void POI_incrementIntArray_CFI(CFI_cdesc_t *SHT_array_cfi, int sizein);

void POI_fill_with_zeros(double * x, int x_length);

void POI_fill_with_zeros_CFI(CFI_cdesc_t *SHT_x_cfi, int x_length);

int POI_accumulate(const int * arr, size_t len);

int POI_accumulate_CFI(CFI_cdesc_t *SHT_arr_cfi, size_t len);

int POI_acceptCharArrayIn(char **names);

int POI_acceptCharArrayIn_CFI(CFI_cdesc_t *SHT_names_cfi);

void POI_setGlobalInt(int value);

int POI_sumFixedArray(void);

void POI_getPtrToScalar(int * * nitems);

void POI_getPtrToScalar_CFI(CFI_cdesc_t *SHT_nitems_cfi);

void POI_getPtrToFixedArray(int * * count);

void POI_getPtrToFixedArray_CFI(CFI_cdesc_t *SHT_count_cfi);

void POI_getPtrToDynamicArray(int * * count, int * ncount);

void POI_getPtrToDynamicArray_CFI(CFI_cdesc_t *SHT_count_cfi);

void POI_getPtrToFuncArray(int * * count);

void POI_getPtrToFuncArray_CFI(CFI_cdesc_t *SHT_count_cfi);

void POI_getPtrToConstScalar(const int * * nitems);

void POI_getPtrToConstScalar_CFI(CFI_cdesc_t *SHT_nitems_cfi);

void POI_getPtrToFixedConstArray(const int * * count);

void POI_getPtrToFixedConstArray_CFI(CFI_cdesc_t *SHT_count_cfi);

void POI_getPtrToDynamicConstArray(const int * * count, int * ncount);

void POI_getPtrToDynamicConstArray_CFI(CFI_cdesc_t *SHT_count_cfi);

void POI_getRawPtrToScalar(int * * nitems);

void POI_getRawPtrToScalarForce(int * * nitems);

void POI_getRawPtrToFixedArray(int * * count);

void POI_getRawPtrToFixedArrayForce(int * * count);

void POI_getRawPtrToInt2d(int * * * arg);

int POI_checkInt2d(int **arg);

void POI_DimensionIn(const int * arg);

void POI_getAllocToFixedArray(int * * count);

void POI_getAllocToFixedArray_CFI(CFI_cdesc_t *SHT_count_cfi);

void * POI_returnAddress1(int flag);

void * POI_returnAddress2(int flag);

void POI_fetchVoidPtr(void **addr);

void POI_updateVoidPtr(void **addr);

int POI_VoidPtrArray(void **addr);

int POI_VoidPtrArray_CFI(void **addr);

int * POI_returnIntPtrToScalar(void);

void POI_returnIntPtrToScalar_CFI(CFI_cdesc_t *SHT_rv_cfi);

int * POI_returnIntPtrToFixedArray(void);

void POI_returnIntPtrToFixedArray_CFI(CFI_cdesc_t *SHT_rv_cfi);

const int * POI_returnIntPtrToConstScalar(void);

void POI_returnIntPtrToConstScalar_CFI(CFI_cdesc_t *SHT_rv_cfi);

const int * POI_returnIntPtrToFixedConstArray(void);

void POI_returnIntPtrToFixedConstArray_CFI(CFI_cdesc_t *SHT_rv_cfi);

int POI_returnIntScalar(void);

int * POI_returnIntRaw(void);

int * POI_returnIntRawWithArgs(const char * name);

int * POI_returnIntRawWithArgs_CFI(CFI_cdesc_t *SHT_name_cfi);

int * * POI_returnRawPtrToInt2d(void);

int * POI_returnIntAllocToFixedArray(void);

void POI_returnIntAllocToFixedArray_CFI(CFI_cdesc_t *SHT_rv_cfi);

#ifdef __cplusplus
}
#endif

#endif  // WRAPPOINTERS_H
