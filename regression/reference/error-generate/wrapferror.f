! wrapferror.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapferror.f
!! \brief Shroud generated wrapper for error library
!<
! splicer begin file_top
! splicer end file_top
module error_mod
    use iso_c_binding, only : C_INT
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top


    type, bind(C) :: struct1
        integer(C_INT) :: arg1(10)
    end type struct1


    type, bind(C) :: nested
        integer(C_INT) :: sublevels
    end type nested

    ! splicer begin additional_declarations
    ! splicer end additional_declarations

contains

    ! splicer begin additional_functions
    ! splicer end additional_functions

end module error_mod
