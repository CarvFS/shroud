// wrapscope_ns1.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// shroud
#include "wrapscope_ns1.h"

// splicer begin namespace.ns1.CXX_definitions
// splicer end namespace.ns1.CXX_definitions

extern "C" {

// splicer begin namespace.ns1.C_definitions
// splicer end namespace.ns1.C_definitions

// Generated by arg_to_buffer - getter/setter
// ----------------------------------------
// Function:  int * DataPointer_get_items
// Attrs:     +api(cdesc)+deref(pointer)+intent(getter)+struct(ns1_DataPointer)
// Statement: f_getter_native_*_cdesc_pointer
// ----------------------------------------
// Argument:  ns1::DataPointer * SH_this
// Attrs:     +intent(in)+struct(ns1_DataPointer)
// Statement: f_in_struct_*
void SCO_ns1_DataPointer_get_items_bufferify(SCO_datapointer * SH_this,
    SCO_SHROUD_array *SHT_rv_cdesc)
{
    // splicer begin namespace.ns1.function.DataPointer_get_items_bufferify
    ns1::DataPointer * SHCXX_SH_this = static_cast<ns1::DataPointer *>
        (static_cast<void *>(SH_this));
    // skip call c_getter
    SHT_rv_cdesc->cxx.addr  = SHCXX_SH_this->items;
    SHT_rv_cdesc->cxx.idtor = 0;
    SHT_rv_cdesc->addr.base = SHCXX_SH_this->items;
    SHT_rv_cdesc->type = SH_TYPE_INT;
    SHT_rv_cdesc->elem_len = sizeof(int);
    SHT_rv_cdesc->rank = 1;
    SHT_rv_cdesc->shape[0] = SH_this->nitems;
    SHT_rv_cdesc->size = SHT_rv_cdesc->shape[0];
    // splicer end namespace.ns1.function.DataPointer_get_items_bufferify
}

// Generated by getter/setter
// ----------------------------------------
// Function:  void DataPointer_set_items
// Attrs:     +intent(setter)
// Statement: f_setter
// ----------------------------------------
// Argument:  ns1::DataPointer * SH_this
// Attrs:     +intent(inout)+struct(ns1_DataPointer)
// Statement: f_inout_struct_*
// ----------------------------------------
// Argument:  int * val +intent(in)+rank(1)
// Attrs:     +intent(setter)
// Statement: f_setter_native_*
void SCO_ns1_DataPointer_set_items(SCO_datapointer * SH_this, int * val)
{
    // splicer begin namespace.ns1.function.DataPointer_set_items
    ns1::DataPointer * SHCXX_SH_this = static_cast<ns1::DataPointer *>
        (static_cast<void *>(SH_this));
    // skip call c_setter
    SHCXX_SH_this->items = val;
    // splicer end namespace.ns1.function.DataPointer_set_items
}

}  // extern "C"
