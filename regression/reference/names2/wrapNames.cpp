// wrapNames.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// shroud
#include "wrapNames.h"

// splicer begin CXX_definitions
// splicer end CXX_definitions

extern "C" {

// splicer begin C_definitions
// splicer end C_definitions

// ----------------------------------------
// Function:  void AFunction
// Attrs:     +intent(subroutine)
// Statement: f_subroutine
void NAM_AFunction(void)
{
    // splicer begin function.AFunction
    ignore1::ignore2::AFunction();
    // splicer end function.AFunction
}

}  // extern "C"
