! wrapftypemap.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
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
    use iso_c_binding, only : C_DOUBLE, C_FLOAT, C_INT32_T, C_INT64_T
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
#if defined(USE_64BIT_INDEXTYPE)
    integer, parameter :: INDEXTYPE = C_INT64_T
#else
    integer, parameter :: INDEXTYPE = C_INT32_T
#endif

#if defined(USE_64BIT_FLOAT)
    integer, parameter :: FLOATTYPE = C_DOUBLE
#else
    integer, parameter :: FLOATTYPE = C_FLOAT
#endif
    ! splicer end module_top

    interface

        function c_pass_index(i1, i2) &
                result(SHT_rv) &
                bind(C, name="TYP_pass_index")
            use iso_c_binding, only : C_BOOL
            import :: INDEXTYPE
            implicit none
            integer(INDEXTYPE), value, intent(IN) :: i1
            integer(INDEXTYPE), intent(OUT) :: i2
            logical(C_BOOL) :: SHT_rv
        end function c_pass_index

        function c_pass_index_32(i1, i2) &
                result(SHT_rv) &
                bind(C, name="TYP_pass_index_32")
            use iso_c_binding, only : C_BOOL, C_INT32_T
            import :: INDEXTYPE
            implicit none
            integer(C_INT32_T), value, intent(IN) :: i1
            integer(INDEXTYPE), intent(OUT) :: i2
            logical(C_BOOL) :: SHT_rv
        end function c_pass_index_32

        function c_pass_index_64(i1, i2) &
                result(SHT_rv) &
                bind(C, name="TYP_pass_index_64")
            use iso_c_binding, only : C_BOOL, C_INT64_T
            import :: INDEXTYPE
            implicit none
            integer(C_INT64_T), value, intent(IN) :: i1
            integer(INDEXTYPE), intent(OUT) :: i2
            logical(C_BOOL) :: SHT_rv
        end function c_pass_index_64

        subroutine c_pass_index2(i1) &
                bind(C, name="TYP_pass_index2")
            import :: INDEXTYPE
            implicit none
            integer(INDEXTYPE), value, intent(IN) :: i1
        end subroutine c_pass_index2

        subroutine c_pass_float(f1) &
                bind(C, name="TYP_pass_float")
            import :: FLOATTYPE
            implicit none
            real(FLOATTYPE), value, intent(IN) :: f1
        end subroutine c_pass_float

        ! splicer begin additional_interfaces
        ! splicer end additional_interfaces
    end interface

    interface pass_float
        module procedure pass_float_float
        module procedure pass_float_double
    end interface pass_float

    interface pass_index
        module procedure pass_index_32
        module procedure pass_index_64
    end interface pass_index

    interface pass_index2
        module procedure pass_index2_32
        module procedure pass_index2_64
    end interface pass_index2

contains

    function pass_index_32(i1, i2) &
            result(SHT_rv)
        use iso_c_binding, only : C_BOOL, C_INT32_T
        integer(C_INT32_T), value, intent(IN) :: i1
        integer(INDEXTYPE), intent(OUT) :: i2
        logical :: SHT_rv
        ! splicer begin function.pass_index_32
        SHT_rv = c_pass_index_32(i1, i2)
        ! splicer end function.pass_index_32
    end function pass_index_32

    function pass_index_64(i1, i2) &
            result(SHT_rv)
        use iso_c_binding, only : C_BOOL, C_INT64_T
        integer(C_INT64_T), value, intent(IN) :: i1
        integer(INDEXTYPE), intent(OUT) :: i2
        logical :: SHT_rv
        ! splicer begin function.pass_index_64
        SHT_rv = c_pass_index_64(i1, i2)
        ! splicer end function.pass_index_64
    end function pass_index_64

    subroutine pass_index2_32(i1)
        use iso_c_binding, only : C_INT32_T
        integer(C_INT32_T), value, intent(IN) :: i1
        ! splicer begin function.pass_index2_32
        call c_pass_index2(int(i1, INDEXTYPE))
        ! splicer end function.pass_index2_32
    end subroutine pass_index2_32

    subroutine pass_index2_64(i1)
        use iso_c_binding, only : C_INT64_T
        integer(C_INT64_T), value, intent(IN) :: i1
        ! splicer begin function.pass_index2_64
        call c_pass_index2(int(i1, INDEXTYPE))
        ! splicer end function.pass_index2_64
    end subroutine pass_index2_64

    subroutine pass_float_float(f1)
        use iso_c_binding, only : C_FLOAT
        real(C_FLOAT), value, intent(IN) :: f1
        ! splicer begin function.pass_float_float
        call c_pass_float(real(f1, FLOATTYPE))
        ! splicer end function.pass_float_float
    end subroutine pass_float_float

    subroutine pass_float_double(f1)
        use iso_c_binding, only : C_DOUBLE
        real(C_DOUBLE), value, intent(IN) :: f1
        ! splicer begin function.pass_float_double
        call c_pass_float(real(f1, FLOATTYPE))
        ! splicer end function.pass_float_double
    end subroutine pass_float_double

    ! splicer begin additional_functions
    ! splicer end additional_functions

end module typemap_mod
