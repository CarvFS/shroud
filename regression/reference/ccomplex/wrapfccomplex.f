! wrapfccomplex.f
! This file is generated by Shroud 0.12.1. Do not edit.
! Copyright (c) 2017-2020, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapfccomplex.f
!! \brief Shroud generated wrapper for ccomplex library
!<
! splicer begin file_top
! splicer end file_top
module ccomplex_mod
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top

    ! ----------------------------------------
    ! Function:  void acceptFloatComplexInoutPtr
    ! Requested: c_void_scalar_result
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  float complex * arg1 +intent(inout)
    ! Requested: c_native_*_inout
    ! Match:     c_default
    interface
        subroutine accept_float_complex_inout_ptr(arg1) &
                bind(C, name="acceptFloatComplexInoutPtr")
            use iso_c_binding, only : C_FLOAT_COMPLEX
            implicit none
            complex(C_FLOAT_COMPLEX), intent(INOUT) :: arg1
        end subroutine accept_float_complex_inout_ptr
    end interface

    ! ----------------------------------------
    ! Function:  void acceptDoubleComplexInoutPtr
    ! Requested: c_void_scalar_result
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  double complex * arg1 +intent(inout)
    ! Requested: c_native_*_inout
    ! Match:     c_default
    interface
        subroutine accept_double_complex_inout_ptr(arg1) &
                bind(C, name="acceptDoubleComplexInoutPtr")
            use iso_c_binding, only : C_DOUBLE_COMPLEX
            implicit none
            complex(C_DOUBLE_COMPLEX), intent(INOUT) :: arg1
        end subroutine accept_double_complex_inout_ptr
    end interface

    ! ----------------------------------------
    ! Function:  void acceptDoubleComplexOutPtr
    ! Requested: c_void_scalar_result
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  double complex * arg1 +intent(out)
    ! Requested: c_native_*_out
    ! Match:     c_default
    interface
        subroutine accept_double_complex_out_ptr(arg1) &
                bind(C, name="acceptDoubleComplexOutPtr")
            use iso_c_binding, only : C_DOUBLE_COMPLEX
            implicit none
            complex(C_DOUBLE_COMPLEX), intent(OUT) :: arg1
        end subroutine accept_double_complex_out_ptr
    end interface

    ! ----------------------------------------
    ! Function:  void acceptDoubleComplexOutPtrFlag
    ! Requested: c_void_scalar_result
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  double complex * arg1 +intent(out)
    ! Requested: c_native_*_out
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  int * flag +intent(out)
    ! Requested: c_native_*_out
    ! Match:     c_default
    interface
        subroutine accept_double_complex_out_ptr_flag(arg1, flag) &
                bind(C, name="acceptDoubleComplexOutPtrFlag")
            use iso_c_binding, only : C_DOUBLE_COMPLEX, C_INT
            implicit none
            complex(C_DOUBLE_COMPLEX), intent(OUT) :: arg1
            integer(C_INT), intent(OUT) :: flag
        end subroutine accept_double_complex_out_ptr_flag
    end interface

    interface
        ! splicer begin additional_interfaces
        ! splicer end additional_interfaces
    end interface

contains

    ! splicer begin additional_functions
    ! splicer end additional_functions

end module ccomplex_mod
