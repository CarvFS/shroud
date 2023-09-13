! wrapfwrapped_inner1.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapfwrapped_inner1.f
!! \brief Shroud generated wrapper for inner1 namespace
!<
! splicer begin namespace.inner1.file_top
! splicer end namespace.inner1.file_top
module wrapped_inner1_mod
    ! splicer begin namespace.inner1.module_use
    ! splicer end namespace.inner1.module_use
    implicit none

    ! splicer begin namespace.inner1.module_top
    ! splicer end namespace.inner1.module_top

    interface

        ! ----------------------------------------
        ! Function:  void worker
        ! Attrs:     +intent(subroutine)
        ! Exact:     c_subroutine_void_scalar
        subroutine worker() &
                bind(C, name="WWW_inner1_worker")
            implicit none
        end subroutine worker
    end interface

    ! splicer begin namespace.inner1.additional_declarations
    ! splicer end namespace.inner1.additional_declarations

contains

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  void worker
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    subroutine worker()
        ! splicer begin namespace.inner1.function.worker
        call c_worker()
        ! splicer end namespace.inner1.function.worker
    end subroutine worker
#endif

    ! splicer begin namespace.inner1.additional_functions
    ! splicer end namespace.inner1.additional_functions

end module wrapped_inner1_mod
