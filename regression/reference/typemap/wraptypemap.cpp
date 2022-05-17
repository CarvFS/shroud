// wraptypemap.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2022, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

#include "typemap.hpp"
#include "wraptypemap.h"

// splicer begin CXX_definitions
// splicer end CXX_definitions

extern "C" {

// splicer begin C_definitions
// splicer end C_definitions

bool TYP_pass_index(IndexType i1, IndexType * i2)
{
    // splicer begin function.pass_index
    bool SHC_rv = passIndex(i1, i2);
    return SHC_rv;
    // splicer end function.pass_index
}

void TYP_pass_float(FloatType f1)
{
    // splicer begin function.pass_float
    passFloat(f1);
    // splicer end function.pass_float
}

}  // extern "C"
