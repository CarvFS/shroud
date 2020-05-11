// wrappointers.h
// This file is generated by Shroud 0.11.0. Do not edit.
// Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
/**
 * \file wrappointers.h
 * \brief Shroud generated wrapper for pointers library
 */
// For C users and C implementation

#ifndef WRAPPOINTERS_H
#define WRAPPOINTERS_H

#include "typespointers.h"

// splicer begin C_declarations
// splicer end C_declarations

void POI_accept_char_array_in_bufferify(char *names, long Snames,
    int Nnames);

void POI_get_ptr_to_scalar_bufferify(POI_SHROUD_array *Dnitems);

void POI_get_ptr_to_fixed_array_bufferify(POI_SHROUD_array *Dcount);

void POI_get_ptr_to_dynamic_array_bufferify(POI_SHROUD_array *Dcount,
    int * ncount);

void POI_get_ptr_to_func_array_bufferify(POI_SHROUD_array *Dcount);

void POI_get_raw_ptr_to_scalar_bufferify(POI_SHROUD_array *Dnitems);

void POI_get_raw_ptr_to_fixed_array_bufferify(POI_SHROUD_array *Dcount);

int * POI_return_int_ptr_to_fixed_array_bufferify(
    POI_SHROUD_array *DSHC_rv);

const int * POI_return_int_ptr_to_fixed_const_array_bufferify(
    POI_SHROUD_array *DSHC_rv);

#endif  // WRAPPOINTERS_H
