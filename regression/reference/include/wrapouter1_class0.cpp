// wrapouter1_class0.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2022, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// cxx_header
#include "outer1.hpp"
// shroud
#include "wrapouter1_class0.h"


extern "C" {


// ----------------------------------------
// Function:  void method
// Attrs:     +intent(subroutine)
// Exact:     c_subroutine
void LIB_outer1_class0_method(LIB_outer1_class0 * self)
{
    outer1::class0 *SH_this = static_cast<outer1::class0 *>(self->addr);
    SH_this->method();
}

}  // extern "C"
