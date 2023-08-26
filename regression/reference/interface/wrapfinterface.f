! wrapfinterface.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapfinterface.f
!! \brief Shroud generated wrapper for Interface library
!<
! splicer begin file_top
! splicer end file_top
module interface_mod
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top

    interface

        ! ----------------------------------------
        ! Function:  void Function1
        ! Attrs:     +intent(subroutine)
        ! Requested: c_subroutine_void_scalar
        ! Match:     c_subroutine
        subroutine function1() &
                bind(C, name="Function1")
            implicit none
        end subroutine function1

        ! ----------------------------------------
        ! Function:  double Function2
        ! Attrs:     +intent(function)
        ! Exact:     c_function_native_scalar
        ! ----------------------------------------
        ! Argument:  double arg1 +value
        ! Attrs:     +intent(in)
        ! Requested: c_in_native_scalar
        ! Match:     c_default
        ! ----------------------------------------
        ! Argument:  int arg2 +value
        ! Attrs:     +intent(in)
        ! Requested: c_in_native_scalar
        ! Match:     c_default
        function function2(arg1, arg2) &
                result(SHT_rv) &
                bind(C, name="Function2")
            use iso_c_binding, only : C_DOUBLE, C_INT
            implicit none
            real(C_DOUBLE), value, intent(IN) :: arg1
            integer(C_INT), value, intent(IN) :: arg2
            real(C_DOUBLE) :: SHT_rv
        end function function2
    end interface

    ! splicer begin additional_declarations
    ! splicer end additional_declarations

contains

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  void Function1
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    subroutine function1()
        ! splicer begin function.function1
        call c_function1()
        ! splicer end function.function1
    end subroutine function1
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  double Function2
    ! Attrs:     +intent(function)
    ! Exact:     f_function_native_scalar
    ! Attrs:     +intent(function)
    ! Exact:     c_function_native_scalar
    ! ----------------------------------------
    ! Argument:  double arg1 +value
    ! Attrs:     +intent(in)
    ! Requested: f_in_native_scalar
    ! Match:     f_default
    ! Attrs:     +intent(in)
    ! Requested: c_in_native_scalar
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  int arg2 +value
    ! Attrs:     +intent(in)
    ! Requested: f_in_native_scalar
    ! Match:     f_default
    ! Attrs:     +intent(in)
    ! Requested: c_in_native_scalar
    ! Match:     c_default
    function function2(arg1, arg2) &
            result(SHT_rv)
        use iso_c_binding, only : C_DOUBLE, C_INT
        real(C_DOUBLE), value, intent(IN) :: arg1
        integer(C_INT), value, intent(IN) :: arg2
        real(C_DOUBLE) :: SHT_rv
        ! splicer begin function.function2
        SHT_rv = c_function2(arg1, arg2)
        ! splicer end function.function2
    end function function2
#endif

    ! splicer begin additional_functions
    ! splicer end additional_functions

end module interface_mod
