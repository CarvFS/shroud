// wrapstrings.h
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
/**
 * \file wrapstrings.h
 * \brief Shroud generated wrapper for strings library
 */
// For C users and C++ implementation

#ifndef WRAPSTRINGS_H
#define WRAPSTRINGS_H

// shroud
#include "ISO_Fortran_binding.h"
#include "typesstrings.h"

// splicer begin CXX_declarations
// splicer end CXX_declarations

#ifdef __cplusplus
extern "C" {
#endif

// splicer begin C_declarations
// splicer end C_declarations

void STR_pass_char(char status);

void STR_pass_char_force(char status);

char STR_return_char(void);

void STR_pass_char_ptr(char * dest, const char * src);

void STR_pass_char_ptr_CFI(CFI_cdesc_t *SHcfi_dest,
    CFI_cdesc_t *SHcfi_src);

void STR_pass_char_ptr_in_out(char * s);

void STR_pass_char_ptr_in_out_CFI(CFI_cdesc_t *SHcfi_s);

const char * STR_get_char_ptr1(void);

const char * STR_get_char_ptr1_CFI(CFI_cdesc_t *SHcfi_SHC_rv);

const char * STR_get_char_ptr2(void);

void STR_get_char_ptr2_CFI(CFI_cdesc_t *SHcfi_SHF_rv);

const char * STR_get_char_ptr3(void);

void STR_get_char_ptr3_CFI(CFI_cdesc_t *SHcfi_output);

const char * STR_get_char_ptr4(void);

const char STR_get_const_string_result_CFI(CFI_cdesc_t *SHcfi_SHC_rv);

void STR_get_const_string_len_CFI(CFI_cdesc_t *SHcfi_SHF_rv);

void STR_get_const_string_as_arg_CFI(CFI_cdesc_t *SHcfi_output);

const char STR_get_const_string_alloc_CFI(CFI_cdesc_t *SHcfi_SHC_rv);

const char * STR_get_const_string_ref_pure(void);

const char * STR_get_const_string_ref_pure_CFI(
    CFI_cdesc_t *SHcfi_SHC_rv);

const char * STR_get_const_string_ref_len(void);

void STR_get_const_string_ref_len_CFI(CFI_cdesc_t *SHcfi_SHF_rv);

const char * STR_get_const_string_ref_as_arg(void);

void STR_get_const_string_ref_as_arg_CFI(CFI_cdesc_t *SHcfi_output);

const char * STR_get_const_string_ref_len_empty(void);

void STR_get_const_string_ref_len_empty_CFI(CFI_cdesc_t *SHcfi_SHF_rv);

const char * STR_get_const_string_ref_alloc(void);

const char * STR_get_const_string_ref_alloc_CFI(
    CFI_cdesc_t *SHcfi_SHC_rv);

const char * STR_get_const_string_ptr_len(void);

void STR_get_const_string_ptr_len_CFI(CFI_cdesc_t *SHcfi_SHF_rv);

const char * STR_get_const_string_ptr_alloc(void);

const char * STR_get_const_string_ptr_alloc_CFI(
    CFI_cdesc_t *SHcfi_SHC_rv);

const char * STR_get_const_string_ptr_owns_alloc(void);

const char * STR_get_const_string_ptr_owns_alloc_CFI(
    CFI_cdesc_t *SHcfi_SHC_rv);

const char * STR_get_const_string_ptr_owns_alloc_pattern(void);

const char * STR_get_const_string_ptr_owns_alloc_pattern_CFI(
    CFI_cdesc_t *SHcfi_SHC_rv);

void STR_accept_string_const_reference(const char * arg1);

void STR_accept_string_const_reference_CFI(CFI_cdesc_t *SHcfi_arg1);

void STR_accept_string_reference_out(char * arg1);

void STR_accept_string_reference_out_CFI(CFI_cdesc_t *SHcfi_arg1);

void STR_accept_string_reference(char * arg1);

void STR_accept_string_reference_CFI(CFI_cdesc_t *SHcfi_arg1);

void STR_accept_string_pointer_const(const char * arg1);

void STR_accept_string_pointer_const_CFI(CFI_cdesc_t *SHcfi_arg1);

void STR_accept_string_pointer(char * arg1);

void STR_accept_string_pointer_CFI(CFI_cdesc_t *SHcfi_arg1);

void STR_fetch_string_pointer(char * arg1);

void STR_fetch_string_pointer_CFI(CFI_cdesc_t *SHcfi_arg1);

void STR_accept_string_pointer_len(char * arg1, int * nlen);

void STR_accept_string_pointer_len_CFI(CFI_cdesc_t *SHcfi_arg1,
    int * nlen);

void STR_fetch_string_pointer_len(char * arg1, int * nlen);

void STR_fetch_string_pointer_len_CFI(CFI_cdesc_t *SHcfi_arg1,
    int * nlen);

int STR_accept_string_instance(char *arg1);

int STR_accept_string_instance_CFI(CFI_cdesc_t *SHcfi_arg1);

void STR_explicit1(char * name);

void STR_explicit1_CFI(CFI_cdesc_t *SHcfi_name);

void STR_explicit2(char * name);

void STR_explicit2_CFI(CFI_cdesc_t *SHcfi_name);

void STR_cpass_char_ptr_CFI(CFI_cdesc_t *SHcfi_dest,
    CFI_cdesc_t *SHcfi_src);

void STR_post_declare(int * count, char * name);

void STR_post_declare_CFI(int * count, CFI_cdesc_t *SHcfi_name);

#ifdef __cplusplus
}
#endif

#endif  // WRAPSTRINGS_H
