// wrapexample_nested_ExClass2.h
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
/**
 * \file wrapexample_nested_ExClass2.h
 * \brief Shroud generated wrapper for ExClass2 class
 */
// For C users and C++ implementation

#ifndef WRAPEXAMPLE_NESTED_EXCLASS2_H
#define WRAPEXAMPLE_NESTED_EXCLASS2_H
#ifdef __cplusplus
#include "sidre/SidreWrapperHelpers.hpp"
#else
#include "sidre/SidreTypes.h"
#endif
// shroud
#include "typesUserLibrary.h"

// splicer begin namespace.example::nested.class.ExClass2.CXX_declarations
// splicer end namespace.example::nested.class.ExClass2.CXX_declarations

#ifdef __cplusplus
extern "C" {
#endif

// splicer begin namespace.example::nested.class.ExClass2.C_declarations
// splicer end namespace.example::nested.class.ExClass2.C_declarations

AA_example_nested_ExClass2 * AA_example_nested_ExClass2_ctor(
    const char * name, AA_example_nested_ExClass2 * SHadow_rv);

AA_example_nested_ExClass2 * AA_example_nested_ExClass2_ctor_bufferify(
    const char * name, int trim_name,
    AA_example_nested_ExClass2 * SHadow_rv);

void AA_example_nested_ExClass2_dtor(AA_example_nested_ExClass2 * self);

const char * AA_example_nested_ExClass2_get_name(
    const AA_example_nested_ExClass2 * self);

void AA_example_nested_ExClass2_get_name_bufferify(
    const AA_example_nested_ExClass2 * self, char * SHF_rv,
    int NSHF_rv);

const char * AA_example_nested_ExClass2_get_name2(
    AA_example_nested_ExClass2 * self);

void AA_example_nested_ExClass2_get_name2_bufferify(
    AA_example_nested_ExClass2 * self, AA_SHROUD_array *DSHF_rv);

char * AA_example_nested_ExClass2_get_name3(
    const AA_example_nested_ExClass2 * self);

void AA_example_nested_ExClass2_get_name3_bufferify(
    const AA_example_nested_ExClass2 * self, AA_SHROUD_array *DSHF_rv);

char * AA_example_nested_ExClass2_get_name4(
    AA_example_nested_ExClass2 * self);

void AA_example_nested_ExClass2_get_name4_bufferify(
    AA_example_nested_ExClass2 * self, AA_SHROUD_array *DSHF_rv);

int AA_example_nested_ExClass2_get_name_length(
    const AA_example_nested_ExClass2 * self);

AA_example_nested_ExClass1 * AA_example_nested_ExClass2_get_class1(
    AA_example_nested_ExClass2 * self, AA_example_nested_ExClass1 * in,
    AA_example_nested_ExClass1 * SHadow_rv);

void AA_example_nested_ExClass2_declare_0(
    AA_example_nested_ExClass2 * self, int type);

void AA_example_nested_ExClass2_declare_1(
    AA_example_nested_ExClass2 * self, int type, SIDRE_SidreLength len);

void AA_example_nested_ExClass2_destroyall(
    AA_example_nested_ExClass2 * self);

int AA_example_nested_ExClass2_get_type_id(
    const AA_example_nested_ExClass2 * self);

void AA_example_nested_ExClass2_set_value_int(
    AA_example_nested_ExClass2 * self, int value);

void AA_example_nested_ExClass2_set_value_long(
    AA_example_nested_ExClass2 * self, long value);

void AA_example_nested_ExClass2_set_value_float(
    AA_example_nested_ExClass2 * self, float value);

void AA_example_nested_ExClass2_set_value_double(
    AA_example_nested_ExClass2 * self, double value);

int AA_example_nested_ExClass2_get_value_int(
    AA_example_nested_ExClass2 * self);

double AA_example_nested_ExClass2_get_value_double(
    AA_example_nested_ExClass2 * self);

#ifdef __cplusplus
}
#endif

#endif  // WRAPEXAMPLE_NESTED_EXCLASS2_H
