// utilpreprocess.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// shroud
#include "typespreprocess.h"


#ifdef __cplusplus
extern "C" {
#endif

// Release library allocated memory.
void PRE_SHROUD_memory_destructor(PRE_SHROUD_capsule_data *cap)
{
    cap->addr = nullptr;
    cap->idtor = 0;  // avoid deleting again
}

#ifdef __cplusplus
}
#endif
