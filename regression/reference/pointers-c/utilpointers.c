// utilpointers.c
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// shroud
#include "typespointers.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

// start helper copy_array
// helper copy_array
// Copy std::vector into array c_var(c_var_size).
// Then release std::vector.
// Called from Fortran.
void POI_ShroudCopyArray(POI_SHROUD_array *data, void *c_var, 
    size_t c_var_size)
{
    const void *cxx_var = data->addr.base;
    int n = c_var_size < data->size ? c_var_size : data->size;
    n *= data->elem_len;
    memcpy(c_var, cxx_var, n);
    POI_SHROUD_memory_destructor(&data->cxx); // delete data->cxx.addr
}
// end helper copy_array

// start release allocated memory
// Release library allocated memory.
void POI_SHROUD_memory_destructor(POI_SHROUD_capsule_data *cap)
{
    cap->addr = NULL;
    cap->idtor = 0;  // avoid deleting again
}
// end release allocated memory
