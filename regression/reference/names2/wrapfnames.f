! wrapfnames.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2022, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapfnames.f
!! \brief Shroud generated wrapper for ignore2 namespace
!<
! splicer begin file_top
! splicer end file_top
module worker_names
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top

    interface

        ! ----------------------------------------
        ! Function:  void AFunction
        ! Attrs:     +intent(subroutine)
        ! Requested: c_subroutine_void_scalar
        ! Match:     c_subroutine
        subroutine afunction() &
                bind(C, name="NAM_afunction")
            implicit none
        end subroutine afunction

        ! splicer begin additional_interfaces
        ! splicer end additional_interfaces
    end interface

contains

    ! splicer begin additional_functions
    ! splicer end additional_functions

end module worker_names
