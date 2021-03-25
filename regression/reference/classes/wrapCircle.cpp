// wrapCircle.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//
#include "wrapCircle.h"

// cxx_header
#include "classes.hpp"

// splicer begin class.Circle.CXX_definitions
// splicer end class.Circle.CXX_definitions

extern "C" {

// splicer begin class.Circle.C_definitions
// splicer end class.Circle.C_definitions

// ----------------------------------------
// Function:  Circle
// Attrs:     +intent(ctor)
// Requested: c_ctor_shadow_scalar
// Match:     c_ctor
void CLA_Circle_ctor(CLA_Circle * SHC_rv)
{
    // splicer begin class.Circle.method.ctor
    classes::Circle *SHCXX_rv = new classes::Circle();
    SHC_rv->addr = static_cast<void *>(SHCXX_rv);
    SHC_rv->idtor = 3;
    // splicer end class.Circle.method.ctor
}

}  // extern "C"
