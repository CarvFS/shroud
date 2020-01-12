// top.h
// This is generated code, do not edit
// Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
/**
 * \file top.h
 * \brief Shroud generated wrapper for testnames library
 */
// For C users and C++ implementation

#ifndef TOP_H
#define TOP_H

#include "typestestnames.hh"

// splicer begin CXX_declarations
// splicer end CXX_declarations

#ifdef __cplusplus
extern "C" {
#endif

//  Color
enum TES_Color {
    TES_RED,
    TES_BLUE,
    TES_WHITE
};

// splicer begin C_declarations
// splicer end C_declarations

void YYY_TES_function1();

void c_name_special();

void YYY_TES_function3a_0(int i);

void YYY_TES_function3a_1(long i);

int YYY_TES_function4(const char * rv);

int YYY_TES_function4_bufferify(const char * rv, int Lrv);

void YYY_TES_fiveplus();

void TES_test_multiline_splicer(char * name, int * value);

void TES_test_multiline_splicer_bufferify(char * name, int Lname,
    int Nname, int * value);

void c_name_instantiation1(int arg1, long arg2);

void TES_function_tu_instantiation2(float arg1, double arg2);

int TES_use_impl_worker_instantiation3();

#ifdef __cplusplus
}
#endif

#endif  // TOP_H
