// wrapClibrary.c
// This is generated code, do not edit
// #######################################################################
// Copyright (c) 2017-2019, Lawrence Livermore National Security, LLC.
//
// Produced at the Lawrence Livermore National Laboratory
//
// LLNL-CODE-738041.
//
// All rights reserved.
//
// This file is part of Shroud.
//
// For details about use and distribution, please read LICENSE.
//
// #######################################################################
#include "wrapClibrary.h"
#include <stdlib.h>
#include <string.h>
#include "clibrary.h"
#include "typesClibrary.h"


// helper function
// blank fill dest starting at trailing NULL.
static void ShroudStrBlankFill(char *dest, int ndest)
{
   int nm = strlen(dest);
   if(ndest > nm) memset(dest+nm,' ',ndest-nm);
}

// helper function
// Copy src into dest, blank fill to ndest characters
// Truncate if dest is too short.
// dest will not be NULL terminated.
static void ShroudStrCopy(char *dest, int ndest, const char *src, int nsrc)
{
   if (src == NULL) {
     memset(dest,' ',ndest); // convert NULL pointer to blank filled string
   } else {
     if (nsrc < 0) nsrc = strlen(src);
     int nm = nsrc < ndest ? nsrc : ndest;
     memcpy(dest,src,nm);
     if(ndest > nm) memset(dest+nm,' ',ndest-nm); // blank fill
   }
}
// splicer begin C_definitions
// splicer end C_definitions

// void Function4a(const char * arg1 +intent(in), const char * arg2 +intent(in), char * SHF_rv +intent(out)+len(NSHF_rv)) +len(30)
void CLI_function4a_bufferify(const char * arg1, const char * arg2,
    char * SHF_rv, int NSHF_rv)
{
// splicer begin function.function4a_bufferify
    char * SHC_rv = Function4a(arg1, arg2);
    ShroudStrCopy(SHF_rv, NSHF_rv, SHC_rv, -1);
    return;
// splicer end function.function4a_bufferify
}

// void returnOneName(char * name1 +charlen(MAXNAME)+intent(out)+len(Nname1))
/**
 * \brief Test charlen attribute
 *
 * Each argument is assumed to be at least MAXNAME long.
 * This define is provided by the user.
 * The function will copy into the user provided buffer.
 */
void CLI_return_one_name_bufferify(char * name1, int Nname1)
{
// splicer begin function.return_one_name_bufferify
    returnOneName(name1);
    ShroudStrBlankFill(name1, Nname1);
    return;
// splicer end function.return_one_name_bufferify
}

// void returnTwoNames(char * name1 +charlen(MAXNAME)+intent(out)+len(Nname1), char * name2 +charlen(MAXNAME)+intent(out)+len(Nname2))
/**
 * \brief Test charlen attribute
 *
 * Each argument is assumed to be at least MAXNAME long.
 * This define is provided by the user.
 * The function will copy into the user provided buffer.
 */
void CLI_return_two_names_bufferify(char * name1, int Nname1,
    char * name2, int Nname2)
{
// splicer begin function.return_two_names_bufferify
    returnTwoNames(name1, name2);
    ShroudStrBlankFill(name1, Nname1);
    ShroudStrBlankFill(name2, Nname2);
    return;
// splicer end function.return_two_names_bufferify
}

// void bindC2(char * outbuf +intent(out)+len(Noutbuf))
/**
 * \brief Rename Fortran name for interface only function
 *
 * This creates a Fortran bufferify function and an interface.
 */
void CLI_bind_c2_bufferify(char * outbuf, int Noutbuf)
{
// splicer begin function.bind_c2_bufferify
    bindC2(outbuf);
    ShroudStrBlankFill(outbuf, Noutbuf);
    return;
// splicer end function.bind_c2_bufferify
}

// int passAssumedTypeBuf(void * arg +assumedtype+intent(in), char * outbuf +intent(out)+len(Noutbuf))
/**
 * \brief Test assumed-type
 *
 * A bufferify function is created.
 * Should only be call with an C_INT argument, and will
 * return the value passed in.
 */
int CLI_pass_assumed_type_buf_bufferify(void * arg, char * outbuf,
    int Noutbuf)
{
// splicer begin function.pass_assumed_type_buf_bufferify
    int SHC_rv = passAssumedTypeBuf(arg, outbuf);
    ShroudStrBlankFill(outbuf, Noutbuf);
    return SHC_rv;
// splicer end function.pass_assumed_type_buf_bufferify
}

// void callback3(const char * type +intent(in), void * in +assumedtype+intent(in), void ( * incr)(int *) +external+intent(in)+value, char * outbuf +intent(out)+len(Noutbuf))
/**
 * \brief Test function pointer
 *
 * A bufferify function will be created.
 */
void CLI_callback3_bufferify(const char * type, void * in,
    void ( * incr)(int *), char * outbuf, int Noutbuf)
{
// splicer begin function.callback3_bufferify
    callback3(type, in, incr, outbuf);
    ShroudStrBlankFill(outbuf, Noutbuf);
    return;
// splicer end function.callback3_bufferify
}

// int passStruct2(Cstruct1 * s1 +intent(in), char * outbuf +intent(out)+len(Noutbuf))
/**
 * Pass name argument which will build a bufferify function.
 */
int CLI_pass_struct2_bufferify(Cstruct1 * s1, char * outbuf,
    int Noutbuf)
{
// splicer begin function.pass_struct2_bufferify
    int SHC_rv = passStruct2(s1, outbuf);
    ShroudStrBlankFill(outbuf, Noutbuf);
    return SHC_rv;
// splicer end function.pass_struct2_bufferify
}

// Cstruct1 * returnStructPtr2(int ifield +intent(in)+value, char * outbuf +intent(out)+len(Noutbuf))
/**
 * \brief Return a pointer to a struct
 *
 * Generates a bufferify C wrapper function.
 */
Cstruct1 * CLI_return_struct_ptr2_bufferify(int ifield, char * outbuf,
    int Noutbuf)
{
// splicer begin function.return_struct_ptr2_bufferify
    Cstruct1 * SHC_rv = returnStructPtr2(ifield, outbuf);
    ShroudStrBlankFill(outbuf, Noutbuf);
    return SHC_rv;
// splicer end function.return_struct_ptr2_bufferify
}

// Release C++ allocated memory.
void CLI_SHROUD_memory_destructor(CLI_SHROUD_capsule_data *cap)
{
    cap->addr = NULL;
    cap->idtor = 0;  // avoid deleting again
}
