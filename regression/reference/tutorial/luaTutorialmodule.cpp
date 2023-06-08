// luaTutorialmodule.cpp
// This file is generated by Shroud nowrite-version. Do not edit.
// Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
// other Shroud Project Developers.
// See the top-level COPYRIGHT file for details.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//

// cxx_header
#include "tutorial.hpp"
// shroud
#include "luaTutorialmodule.hpp"
#ifdef __cplusplus
extern "C" {
#endif
#include "lauxlib.h"
#ifdef __cplusplus
}
#endif

// splicer begin include
// splicer end include
// splicer begin C_definition
// splicer end C_definition

// void NoReturnNoArguments(void)
// ----------------------------------------
// Function:  void NoReturnNoArguments
// Attrs:     +intent(subroutine)
// Exact:     lua_subroutine
static int l_NoReturnNoArguments(lua_State *)
{
    // splicer begin function.NoReturnNoArguments
    tutorial::NoReturnNoArguments();
    return 0;
    // splicer end function.NoReturnNoArguments
}

// double PassByValue(double arg1 +value, int arg2 +value)
// ----------------------------------------
// Function:  double PassByValue
// Attrs:     +intent(function)
// Exact:     lua_function_native_scalar
// ----------------------------------------
// Argument:  double arg1 +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Argument:  int arg2 +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
static int l_PassByValue(lua_State *L)
{
    // splicer begin function.PassByValue
    double arg1 = lua_tonumber(L, 1);
    int arg2 = lua_tointeger(L, 2);
    double SHCXX_rv = tutorial::PassByValue(arg1, arg2);
    lua_pushnumber(L, SHCXX_rv);
    return 1;
    // splicer end function.PassByValue
}

// const std::string ConcatenateStrings(const std::string & arg1, const std::string & arg2)
// ----------------------------------------
// Function:  const std::string ConcatenateStrings
// Attrs:     +deref(allocatable)+intent(function)
// Exact:     lua_function_string_scalar
// ----------------------------------------
// Argument:  const std::string & arg1
// Attrs:     +intent(in)
// Exact:     lua_in_string_&
// ----------------------------------------
// Argument:  const std::string & arg2
// Attrs:     +intent(in)
// Exact:     lua_in_string_&
/**
 * Note that since a reference is returned, no intermediate string
 * is allocated.  It is assumed +owner(library).
 */
static int l_ConcatenateStrings(lua_State *L)
{
    // splicer begin function.ConcatenateStrings
    const char * arg1 = lua_tostring(L, 1);
    const char * arg2 = lua_tostring(L, 2);
    const std::string SHCXX_rv = tutorial::ConcatenateStrings(arg1,
        arg2);
    lua_pushstring(L, SHCXX_rv.c_str());
    return 1;
    // splicer end function.ConcatenateStrings
}

