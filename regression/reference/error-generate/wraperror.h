// wraperror.h
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
/**
 * \file wraperror.h
 * \brief Shroud generated wrapper for error library
 */
// For C users and C++ implementation

#ifndef WRAPERROR_H
#define WRAPERROR_H

// shroud
#include "typeserror.h"

// splicer begin CXX_declarations
// splicer end CXX_declarations

#ifdef __cplusplus
extern "C" {
#endif


struct s_ERR_struct1 {
    int arg1;
};
typedef struct s_ERR_struct1 ERR_struct1;


struct s_ERR_nested {
    int sublevels;
};
typedef struct s_ERR_nested ERR_nested;

// splicer begin C_declarations
// splicer end C_declarations

#ifdef __cplusplus
}
#endif

#endif  // WRAPERROR_H
