! wrapfcxxlibrary.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapfcxxlibrary.f
!! \brief Shroud generated wrapper for cxxlibrary library
!<
! splicer begin file_top
! splicer end file_top
module cxxlibrary_mod
    use iso_c_binding, only : C_INT, C_PTR
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top


    type, bind(C) :: nested
        integer(C_INT) :: sublevels
        type(C_PTR) :: parent
        type(C_PTR) :: child
        type(C_PTR) :: name
    end type nested

    interface

        ! Generated by has_default_arg
        ! ----------------------------------------
        ! Function:  bool defaultPtrIsNULL
        ! Attrs:     +intent(function)
        ! Statement: f_function_bool_scalar
        function c_default_ptr_is_null_0() &
                result(SHT_rv) &
                bind(C, name="CXX_defaultPtrIsNULL_0")
            use iso_c_binding, only : C_BOOL
            implicit none
            logical(C_BOOL) :: SHT_rv
        end function c_default_ptr_is_null_0

        ! ----------------------------------------
        ! Function:  bool defaultPtrIsNULL
        ! Attrs:     +intent(function)
        ! Statement: f_function_bool_scalar
        ! ----------------------------------------
        ! Argument:  double * data=nullptr +intent(IN)+rank(1)
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_*
        function c_default_ptr_is_null_1(data) &
                result(SHT_rv) &
                bind(C, name="CXX_defaultPtrIsNULL_1")
            use iso_c_binding, only : C_BOOL, C_DOUBLE
            implicit none
            real(C_DOUBLE), intent(IN) :: data(*)
            logical(C_BOOL) :: SHT_rv
        end function c_default_ptr_is_null_1

        ! Generated by has_default_arg
        ! ----------------------------------------
        ! Function:  void defaultArgsInOut
        ! Attrs:     +intent(subroutine)
        ! Statement: f_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  int in1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        ! ----------------------------------------
        ! Argument:  int * out1 +intent(out)
        ! Attrs:     +intent(out)
        ! Statement: f_out_native_*
        ! ----------------------------------------
        ! Argument:  int * out2 +intent(out)
        ! Attrs:     +intent(out)
        ! Statement: f_out_native_*
        subroutine c_default_args_in_out_0(in1, out1, out2) &
                bind(C, name="CXX_defaultArgsInOut_0")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT), value, intent(IN) :: in1
            integer(C_INT), intent(OUT) :: out1
            integer(C_INT), intent(OUT) :: out2
        end subroutine c_default_args_in_out_0

        ! ----------------------------------------
        ! Function:  void defaultArgsInOut
        ! Attrs:     +intent(subroutine)
        ! Statement: f_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  int in1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        ! ----------------------------------------
        ! Argument:  int * out1 +intent(out)
        ! Attrs:     +intent(out)
        ! Statement: f_out_native_*
        ! ----------------------------------------
        ! Argument:  int * out2 +intent(out)
        ! Attrs:     +intent(out)
        ! Statement: f_out_native_*
        ! ----------------------------------------
        ! Argument:  bool flag=false +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_bool_scalar
        subroutine c_default_args_in_out_1(in1, out1, out2, flag) &
                bind(C, name="CXX_defaultArgsInOut_1")
            use iso_c_binding, only : C_BOOL, C_INT
            implicit none
            integer(C_INT), value, intent(IN) :: in1
            integer(C_INT), intent(OUT) :: out1
            integer(C_INT), intent(OUT) :: out2
            logical(C_BOOL), value, intent(IN) :: flag
        end subroutine c_default_args_in_out_1

        ! ----------------------------------------
        ! Function:  const std::string & getGroupName +len(30)
        ! Attrs:     +deref(copy)+intent(function)
        ! Statement: f_function_string_&_copy
        ! ----------------------------------------
        ! Argument:  long idx +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function c_get_group_name(idx) &
                result(SHT_rv) &
                bind(C, name="CXX_getGroupName")
            use iso_c_binding, only : C_LONG, C_PTR
            implicit none
            integer(C_LONG), value, intent(IN) :: idx
            type(C_PTR) SHT_rv
        end function c_get_group_name

        ! Generated by arg_to_buffer
        ! ----------------------------------------
        ! Function:  const std::string & getGroupName +len(30)
        ! Attrs:     +api(buf)+deref(copy)+intent(function)
        ! Statement: f_function_string_&_buf_copy
        ! ----------------------------------------
        ! Argument:  int32_t idx +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        subroutine c_get_group_name_int32_t_bufferify(idx, SHT_rv, &
                SHT_rv_len) &
                bind(C, name="CXX_getGroupName_int32_t_bufferify")
            use iso_c_binding, only : C_CHAR, C_INT, C_INT32_T
            implicit none
            integer(C_INT32_T), value, intent(IN) :: idx
            character(kind=C_CHAR), intent(OUT) :: SHT_rv(*)
            integer(C_INT), value, intent(IN) :: SHT_rv_len
        end subroutine c_get_group_name_int32_t_bufferify

        ! Generated by arg_to_buffer
        ! ----------------------------------------
        ! Function:  const std::string & getGroupName +len(30)
        ! Attrs:     +api(buf)+deref(copy)+intent(function)
        ! Statement: f_function_string_&_buf_copy
        ! ----------------------------------------
        ! Argument:  int64_t idx +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        subroutine c_get_group_name_int64_t_bufferify(idx, SHT_rv, &
                SHT_rv_len) &
                bind(C, name="CXX_getGroupName_int64_t_bufferify")
            use iso_c_binding, only : C_CHAR, C_INT, C_INT64_T
            implicit none
            integer(C_INT64_T), value, intent(IN) :: idx
            character(kind=C_CHAR), intent(OUT) :: SHT_rv(*)
            integer(C_INT), value, intent(IN) :: SHT_rv_len
        end subroutine c_get_group_name_int64_t_bufferify
    end interface

    interface default_args_in_out
        module procedure default_args_in_out_0
        module procedure default_args_in_out_1
    end interface default_args_in_out

    interface default_ptr_is_null
        module procedure default_ptr_is_null_0
        module procedure default_ptr_is_null_1
    end interface default_ptr_is_null

    interface get_group_name
        module procedure get_group_name_int32_t
        module procedure get_group_name_int64_t
    end interface get_group_name

    ! splicer begin additional_declarations
    ! splicer end additional_declarations

