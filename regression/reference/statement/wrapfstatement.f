! wrapfstatement.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapfstatement.f
!! \brief Shroud generated wrapper for statement library
!<
! splicer begin file_top
! splicer end file_top
module statement_mod
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top

    interface

        ! ----------------------------------------
        ! Function:  int GetNameLength +pure
        ! Attrs:     +intent(function)
        ! Exact:     c_function_native_scalar
        pure function get_name_length() &
                result(SHT_rv) &
                bind(C, name="STMT_GetNameLength")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT) :: SHT_rv
        end function get_name_length

        ! ----------------------------------------
        ! Function:  const string & getNameErrorPattern +len(get_name_length())
        ! Attrs:     +deref(copy)+intent(function)
        ! Exact:     c_function_string_&_copy
        function c_get_name_error_pattern() &
                result(SHT_rv) &
                bind(C, name="STMT_getNameErrorPattern")
            use iso_c_binding, only : C_PTR
            implicit none
            type(C_PTR) SHT_rv
        end function c_get_name_error_pattern

        ! Generated by arg_to_buffer
        ! ----------------------------------------
        ! Function:  const string & getNameErrorPattern +len(get_name_length())
        ! Attrs:     +api(buf)+deref(copy)+intent(function)
        ! Exact:     c_function_string_&_buf_copy
        subroutine c_get_name_error_pattern_bufferify(SHT_rv, &
                SHT_rv_len) &
                bind(C, name="STMT_getNameErrorPattern_bufferify")
            use iso_c_binding, only : C_CHAR, C_INT
            implicit none
            character(kind=C_CHAR), intent(OUT) :: SHT_rv(*)
            integer(C_INT), value, intent(IN) :: SHT_rv_len
        end subroutine c_get_name_error_pattern_bufferify
    end interface

    ! splicer begin additional_declarations
    ! splicer end additional_declarations

contains

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  int GetNameLength +pure
    ! Attrs:     +intent(function)
    ! Exact:     f_function_native_scalar
    ! Attrs:     +intent(function)
    ! Exact:     f_function_native_scalar
    !>
    !! \brief helper function for Fortran to get length of name.
    !!
    !<
    function get_name_length() &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        integer(C_INT) :: SHT_rv
        ! splicer begin function.get_name_length
        SHT_rv = c_get_name_length()
        ! splicer end function.get_name_length
    end function get_name_length
#endif

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  const string & getNameErrorPattern +len(get_name_length())
    ! Attrs:     +api(buf)+deref(copy)+intent(function)
    ! Exact:     f_function_string_&_buf_copy
    ! Attrs:     +api(buf)+deref(copy)+intent(function)
    ! Exact:     f_function_string_&_buf_copy
    function get_name_error_pattern() &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        character(len=get_name_length()) :: SHT_rv
        ! splicer begin function.get_name_error_pattern
        integer(C_INT) SHT_rv_len
        SHT_rv_len = len(SHT_rv, kind=C_INT)
        call c_get_name_error_pattern_bufferify(SHT_rv, SHT_rv_len)
        ! splicer end function.get_name_error_pattern
    end function get_name_error_pattern

    ! splicer begin additional_functions
    ! splicer end additional_functions

end module statement_mod
