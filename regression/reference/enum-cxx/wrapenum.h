// wrapenum.h
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
/**
 * \file wrapenum.h
 * \brief Shroud generated wrapper for enum library
 */
// For C users and C++ implementation

#ifndef WRAPENUM_H
#define WRAPENUM_H

// shroud
#include "typesenum.h"

// splicer begin CXX_declarations
// splicer end CXX_declarations

#ifdef __cplusplus
extern "C" {
#endif

//  Color
enum ENU_Color {
    ENU_RED = 10,
    ENU_BLUE,
    ENU_WHITE
};

//  val
enum ENU_val {
    ENU_a1,
    ENU_b1 = 3,
    ENU_c1,
    ENU_d1 = ENU_b1-ENU_a1,
    ENU_e1 = ENU_d1,
    ENU_f1,
    ENU_g1,
    ENU_h1 = 100
};

// splicer begin C_declarations
// splicer end C_declarations

int ENU_convert_to_int(int in);

#ifdef __cplusplus
}
#endif

#endif  // WRAPENUM_H
