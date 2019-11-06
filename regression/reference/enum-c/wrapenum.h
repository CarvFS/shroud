// wrapenum.h
// This is generated code, do not edit
// Copyright (c) 2017-2019, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
/**
 * \file wrapenum.h
 * \brief Shroud generated wrapper for enum library
 */
// For C users and C implementation

#ifndef WRAPENUM_H
#define WRAPENUM_H

#include "typesenum.h"

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
    ENU_d1 = b1-a1,
    ENU_e1 = d1,
    ENU_f1,
    ENU_g1,
    ENU_h1 = 100
};

// splicer begin C_declarations
// splicer end C_declarations

#endif  // WRAPENUM_H
