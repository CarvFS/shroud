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

void STR_return_char(char *SHC_rv);

void STR_pass_char_ptr(char * dest, const char * src);

void STR_pass_char_ptr_bufferify(char *dest, int SHT_dest_len,
    const char * src);

void STR_pass_char_ptr_in_out(char * s);

void STR_pass_char_ptr_in_out_bufferify(char *s, int SHT_s_len);

const char * STR_get_char_ptr1(void);

void STR_get_char_ptr1_bufferify(STR_SHROUD_array *SHT_rv_cdesc);

const char * STR_get_char_ptr2(void);

void STR_get_char_ptr2_bufferify(char *SHC_rv, int SHT_rv_len);

const char * STR_get_char_ptr3(void);

void STR_get_char_ptr3_bufferify(char *output, int SHT_output_len);

const char * STR_get_char_ptr4(void);

#ifdef HAVE_CHARACTER_POINTER_FUNCTION
const char * STR_get_char_ptr5(void);
#endif

#ifdef HAVE_CHARACTER_POINTER_FUNCTION
void STR_get_char_ptr5_bufferify(STR_SHROUD_array *SHT_rv_cdesc);
#endif

void STR_get_const_string_result_bufferify(
    STR_SHROUD_array *SHT_rv_cdesc);

void STR_get_const_string_len_bufferify(char *SHC_rv, int SHT_rv_len);

void STR_get_const_string_as_arg_bufferify(char *output,
    int SHT_output_len);

void STR_get_const_string_alloc_bufferify(
    STR_SHROUD_array *SHT_rv_cdesc);

const char * STR_get_const_string_ref_pure(void);

void STR_get_const_string_ref_pure_bufferify(
    STR_SHROUD_array *SHT_rv_cdesc);

const char * STR_get_const_string_ref_len(void);

void STR_get_const_string_ref_len_bufferify(char *SHC_rv,
    int SHT_rv_len);

const char * STR_get_const_string_ref_as_arg(void);

void STR_get_const_string_ref_as_arg_bufferify(char *output,
    int SHT_output_len);

const char * STR_get_const_string_ref_len_empty(void);

void STR_get_const_string_ref_len_empty_bufferify(char *SHC_rv,
    int SHT_rv_len);

const char * STR_get_const_string_ref_alloc(void);

void STR_get_const_string_ref_alloc_bufferify(
    STR_SHROUD_array *SHT_rv_cdesc);

const char * STR_get_const_string_ptr_len(void);

void STR_get_const_string_ptr_len_bufferify(char *SHC_rv,
    int SHT_rv_len);

const char * STR_get_const_string_ptr_alloc(void);

void STR_get_const_string_ptr_alloc_bufferify(
    STR_SHROUD_array *SHT_rv_cdesc);

const char * STR_get_const_string_ptr_owns_alloc(void);

void STR_get_const_string_ptr_owns_alloc_bufferify(
    STR_SHROUD_array *SHT_rv_cdesc);

const char * STR_get_const_string_ptr_owns_alloc_pattern(void);

void STR_get_const_string_ptr_owns_alloc_pattern_bufferify(
    STR_SHROUD_array *SHT_rv_cdesc);

#ifdef HAVE_CHARACTER_POINTER_FUNCTION
const char * STR_get_const_string_ptr_pointer(void);
#endif

#ifdef HAVE_CHARACTER_POINTER_FUNCTION
void STR_get_const_string_ptr_pointer_bufferify(
    STR_SHROUD_array *SHT_rv_cdesc);
#endif

void STR_accept_string_const_reference(const char * arg1);

void STR_accept_string_const_reference_bufferify(char *arg1,
    int SHT_arg1_len);

void STR_accept_string_reference_out(char * arg1);

void STR_accept_string_reference_out_bufferify(char *arg1,
    int SHT_arg1_len);

void STR_accept_string_reference(char * arg1);

void STR_accept_string_reference_bufferify(char *arg1,
    int SHT_arg1_len);

void STR_accept_string_pointer_const(const char * arg1);

void STR_accept_string_pointer_const_bufferify(char *arg1,
    int SHT_arg1_len);

void STR_accept_string_pointer(char * arg1);

void STR_accept_string_pointer_bufferify(char *arg1, int SHT_arg1_len);

void STR_fetch_string_pointer(char * arg1);

void STR_fetch_string_pointer_bufferify(char *arg1, int SHT_arg1_len);

void STR_accept_string_pointer_len(char * arg1, int * nlen);

void STR_accept_string_pointer_len_bufferify(char *arg1,
    int SHT_arg1_len, int * nlen);

void STR_fetch_string_pointer_len(char * arg1, int * nlen);

void STR_fetch_string_pointer_len_bufferify(char *arg1,
    int SHT_arg1_len, int * nlen);

int STR_accept_string_instance(char *arg1);

int STR_accept_string_instance_bufferify(char *arg1, int SHT_arg1_len);

void STR_explicit1(char * name);

void STR_explicit2(char * name);

void STR_explicit2_bufferify(char *name, int SHT_name_len);

void STR_creturn_char(char *SHC_rv);

void STR_cpass_char_ptr_bufferify(char *dest, int SHT_dest_len,
    char *src, int SHT_src_len);

void STR_cpass_char_ptr_blank(char * dest, const char * src);

void STR_cpass_char_ptr_blank_bufferify(char *dest, int SHT_dest_len,
    char *src, int SHT_src_len);

void STR_post_declare(int * count, char * name);

void STR_post_declare_bufferify(int * count, char *name,
    int SHT_name_len);

int STR_cpass_char_ptr_notrim(const char * src);

int STR_cpass_char_ptr_notrim_bufferify(char *src, int SHT_src_len);

int STR_cpass_char_ptr_capi(void * addr, const char * src);

int STR_cpass_char_ptr_capi2(const char * in, const char * src);

#ifdef __cplusplus
}
#endif

#endif  // WRAPSTRINGS_H