contains

    ! Generated by has_default_arg
    ! ----------------------------------------
    ! Function:  bool defaultPtrIsNULL
    ! Attrs:     +intent(function)
    ! Statement: f_function_bool_scalar
    function default_ptr_is_null_0() &
            result(SHT_rv)
        use iso_c_binding, only : C_BOOL
        logical :: SHT_rv
        ! splicer begin function.default_ptr_is_null_0
        SHT_rv = c_default_ptr_is_null_0()
        ! splicer end function.default_ptr_is_null_0
    end function default_ptr_is_null_0

    ! ----------------------------------------
    ! Function:  bool defaultPtrIsNULL
    ! Attrs:     +intent(function)
    ! Statement: f_function_bool_scalar
    ! ----------------------------------------
    ! Argument:  double * data=nullptr +intent(IN)+rank(1)
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_*
    function default_ptr_is_null_1(data) &
            result(SHT_rv)
        use iso_c_binding, only : C_BOOL, C_DOUBLE
        real(C_DOUBLE), intent(IN) :: data(:)
        logical :: SHT_rv
        ! splicer begin function.default_ptr_is_null_1
        SHT_rv = c_default_ptr_is_null_1(data)
        ! splicer end function.default_ptr_is_null_1
    end function default_ptr_is_null_1

    ! Generated by has_default_arg
    ! ----------------------------------------
    ! Function:  void defaultArgsInOut
    ! Attrs:     +intent(subroutine)
    ! Statement: f_subroutine
    ! ----------------------------------------
    ! Argument:  int in1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    ! ----------------------------------------
    ! Argument:  int * out1 +intent(out)
    ! Attrs:     +intent(out)
    ! Statement: f_out_native_*
    ! ----------------------------------------
    ! Argument:  int * out2 +intent(out)
    ! Attrs:     +intent(out)
    ! Statement: f_out_native_*
    subroutine default_args_in_out_0(in1, out1, out2)
        use iso_c_binding, only : C_INT
        integer(C_INT), value, intent(IN) :: in1
        integer(C_INT), intent(OUT) :: out1
        integer(C_INT), intent(OUT) :: out2
        ! splicer begin function.default_args_in_out_0
        call c_default_args_in_out_0(in1, out1, out2)
        ! splicer end function.default_args_in_out_0
    end subroutine default_args_in_out_0

    ! ----------------------------------------
    ! Function:  void defaultArgsInOut
    ! Attrs:     +intent(subroutine)
    ! Statement: f_subroutine
    ! ----------------------------------------
    ! Argument:  int in1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    ! ----------------------------------------
    ! Argument:  int * out1 +intent(out)
    ! Attrs:     +intent(out)
    ! Statement: f_out_native_*
    ! ----------------------------------------
    ! Argument:  int * out2 +intent(out)
    ! Attrs:     +intent(out)
    ! Statement: f_out_native_*
    ! ----------------------------------------
    ! Argument:  bool flag=false +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_bool_scalar
    subroutine default_args_in_out_1(in1, out1, out2, flag)
        use iso_c_binding, only : C_BOOL, C_INT
        integer(C_INT), value, intent(IN) :: in1
        integer(C_INT), intent(OUT) :: out1
        integer(C_INT), intent(OUT) :: out2
        logical, value, intent(IN) :: flag
        ! splicer begin function.default_args_in_out_1
        logical(C_BOOL) :: SHT_flag_cxx
        SHT_flag_cxx = flag  ! coerce to C_BOOL
        call c_default_args_in_out_1(in1, out1, out2, SHT_flag_cxx)
        ! splicer end function.default_args_in_out_1
    end subroutine default_args_in_out_1

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  const std::string & getGroupName +len(30)
    ! Attrs:     +api(buf)+deref(copy)+intent(function)
    ! Statement: f_function_string_&_buf_copy
    ! ----------------------------------------
    ! Argument:  int32_t idx +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    !>
    !! \brief String reference function with scalar generic args
    !!
    !<
    function get_group_name_int32_t(idx) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT, C_INT32_T
        integer(C_INT32_T), value, intent(IN) :: idx
        character(len=30) :: SHT_rv
        ! splicer begin function.get_group_name_int32_t
        integer(C_INT) SHT_rv_len
        SHT_rv_len = len(SHT_rv, kind=C_INT)
        call c_get_group_name_int32_t_bufferify(idx, SHT_rv, SHT_rv_len)
        ! splicer end function.get_group_name_int32_t
    end function get_group_name_int32_t

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  const std::string & getGroupName +len(30)
    ! Attrs:     +api(buf)+deref(copy)+intent(function)
    ! Statement: f_function_string_&_buf_copy
    ! ----------------------------------------
    ! Argument:  int64_t idx +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    !>
    !! \brief String reference function with scalar generic args
    !!
    !<
    function get_group_name_int64_t(idx) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT, C_INT64_T
        integer(C_INT64_T), value, intent(IN) :: idx
        character(len=30) :: SHT_rv
        ! splicer begin function.get_group_name_int64_t
        integer(C_INT) SHT_rv_len
        SHT_rv_len = len(SHT_rv, kind=C_INT)
        call c_get_group_name_int64_t_bufferify(idx, SHT_rv, SHT_rv_len)
        ! splicer end function.get_group_name_int64_t
    end function get_group_name_int64_t

    ! splicer begin additional_functions
    ! splicer end additional_functions

end module cxxlibrary_mod