// double UseDefaultArguments(double arg1=3.1415 +value, bool arg2=true +value)
// ----------------------------------------
// Function:  double UseDefaultArguments
// Attrs:     +intent(function)
// Exact:     lua_function_native_scalar
// ----------------------------------------
// Function:  double UseDefaultArguments
// Attrs:     +intent(function)
// Exact:     lua_function_native_scalar
// ----------------------------------------
// Argument:  double arg1=3.1415 +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Function:  double UseDefaultArguments
// Attrs:     +intent(function)
// Exact:     lua_function_native_scalar
// ----------------------------------------
// Argument:  double arg1=3.1415 +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Argument:  bool arg2=true +value
// Attrs:     +intent(in)
// Exact:     lua_in_bool_scalar
static int l_UseDefaultArguments(lua_State *L)
{
    // splicer begin function.UseDefaultArguments
    int SH_nresult = 0;
    int SH_nargs = lua_gettop(L);
    int SH_itype1 = lua_type(L, 1);
    int SH_itype2 = lua_type(L, 2);
    switch (SH_nargs) {
    case 0:
        {
            double SHCXX_rv = tutorial::UseDefaultArguments();
            lua_pushnumber(L, SHCXX_rv);
            SH_nresult = 1;
        }
        break;
    case 1:
        if (SH_itype1 == LUA_TNUMBER) {
            double arg1 = lua_tonumber(L, 1);
            double SHCXX_rv = tutorial::UseDefaultArguments(arg1);
            lua_pushnumber(L, SHCXX_rv);
            SH_nresult = 1;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    case 2:
        if (SH_itype1 == LUA_TNUMBER &&
            SH_itype2 == LUA_TBOOLEAN) {
            double arg1 = lua_tonumber(L, 1);
            bool arg2 = lua_toboolean(L, 2);
            double SHCXX_rv = tutorial::UseDefaultArguments(arg1, arg2);
            lua_pushnumber(L, SHCXX_rv);
            SH_nresult = 1;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    default:
        luaL_error(L, "error with arguments");
        break;
    }
    return SH_nresult;
    // splicer end function.UseDefaultArguments
}

// void OverloadedFunction(const std::string & name)
// void OverloadedFunction(int indx +value)
// ----------------------------------------
// Function:  void OverloadedFunction
// Attrs:     +intent(subroutine)
// Exact:     lua_subroutine
// ----------------------------------------
// Argument:  const std::string & name
// Attrs:     +intent(in)
// Exact:     lua_in_string_&
// ----------------------------------------
// Function:  void OverloadedFunction
// Attrs:     +intent(subroutine)
// Exact:     lua_subroutine
// ----------------------------------------
// Argument:  int indx +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
static int l_OverloadedFunction(lua_State *L)
{
    // splicer begin function.OverloadedFunction
    int SH_nresult = 0;
    int SH_nargs = lua_gettop(L);
    int SH_itype1 = lua_type(L, 1);
    switch (SH_nargs) {
    case 1:
        if (SH_itype1 == LUA_TSTRING) {
            const char * name = lua_tostring(L, 1);
            tutorial::OverloadedFunction(name);
            SH_nresult = 0;
        }
        else if (SH_itype1 == LUA_TNUMBER) {
            int indx = lua_tointeger(L, 1);
            tutorial::OverloadedFunction(indx);
            SH_nresult = 0;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    default:
        luaL_error(L, "error with arguments");
        break;
    }
    return SH_nresult;
    // splicer end function.OverloadedFunction
}

// void TemplateArgument(int arg +value)
// void TemplateArgument(double arg +value)
// ----------------------------------------
// Function:  void TemplateArgument
// Attrs:     +intent(subroutine)
// Exact:     lua_subroutine
// ----------------------------------------
// Argument:  int arg +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Function:  void TemplateArgument
// Attrs:     +intent(subroutine)
// Exact:     lua_subroutine
// ----------------------------------------
// Argument:  double arg +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
static int l_TemplateArgument(lua_State *L)
{
    // splicer begin function.TemplateArgument
    int SH_nresult = 0;
    int SH_nargs = lua_gettop(L);
    int SH_itype1 = lua_type(L, 1);
    switch (SH_nargs) {
    case 1:
        if (SH_itype1 == LUA_TNUMBER) {
            int arg = lua_tointeger(L, 1);
            tutorial::TemplateArgument(arg);
            SH_nresult = 0;
        }
        else if (SH_itype1 == LUA_TNUMBER) {
            double arg = lua_tonumber(L, 1);
            tutorial::TemplateArgument(arg);
            SH_nresult = 0;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    default:
        luaL_error(L, "error with arguments");
        break;
    }
    return SH_nresult;
    // splicer end function.TemplateArgument
}

// void FortranGenericOverloaded(void)
// void FortranGenericOverloaded(const std::string & name, double arg2 +value)
// ----------------------------------------
// Function:  void FortranGenericOverloaded
// Attrs:     +intent(subroutine)
// Exact:     lua_subroutine
// ----------------------------------------
// Function:  void FortranGenericOverloaded
// Attrs:     +intent(subroutine)
// Exact:     lua_subroutine
// ----------------------------------------
// Argument:  const std::string & name
// Attrs:     +intent(in)
// Exact:     lua_in_string_&
// ----------------------------------------
// Argument:  double arg2 +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
static int l_FortranGenericOverloaded(lua_State *L)
{
    // splicer begin function.FortranGenericOverloaded
    int SH_nresult = 0;
    int SH_nargs = lua_gettop(L);
    int SH_itype1 = lua_type(L, 1);
    int SH_itype2 = lua_type(L, 2);
    switch (SH_nargs) {
    case 0:
        {
            tutorial::FortranGenericOverloaded();
            SH_nresult = 0;
        }
        break;
    case 2:
        if (SH_itype1 == LUA_TSTRING &&
            SH_itype2 == LUA_TNUMBER) {
            const char * name = lua_tostring(L, 1);
            double arg2 = lua_tonumber(L, 2);
            tutorial::FortranGenericOverloaded(name, arg2);
            SH_nresult = 0;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    default:
        luaL_error(L, "error with arguments");
        break;
    }
    return SH_nresult;
    // splicer end function.FortranGenericOverloaded
}

// int UseDefaultOverload(int num +value, int offset=0 +value, int stride=1 +value)
// int UseDefaultOverload(double type +value, int num +value, int offset=0 +value, int stride=1 +value)
// ----------------------------------------
// Function:  int UseDefaultOverload
// Attrs:     +intent(function)
// Exact:     lua_function_native_scalar
// ----------------------------------------
// Argument:  int num +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Function:  int UseDefaultOverload
// Attrs:     +intent(function)
// Exact:     lua_function_native_scalar
// ----------------------------------------
// Argument:  int num +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Argument:  int offset=0 +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Function:  int UseDefaultOverload
// Attrs:     +intent(function)
// Exact:     lua_function_native_scalar
// ----------------------------------------
// Argument:  double type +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Argument:  int num +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Function:  int UseDefaultOverload
// Attrs:     +intent(function)
// Exact:     lua_function_native_scalar
// ----------------------------------------
// Argument:  int num +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Argument:  int offset=0 +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Argument:  int stride=1 +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Function:  int UseDefaultOverload
// Attrs:     +intent(function)
// Exact:     lua_function_native_scalar
// ----------------------------------------
// Argument:  double type +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Argument:  int num +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Argument:  int offset=0 +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Function:  int UseDefaultOverload
// Attrs:     +intent(function)
// Exact:     lua_function_native_scalar
// ----------------------------------------
// Argument:  double type +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Argument:  int num +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Argument:  int offset=0 +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
// ----------------------------------------
// Argument:  int stride=1 +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
static int l_UseDefaultOverload(lua_State *L)
{
    // splicer begin function.UseDefaultOverload
    int SH_nresult = 0;
    int SH_nargs = lua_gettop(L);
    int SH_itype1 = lua_type(L, 1);
    int SH_itype2 = lua_type(L, 2);
    int SH_itype3 = lua_type(L, 3);
    int SH_itype4 = lua_type(L, 4);
    switch (SH_nargs) {
    case 1:
        if (SH_itype1 == LUA_TNUMBER) {
            int num = lua_tointeger(L, 1);
            int SHCXX_rv = tutorial::UseDefaultOverload(num);
            lua_pushinteger(L, SHCXX_rv);
            SH_nresult = 1;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    case 2:
        if (SH_itype1 == LUA_TNUMBER &&
            SH_itype2 == LUA_TNUMBER) {
            int num = lua_tointeger(L, 1);
            int offset = lua_tointeger(L, 2);
            int SHCXX_rv = tutorial::UseDefaultOverload(num, offset);
            lua_pushinteger(L, SHCXX_rv);
            SH_nresult = 1;
        }
        else if (SH_itype1 == LUA_TNUMBER &&
            SH_itype2 == LUA_TNUMBER) {
            double type = lua_tonumber(L, 1);
            int num = lua_tointeger(L, 2);
            int SHCXX_rv = tutorial::UseDefaultOverload(type, num);
            lua_pushinteger(L, SHCXX_rv);
            SH_nresult = 1;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    case 3:
        if (SH_itype1 == LUA_TNUMBER &&
            SH_itype2 == LUA_TNUMBER &&
            SH_itype3 == LUA_TNUMBER) {
            int num = lua_tointeger(L, 1);
            int offset = lua_tointeger(L, 2);
            int stride = lua_tointeger(L, 3);
            int SHCXX_rv = tutorial::UseDefaultOverload(num, offset,
                stride);
            lua_pushinteger(L, SHCXX_rv);
            SH_nresult = 1;
        }
        else if (SH_itype1 == LUA_TNUMBER &&
            SH_itype2 == LUA_TNUMBER &&
            SH_itype3 == LUA_TNUMBER) {
            double type = lua_tonumber(L, 1);
            int num = lua_tointeger(L, 2);
            int offset = lua_tointeger(L, 3);
            int SHCXX_rv = tutorial::UseDefaultOverload(type, num,
                offset);
            lua_pushinteger(L, SHCXX_rv);
            SH_nresult = 1;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    case 4:
        if (SH_itype1 == LUA_TNUMBER &&
            SH_itype2 == LUA_TNUMBER &&
            SH_itype3 == LUA_TNUMBER &&
            SH_itype4 == LUA_TNUMBER) {
            double type = lua_tonumber(L, 1);
            int num = lua_tointeger(L, 2);
            int offset = lua_tointeger(L, 3);
            int stride = lua_tointeger(L, 4);
            int SHCXX_rv = tutorial::UseDefaultOverload(type, num,
                offset, stride);
            lua_pushinteger(L, SHCXX_rv);
            SH_nresult = 1;
        }
        else {
            luaL_error(L, "error with arguments");
        }
        break;
    default:
        luaL_error(L, "error with arguments");
        break;
    }
    return SH_nresult;
    // splicer end function.UseDefaultOverload
}

// TypeID typefunc(TypeID arg +value)
// ----------------------------------------
// Function:  TypeID typefunc
// Attrs:     +intent(function)
// Exact:     lua_function_native_scalar
// ----------------------------------------
// Argument:  TypeID arg +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
static int l_typefunc(lua_State *L)
{
    // splicer begin function.typefunc
    tutorial::TypeID arg = lua_tointeger(L, 1);
    tutorial::TypeID SHCXX_rv = tutorial::typefunc(arg);
    lua_pushinteger(L, SHCXX_rv);
    return 1;
    // splicer end function.typefunc
}

// EnumTypeID enumfunc(EnumTypeID arg +value)
// ----------------------------------------
// Function:  EnumTypeID enumfunc
// Attrs:     +intent(function)
// Exact:     lua_function_native_scalar
// ----------------------------------------
// Argument:  EnumTypeID arg +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
static int l_enumfunc(lua_State *L)
{
    // splicer begin function.enumfunc
    tutorial::EnumTypeID arg =
        static_cast<tutorial::EnumTypeID>(lua_tointeger(L, 1));
    tutorial::EnumTypeID SHCXX_rv = tutorial::enumfunc(arg);
    lua_pushinteger(L, static_cast<int>(SHCXX_rv));
    return 1;
    // splicer end function.enumfunc
}

// Color colorfunc(Color arg +value)
// ----------------------------------------
// Function:  Color colorfunc
// Attrs:     +intent(function)
// Exact:     lua_function_native_scalar
// ----------------------------------------
// Argument:  Color arg +value
// Attrs:     +intent(in)
// Exact:     lua_in_native_scalar
static int l_colorfunc(lua_State *L)
{
    // splicer begin function.colorfunc
    tutorial::Color arg =
        static_cast<tutorial::Color>(lua_tointeger(L, 1));
    tutorial::Color SHCXX_rv = tutorial::colorfunc(arg);
    lua_pushinteger(L, static_cast<int>(SHCXX_rv));
    return 1;
    // splicer end function.colorfunc
}

// const std::string & LastFunctionCalled(void) +len(30)
// ----------------------------------------
// Function:  const std::string & LastFunctionCalled +len(30)
// Attrs:     +deref(copy)+intent(function)
// Exact:     lua_function_string_&
static int l_LastFunctionCalled(lua_State *L)
{
    // splicer begin function.LastFunctionCalled
    const std::string & SHCXX_rv = tutorial::LastFunctionCalled();
    lua_pushstring(L, SHCXX_rv.c_str());
    return 1;
    // splicer end function.LastFunctionCalled
}

// splicer begin additional_functions
// splicer end additional_functions

static const struct luaL_Reg l_Tutorial_Reg [] = {
    {"NoReturnNoArguments", l_NoReturnNoArguments},
    {"PassByValue", l_PassByValue},
    {"ConcatenateStrings", l_ConcatenateStrings},
    {"UseDefaultArguments", l_UseDefaultArguments},
    {"OverloadedFunction", l_OverloadedFunction},
    {"TemplateArgument", l_TemplateArgument},
    {"FortranGenericOverloaded", l_FortranGenericOverloaded},
    {"UseDefaultOverload", l_UseDefaultOverload},
    {"typefunc", l_typefunc},
    {"enumfunc", l_enumfunc},
    {"colorfunc", l_colorfunc},
    {"LastFunctionCalled", l_LastFunctionCalled},
    // splicer begin register
    // splicer end register
    {NULL, NULL}   /*sentinel */
};

#ifdef __cplusplus
extern "C" {
#endif
int luaopen_tutorial(lua_State *L) {

#if LUA_VERSION_NUM < 502
    luaL_register(L, "tutorial", l_Tutorial_Reg);
#else
    luaL_newlib(L, l_Tutorial_Reg);
#endif
    return 1;
}
#ifdef __cplusplus
}
#endif
