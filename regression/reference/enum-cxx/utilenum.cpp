// utilenum.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// shroud
#include "typesenum.h"
#include <cstdlib>


#ifdef __cplusplus
extern "C" {
#endif

// Release library allocated memory.
void ENU_SHROUD_memory_destructor(ENU_SHROUD_capsule_data *cap)
{
    cap->addr = nullptr;
    cap->idtor = 0;  // avoid deleting again
}

#ifdef __cplusplus
}
#endif
