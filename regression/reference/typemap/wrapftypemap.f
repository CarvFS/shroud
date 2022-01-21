! wrapftypemap.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapftypemap.f
!! \brief Shroud generated wrapper for typemap library
!<
! splicer begin file_top
! splicer end file_top
module typemap_mod
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top

    interface

        subroutine pass_index(i1) &
                bind(C, name="TYP_pass_index")
            use iso_c_binding, only : C_INT32_T
            implicit none
            integer(C_INT32_T), value, intent(IN) :: i1
        end subroutine pass_index

        ! splicer begin additional_interfaces
        ! splicer end additional_interfaces
    end interface

contains

    ! splicer begin additional_functions
    ! splicer end additional_functions

end module typemap_mod
