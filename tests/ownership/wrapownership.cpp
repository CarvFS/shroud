// wrapownership.cpp
// This is generated code, do not edit
// #######################################################################
// Copyright (c) 2017-2018, Lawrence Livermore National Security, LLC.
// Produced at the Lawrence Livermore National Laboratory
//
// LLNL-CODE-738041.
// All rights reserved.
//
// This file is part of Shroud.  For details, see
// https://github.com/LLNL/shroud. Please also read shroud/LICENSE.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
// * Redistributions of source code must retain the above copyright
//   notice, this list of conditions and the disclaimer below.
//
// * Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the disclaimer (as noted below)
//   in the documentation and/or other materials provided with the
//   distribution.
//
// * Neither the name of the LLNS/LLNL nor the names of its contributors
//   may be used to endorse or promote products derived from this
//   software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL LAWRENCE
// LIVERMORE NATIONAL SECURITY, LLC, THE U.S. DEPARTMENT OF ENERGY OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// #######################################################################
#include "wrapownership.h"
#include <stdlib.h>
#include "ownership.hpp"

// splicer begin CXX_definitions
// splicer end CXX_definitions

extern "C" {

// splicer begin C_definitions
// splicer end C_definitions

// int * ReturnIntPtr()
// function_index=1
int * OWN_return_int_ptr()
{
// splicer begin function.return_int_ptr
    int * SHC_rv = ReturnIntPtr();
    return SHC_rv;
// splicer end function.return_int_ptr
}

// int * ReturnIntPtrScalar()
// function_index=2
int OWN_return_int_ptr_scalar()
{
// splicer begin function.return_int_ptr_scalar
    int * SHC_rv = ReturnIntPtrScalar();
    return *SHC_rv;
// splicer end function.return_int_ptr_scalar
}

// int * ReturnIntPtrDim(int * len +hidden+intent(out)) +dimension(len)
// function_index=3
int * OWN_return_int_ptr_dim(int * len)
{
// splicer begin function.return_int_ptr_dim
    int * SHC_rv = ReturnIntPtrDim(len);
    return SHC_rv;
// splicer end function.return_int_ptr_dim
}

// int * ReturnIntPtrDimNew(int * len +hidden+intent(out)) +dimension(len)
// function_index=4
int * OWN_return_int_ptr_dim_new(int * len)
{
// splicer begin function.return_int_ptr_dim_new
    int * SHC_rv = ReturnIntPtrDimNew(len);
    return SHC_rv;
// splicer end function.return_int_ptr_dim_new
}

// void createClassStatic(int flag +intent(in)+value)
// function_index=5
void OWN_create_class_static(int flag)
{
// splicer begin function.create_class_static
    createClassStatic(flag);
    return;
// splicer end function.create_class_static
}

// Class1 * getClassStatic()
// function_index=6
OWN_class1 OWN_get_class_static()
{
// splicer begin function.get_class_static
    Class1 * SHCXX_rv = getClassStatic();
    OWN_class1 SHC_rv;
    SHC_rv.addr = static_cast<void *>(SHCXX_rv);
    SHC_rv.idtor = 0;
    return SHC_rv;
// splicer end function.get_class_static
}

// Class1 * getClassNew(int flag +intent(in)+value)
// function_index=7
/**
 * \brief Return pointer to new Class1 instance.
 *
 */
OWN_class1 OWN_get_class_new(int flag)
{
// splicer begin function.get_class_new
    Class1 * SHCXX_rv = getClassNew(flag);
    OWN_class1 SHC_rv;
    SHC_rv.addr = static_cast<void *>(SHCXX_rv);
    SHC_rv.idtor = 0;
    return SHC_rv;
// splicer end function.get_class_new
}

}  // extern "C"
