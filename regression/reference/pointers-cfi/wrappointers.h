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

void POI_sum(int len, const int * values, int * result);

void POI_sum_CFI(int len, CFI_cdesc_t *SHT_values_cfi, int * result);

void POI_fill_int_array(int * out);

void POI_increment_int_array(int * array, int sizein);

void POI_increment_int_array_CFI(CFI_cdesc_t *SHT_array_cfi,
    int sizein);

void POI_fill_with_zeros(double * x, int x_length);

void POI_fill_with_zeros_CFI(CFI_cdesc_t *SHT_x_cfi, int x_length);

int POI_accumulate(const int * arr, size_t len);

int POI_accumulate_CFI(CFI_cdesc_t *SHT_arr_cfi, size_t len);

int POI_accept_char_array_in(char **names);

int POI_accept_char_array_in_CFI(CFI_cdesc_t *SHT_names_cfi);

void POI_set_global_int(int value);

int POI_sum_fixed_array(void);

void POI_get_ptr_to_scalar(int * * nitems);

void POI_get_ptr_to_scalar_CFI(CFI_cdesc_t *SHT_nitems_cfi);

void POI_get_ptr_to_fixed_array(int * * count);

void POI_get_ptr_to_fixed_array_CFI(CFI_cdesc_t *SHT_count_cfi);

void POI_get_ptr_to_dynamic_array(int * * count, int * ncount);

void POI_get_ptr_to_dynamic_array_CFI(CFI_cdesc_t *SHT_count_cfi);

void POI_get_ptr_to_func_array(int * * count);

void POI_get_ptr_to_func_array_CFI(CFI_cdesc_t *SHT_count_cfi);

void POI_get_ptr_to_const_scalar(const int * * nitems);

void POI_get_ptr_to_const_scalar_CFI(CFI_cdesc_t *SHT_nitems_cfi);

void POI_get_ptr_to_fixed_const_array(const int * * count);

void POI_get_ptr_to_fixed_const_array_CFI(CFI_cdesc_t *SHT_count_cfi);

void POI_get_ptr_to_dynamic_const_array(const int * * count,
    int * ncount);

void POI_get_ptr_to_dynamic_const_array_CFI(CFI_cdesc_t *SHT_count_cfi);

void POI_get_raw_ptr_to_scalar(int * * nitems);

void POI_get_raw_ptr_to_scalar_force(int * * nitems);

void POI_get_raw_ptr_to_fixed_array(int * * count);

void POI_get_raw_ptr_to_fixed_array_force(int * * count);

void POI_get_raw_ptr_to_int2d(int * * * arg);

int POI_check_int2d(int **arg);

void POI_dimension_in(const int * arg);

void POI_get_alloc_to_fixed_array(int * * count);

void POI_get_alloc_to_fixed_array_CFI(CFI_cdesc_t *SHT_count_cfi);

void * POI_return_address1(int flag);

void * POI_return_address2(int flag);

void POI_fetch_void_ptr(void **addr);

void POI_update_void_ptr(void **addr);

int POI_void_ptr_array(void **addr);

int POI_void_ptr_array_CFI(void **addr);

int * POI_return_int_ptr_to_scalar(void);

void POI_return_int_ptr_to_scalar_CFI(CFI_cdesc_t *SHT_rv_cfi);

int * POI_return_int_ptr_to_fixed_array(void);

void POI_return_int_ptr_to_fixed_array_CFI(CFI_cdesc_t *SHT_rv_cfi);

const int * POI_return_int_ptr_to_const_scalar(void);

void POI_return_int_ptr_to_const_scalar_CFI(CFI_cdesc_t *SHT_rv_cfi);

const int * POI_return_int_ptr_to_fixed_const_array(void);

void POI_return_int_ptr_to_fixed_const_array_CFI(
    CFI_cdesc_t *SHT_rv_cfi);

int POI_return_int_scalar(void);

int * POI_return_int_raw(void);

int * POI_return_int_raw_with_args(const char * name);

int * POI_return_int_raw_with_args_CFI(CFI_cdesc_t *SHT_name_cfi);

int * * POI_return_raw_ptr_to_int2d(void);

int * POI_return_int_alloc_to_fixed_array(void);

void POI_return_int_alloc_to_fixed_array_CFI(CFI_cdesc_t *SHT_rv_cfi);

#ifdef __cplusplus
}
#endif

#endif  // WRAPPOINTERS_H
