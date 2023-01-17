! wrapftypedefs.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapftypedefs.f
!! \brief Shroud generated wrapper for typedefs library
!<
! splicer begin file_top
! splicer end file_top
module typedefs_mod
    use iso_c_binding, only : C_DOUBLE, C_INT
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top

    ! start typedef TypeID
    ! typedef TypeID
    integer, parameter :: type_id = C_INT
    ! end typedef TypeID

    ! start typedef Struct1Rename
    ! typedef Struct1Rename
    integer, parameter :: struct1_rename = None
    ! end typedef Struct1Rename


    ! start derived-type s_struct1
    type, bind(C) :: s_struct1
        integer(C_INT) :: i
        real(C_DOUBLE) :: d
    end type s_struct1
    ! end derived-type s_struct1

    ! ----------------------------------------
    ! Function:  TypeID typefunc
    ! Attrs:     +intent(function)
    ! Requested: c_function_native_scalar
    ! Match:     c_function
    ! ----------------------------------------
    ! Argument:  TypeID arg +value
    ! Attrs:     +intent(in)
    ! Requested: c_in_native_scalar
    ! Match:     c_default
    ! start typefunc
    interface
        function typefunc(arg) &
                result(SHT_rv) &
                bind(C, name="typefunc")
            import :: type_id
            implicit none
            integer(type_id), value, intent(IN) :: arg
            integer(type_id) :: SHT_rv
        end function typefunc
    end interface
    ! end typefunc

    ! ----------------------------------------
    ! Function:  void typestruct
    ! Attrs:     +intent(subroutine)
    ! Requested: c_subroutine_void_scalar
    ! Match:     c_subroutine
    ! ----------------------------------------
    ! Argument:  Struct1Rename * arg1
    ! Attrs:     +intent(inout)
    ! Requested: c_inout_struct_*
    ! Match:     c_inout_struct
    ! start typestruct
    interface
        subroutine typestruct(arg1) &
                bind(C, name="typestruct")
            import :: struct1_rename
            implicit none
            struct(struct1_rename), intent(INOUT) :: arg1
        end subroutine typestruct
    end interface
    ! end typestruct

    interface
        ! splicer begin additional_interfaces
        ! splicer end additional_interfaces
    end interface

contains

    ! splicer begin additional_functions
    ! splicer end additional_functions

end module typedefs_mod
