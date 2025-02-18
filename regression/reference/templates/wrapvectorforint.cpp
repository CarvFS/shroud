// wrapvectorforint.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// cxx_header
#include <vector>
// shroud
#include <cstddef>
#include "wrapstd_vector_int.h"

// splicer begin namespace.std.class.vector.CXX_definitions
// splicer end namespace.std.class.vector.CXX_definitions

extern "C" {

// splicer begin namespace.std.class.vector.C_definitions
// splicer end namespace.std.class.vector.C_definitions

// ----------------------------------------
// Function:  vector
// Attrs:     +api(capptr)+intent(ctor)
// Statement: f_ctor_shadow_scalar_capptr
TEM_vector_int * TEM_vector_int_ctor(TEM_vector_int * SHC_rv)
{
    // splicer begin namespace.std.class.vector.method.ctor
    std::vector<int> *SHCXX_rv = new std::vector<int>();
    SHC_rv->addr = static_cast<void *>(SHCXX_rv);
    SHC_rv->idtor = 1;
    return SHC_rv;
    // splicer end namespace.std.class.vector.method.ctor
}

// ----------------------------------------
// Function:  ~vector
// Attrs:     +intent(dtor)
// Statement: f_dtor
void TEM_vector_int_dtor(TEM_vector_int * self)
{
    std::vector<int> *SH_this = static_cast<std::vector<int> *>
        (self->addr);
    // splicer begin namespace.std.class.vector.method.dtor
    delete SH_this;
    self->addr = nullptr;
    // splicer end namespace.std.class.vector.method.dtor
}

// Generated by cxx_template
// ----------------------------------------
// Function:  void push_back
// Attrs:     +intent(subroutine)
// Statement: f_subroutine
// ----------------------------------------
// Argument:  const int & value +intent(in)
// Attrs:     +intent(in)
// Statement: f_in_native_&
void TEM_vector_int_push_back(TEM_vector_int * self, const int * value)
{
    std::vector<int> *SH_this = static_cast<std::vector<int> *>
        (self->addr);
    // splicer begin namespace.std.class.vector.method.push_back
    SH_this->push_back(*value);
    // splicer end namespace.std.class.vector.method.push_back
}

// Generated by cxx_template
// ----------------------------------------
// Function:  int & at
// Attrs:     +deref(pointer)+intent(function)
// Statement: f_function_native_&_pointer
// ----------------------------------------
// Argument:  size_type n +value
// Attrs:     +intent(in)
// Statement: f_in_native_scalar
int * TEM_vector_int_at(TEM_vector_int * self,
    TEM_vector_int_size_type n)
{
    std::vector<int> *SH_this = static_cast<std::vector<int> *>
        (self->addr);
    // splicer begin namespace.std.class.vector.method.at
    int & SHC_rv = SH_this->at(n);
    return &SHC_rv;
    // splicer end namespace.std.class.vector.method.at
}

}  // extern "C"
