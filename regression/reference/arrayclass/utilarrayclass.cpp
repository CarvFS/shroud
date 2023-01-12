// utilarrayclass.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// typemap
#include "arrayclass.hpp"
// shroud
#include "typesarrayclass.h"


#ifdef __cplusplus
extern "C" {
#endif

// Release library allocated memory.
void ARR_SHROUD_memory_destructor(ARR_SHROUD_capsule_data *cap)
{
    void *ptr = cap->addr;
    switch (cap->idtor) {
    case 0:   // --none--
    {
        // Nothing to delete
        break;
    }
    case 1:   // ArrayWrapper
    {
        ArrayWrapper *cxx_ptr = reinterpret_cast<ArrayWrapper *>(ptr);
        delete cxx_ptr;
        break;
    }
    default:
    {
        // Unexpected case in destructor
        break;
    }
    }
    cap->addr = nullptr;
    cap->idtor = 0;  // avoid deleting again
}

#ifdef __cplusplus
}
#endif
