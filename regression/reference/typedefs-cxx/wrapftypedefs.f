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
    use iso_c_binding, only : C_INT
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top

    ! start typedef TypeID
    ! typedef TypeID
    integer, parameter :: type_id = C_INT
    ! end typedef TypeID

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
                bind(C, name="TYP_typefunc")
            import :: type_id
            implicit none
            integer(type_id), value, intent(IN) :: arg
            integer(type_id) :: SHT_rv
        end function typefunc
    end interface
    ! end typefunc

    interface
        ! splicer begin additional_interfaces
        ! splicer end additional_interfaces
    end interface

contains

    ! splicer begin additional_functions
    ! splicer end additional_functions

end module typedefs_mod
