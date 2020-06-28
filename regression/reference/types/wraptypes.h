// wraptypes.h
// This file is generated by Shroud 0.12.1. Do not edit.
// Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
/**
 * \file wraptypes.h
 * \brief Shroud generated wrapper for types library
 */
// For C users and C++ implementation

#ifndef WRAPTYPES_H
#define WRAPTYPES_H

#include "typestypes.h"
#ifdef __cplusplus
#include <cstddef>
#include <cstdint>
#else
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#endif

// splicer begin CXX_declarations
// splicer end CXX_declarations

#ifdef __cplusplus
extern "C" {
#endif

// splicer begin C_declarations
// splicer end C_declarations

short TYP_short_func(short arg1);

int TYP_int_func(int arg1);

long TYP_long_func(long arg1);

long long TYP_long_long_func(long long arg1);

short TYP_short_int_func(short arg1);

long TYP_long_int_func(long arg1);

long long TYP_long_long_int_func(long long arg1);

unsigned int TYP_unsigned_func(unsigned int arg1);

unsigned short TYP_ushort_func(unsigned short arg1);

unsigned int TYP_uint_func(unsigned int arg1);

unsigned long TYP_ulong_func(unsigned long arg1);

unsigned long long TYP_ulong_long_func(unsigned long long arg1);

unsigned long TYP_ulong_int_func(unsigned long arg1);

int8_t TYP_int8_func(int8_t arg1);

int16_t TYP_int16_func(int16_t arg1);

int32_t TYP_int32_func(int32_t arg1);

int64_t TYP_int64_func(int64_t arg1);

uint8_t TYP_uint8_func(uint8_t arg1);

uint16_t TYP_uint16_func(uint16_t arg1);

uint32_t TYP_uint32_func(uint32_t arg1);

uint64_t TYP_uint64_func(uint64_t arg1);

size_t TYP_size_func(size_t arg1);

bool TYP_bool_func(bool arg);

bool TYP_return_bool_and_others(int * flag);

#ifdef __cplusplus
}
#endif

#endif  // WRAPTYPES_H
