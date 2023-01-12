// wrapTutorial.h
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2022, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
/**
 * \file wrapTutorial.h
 * \brief Shroud generated wrapper for tutorial namespace
 */
// For C users and C++ implementation

#ifndef WRAPTUTORIAL_H
#define WRAPTUTORIAL_H

// typemap
#include "wrapTutorial.h"
#ifndef __cplusplus
#include <stdbool.h>
#endif
// shroud
#include "typesTutorial.h"

// splicer begin CXX_declarations
// splicer end CXX_declarations

#ifdef __cplusplus
extern "C" {
#endif

// typedef tutorial::TypeID
typedef int TUT_TypeID;

// typedef tutorial::EnumTypeID
typedef int TUT_EnumTypeID;

//  tutorial::Color
enum TUT_Color {
    TUT_RED,
    TUT_BLUE,
    TUT_WHITE
};

// splicer begin C_declarations
// splicer end C_declarations

void TUT_no_return_no_arguments(void);

double TUT_pass_by_value(double arg1, int arg2);

void TUT_concatenate_strings_bufferify(char *arg1, int SHT_arg1_len,
    char *arg2, int SHT_arg2_len, TUT_SHROUD_array *SHT_rv_cdesc);

double TUT_use_default_arguments(void);

double TUT_use_default_arguments_arg1(double arg1);

double TUT_use_default_arguments_arg1_arg2(double arg1, bool arg2);

void TUT_overloaded_function_from_name(const char * name);

void TUT_overloaded_function_from_name_bufferify(char *name,
    int SHT_name_len);

void TUT_overloaded_function_from_index(int indx);

void TUT_template_argument_int(int arg);

void TUT_template_argument_double(double arg);

int TUT_template_return_int(void);

double TUT_template_return_double(void);

void TUT_fortran_generic_overloaded_0(void);

void TUT_fortran_generic_overloaded_1(const char * name, double arg2);

void TUT_fortran_generic_overloaded_1_float_bufferify(char *name,
    int SHT_name_len, float arg2);

void TUT_fortran_generic_overloaded_1_double_bufferify(char *name,
    int SHT_name_len, double arg2);

int TUT_use_default_overload_num(int num);

int TUT_use_default_overload_num_offset(int num, int offset);

int TUT_use_default_overload_num_offset_stride(int num, int offset,
    int stride);

int TUT_use_default_overload_3(double type, int num);

int TUT_use_default_overload_4(double type, int num, int offset);

int TUT_use_default_overload_5(double type, int num, int offset,
    int stride);

TUT_TypeID TUT_typefunc(TUT_TypeID arg);

TUT_EnumTypeID TUT_enumfunc(TUT_EnumTypeID arg);

int TUT_colorfunc(int arg);

void TUT_get_min_max(int * min, int * max);

int TUT_callback1(int in, int ( * incr)(int));

const char * TUT_last_function_called(void);

void TUT_last_function_called_bufferify(char *SHC_rv, int SHT_rv_len);

#ifdef __cplusplus
}
#endif

#endif  // WRAPTUTORIAL_H
