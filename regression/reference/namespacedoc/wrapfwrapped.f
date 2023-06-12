! wrapfwrapped.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapfwrapped.f
!! \brief Shroud generated wrapper for outer namespace
!<
! splicer begin file_top
! splicer end file_top
module wrapped_mod
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top

    interface

        ! ----------------------------------------
        ! Function:  void worker3
        ! Attrs:     +intent(subroutine)
        ! Requested: c_subroutine_void_scalar
        ! Match:     c_subroutine
        subroutine inner3_worker3() &
                bind(C, name="WWW_inner3_worker3")
            implicit none
        end subroutine inner3_worker3

        ! ----------------------------------------
        ! Function:  void worker
        ! Attrs:     +intent(subroutine)
        ! Requested: c_subroutine_void_scalar
        ! Match:     c_subroutine
        subroutine worker() &
                bind(C, name="WWW_worker")
            implicit none
        end subroutine worker

        ! splicer begin additional_interfaces
        ! splicer end additional_interfaces

        ! ----------------------------------------
        ! Function:  void worker4
        ! Attrs:     +intent(subroutine)
        ! Requested: c_subroutine_void_scalar
        ! Match:     c_subroutine
        subroutine inner4_worker4() &
                bind(C, name="WWW_inner4_worker4")
            implicit none
        end subroutine inner4_worker4
    end interface

contains

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  void worker3
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    subroutine inner3_worker3()
        ! splicer begin function.worker3
        call c_inner3_worker3()
        ! splicer end function.worker3
    end subroutine inner3_worker3
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  void worker
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    subroutine worker()
        ! splicer begin function.worker
        call c_worker()
        ! splicer end function.worker
    end subroutine worker
#endif

    ! splicer begin additional_functions
    ! splicer end additional_functions

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  void worker4
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    subroutine inner4_worker4()
        ! splicer begin namespace.inner2.function.worker4
        call c_inner4_worker4()
        ! splicer end namespace.inner2.function.worker4
    end subroutine inner4_worker4
#endif

end module wrapped_mod
