// wrapvectors.h
// This is generated code, do not edit
// Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
/**
 * \file wrapvectors.h
 * \brief Shroud generated wrapper for vectors library
 */
// For C users and C++ implementation

#ifndef WRAPVECTORS_H
#define WRAPVECTORS_H

#include "typesvectors.h"

// splicer begin CXX_declarations
// splicer end CXX_declarations

#ifdef __cplusplus
extern "C" {
#endif

// splicer begin C_declarations
// splicer end C_declarations

int VEC_vector_sum_bufferify(const int * arg, long Sarg);

void VEC_vector_iota_out_bufferify(VEC_SHROUD_array *Darg);

long VEC_vector_iota_out_with_num_bufferify(VEC_SHROUD_array *Darg);

void VEC_vector_iota_out_with_num2_bufferify(VEC_SHROUD_array *Darg);

void VEC_vector_iota_out_alloc_bufferify(VEC_SHROUD_array *Darg);

void VEC_vector_iota_inout_alloc_bufferify(int * arg, long Sarg,
    VEC_SHROUD_array *Darg);

void VEC_vector_increment_bufferify(int * arg, long Sarg,
    VEC_SHROUD_array *Darg);

void VEC_vector_iota_out_d_bufferify(VEC_SHROUD_array *Darg);

int VEC_vector_string_count_bufferify(const char * arg, long Sarg,
    int Narg);

void VEC_return_vector_alloc_bufferify(int n,
    VEC_SHROUD_array *DSHF_rv);

#ifdef __cplusplus
}
#endif

#endif  // WRAPVECTORS_H