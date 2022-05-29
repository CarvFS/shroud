// wrapscope_ns2.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2022, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// shroud
#include "wrapscope_ns2.h"

// splicer begin namespace.ns2.CXX_definitions
// splicer end namespace.ns2.CXX_definitions

extern "C" {

// splicer begin namespace.ns2.C_definitions
// splicer end namespace.ns2.C_definitions

// ----------------------------------------
// Function:  int * DataPointer_get_items
// Attrs:     +api(cdesc)+deref(pointer)+intent(getter)+struct(ns2_DataPointer)
// Requested: c_getter_native_*_cdesc_pointer
// Match:     c_getter_native_*_cdesc
// ----------------------------------------
// Argument:  ns2::DataPointer * SH_this
// Attrs:     +intent(in)
// Requested: c_in_struct_*
// Match:     c_in_struct
void SCO_ns2_data_pointer_get_items_bufferify(SCO_datapointer * SH_this,
    SCO_SHROUD_array *SHT_rv_cdesc)
{
    // splicer begin namespace.ns2.function.data_pointer_get_items_bufferify
    ns2::DataPointer * SHCXX_SH_this = static_cast<ns2::DataPointer *>
        (static_cast<void *>(SH_this));
    // skip call c_getter
    SHT_rv_cdesc->cxx.addr  = SH_this->items;
    SHT_rv_cdesc->cxx.idtor = 0;
    SHT_rv_cdesc->addr.base = SH_this->items;
    SHT_rv_cdesc->type = SH_TYPE_INT;
    SHT_rv_cdesc->elem_len = sizeof(int);
    SHT_rv_cdesc->rank = 1;
    SHT_rv_cdesc->shape[0] = SH_this->nitems;
    SHT_rv_cdesc->size = SHT_rv_cdesc->shape[0];
    // splicer end namespace.ns2.function.data_pointer_get_items_bufferify
}

// ----------------------------------------
// Function:  void DataPointer_set_items
// Attrs:     +intent(setter)
// Exact:     c_setter
// ----------------------------------------
// Argument:  ns2::DataPointer * SH_this
// Attrs:     +intent(in)
// Requested: c_in_struct_*
// Match:     c_in_struct
// ----------------------------------------
// Argument:  int * val +intent(in)+rank(1)
// Attrs:     +intent(setter)
// Exact:     c_setter_native_*
void SCO_ns2_data_pointer_set_items(SCO_datapointer * SH_this,
    int * val)
{
    // splicer begin namespace.ns2.function.data_pointer_set_items
    ns2::DataPointer * SHCXX_SH_this = static_cast<ns2::DataPointer *>
        (static_cast<void *>(SH_this));
    // skip call c_setter
    SH_this->items = val;
    // splicer end namespace.ns2.function.data_pointer_set_items
}

}  // extern "C"
