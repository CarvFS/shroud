! wrapftutorial.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapftutorial.f
!! \brief Shroud generated wrapper for tutorial namespace
!<
! splicer begin file_top
! splicer end file_top
module tutorial_mod
    use iso_c_binding, only : C_INT, C_LONG, C_NULL_PTR, C_PTR, C_SIZE_T
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top

    ! start helper capsule_data_helper
    ! helper capsule_data_helper
    type, bind(C) :: TUT_SHROUD_capsule_data
        type(C_PTR) :: addr = C_NULL_PTR  ! address of C++ memory
        integer(C_INT) :: idtor = 0       ! index of destructor
    end type TUT_SHROUD_capsule_data
    ! end helper capsule_data_helper

    ! start array_context
    ! helper array_context
    type, bind(C) :: TUT_SHROUD_array
        ! address of C++ memory
        type(TUT_SHROUD_capsule_data) :: cxx
        ! address of data in cxx
        type(C_PTR) :: base_addr = C_NULL_PTR
        ! type of element
        integer(C_INT) :: type
        ! bytes-per-item or character len of data in cxx
        integer(C_SIZE_T) :: elem_len = 0_C_SIZE_T
        ! size of data in cxx
        integer(C_SIZE_T) :: size = 0_C_SIZE_T
        ! number of dimensions
        integer(C_INT) :: rank = -1
        integer(C_LONG) :: shape(7) = 0
    end type TUT_SHROUD_array
    ! end array_context

    ! typedef tutorial::TypeID
    integer, parameter :: type_id = C_INT

    ! typedef tutorial::EnumTypeID
    integer, parameter :: enum_type_id = C_INT

    !  enum tutorial::Color
    integer(C_INT), parameter :: red = 0
    integer(C_INT), parameter :: blue = 1
    integer(C_INT), parameter :: white = 2

    ! start abstract callback1_incr
    abstract interface
        function callback1_incr(arg0) bind(C)
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT), value :: arg0
            integer(C_INT) :: callback1_incr
        end function callback1_incr
    end interface
    ! end abstract callback1_incr

    ! start no_return_no_arguments
    interface
        subroutine no_return_no_arguments() &
                bind(C, name="TUT_no_return_no_arguments")
            implicit none
        end subroutine no_return_no_arguments
    end interface
    ! end no_return_no_arguments

    interface
        function pass_by_value(arg1, arg2) &
                result(SHT_rv) &
                bind(C, name="TUT_pass_by_value")
            use iso_c_binding, only : C_DOUBLE, C_INT
            implicit none
            real(C_DOUBLE), value, intent(IN) :: arg1
            integer(C_INT), value, intent(IN) :: arg2
            real(C_DOUBLE) :: SHT_rv
        end function pass_by_value
    end interface

    interface
        subroutine c_concatenate_strings_bufferify(arg1, SHT_arg1_len, &
                arg2, SHT_arg2_len, SHT_rv) &
                bind(C, name="TUT_concatenate_strings_bufferify")
            use iso_c_binding, only : C_CHAR, C_INT
            import :: TUT_SHROUD_array
            implicit none
            character(kind=C_CHAR), intent(IN) :: arg1(*)
            integer(C_INT), value, intent(IN) :: SHT_arg1_len
            character(kind=C_CHAR), intent(IN) :: arg2(*)
            integer(C_INT), value, intent(IN) :: SHT_arg2_len
            type(TUT_SHROUD_array), intent(OUT) :: SHT_rv
        end subroutine c_concatenate_strings_bufferify
    end interface

    ! start c_use_default_arguments
    interface
        function c_use_default_arguments() &
                result(SHT_rv) &
                bind(C, name="TUT_use_default_arguments")
            use iso_c_binding, only : C_DOUBLE
            implicit none
            real(C_DOUBLE) :: SHT_rv
        end function c_use_default_arguments
    end interface
    ! end c_use_default_arguments

    ! start c_use_default_arguments_arg1
    interface
        function c_use_default_arguments_arg1(arg1) &
                result(SHT_rv) &
                bind(C, name="TUT_use_default_arguments_arg1")
            use iso_c_binding, only : C_DOUBLE
            implicit none
            real(C_DOUBLE), value, intent(IN) :: arg1
            real(C_DOUBLE) :: SHT_rv
        end function c_use_default_arguments_arg1
    end interface
    ! end c_use_default_arguments_arg1

    ! start c_use_default_arguments_arg1_arg2
    interface
        function c_use_default_arguments_arg1_arg2(arg1, arg2) &
                result(SHT_rv) &
                bind(C, name="TUT_use_default_arguments_arg1_arg2")
            use iso_c_binding, only : C_BOOL, C_DOUBLE
            implicit none
            real(C_DOUBLE), value, intent(IN) :: arg1
            logical(C_BOOL), value, intent(IN) :: arg2
            real(C_DOUBLE) :: SHT_rv
        end function c_use_default_arguments_arg1_arg2
    end interface
    ! end c_use_default_arguments_arg1_arg2

    interface
        subroutine c_overloaded_function_from_name(name) &
                bind(C, name="TUT_overloaded_function_from_name")
            use iso_c_binding, only : C_CHAR
            implicit none
            character(kind=C_CHAR), intent(IN) :: name(*)
        end subroutine c_overloaded_function_from_name
    end interface

    interface
        subroutine c_overloaded_function_from_name_bufferify(name, &
                SHT_name_len) &
                bind(C, name="TUT_overloaded_function_from_name_bufferify")
            use iso_c_binding, only : C_CHAR, C_INT
            implicit none
            character(kind=C_CHAR), intent(IN) :: name(*)
            integer(C_INT), value, intent(IN) :: SHT_name_len
        end subroutine c_overloaded_function_from_name_bufferify
    end interface

    interface
        subroutine c_overloaded_function_from_index(indx) &
                bind(C, name="TUT_overloaded_function_from_index")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT), value, intent(IN) :: indx
        end subroutine c_overloaded_function_from_index
    end interface

    interface
        subroutine c_template_argument_int(arg) &
                bind(C, name="TUT_template_argument_int")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT), value, intent(IN) :: arg
        end subroutine c_template_argument_int
    end interface

    interface
        subroutine c_template_argument_double(arg) &
                bind(C, name="TUT_template_argument_double")
            use iso_c_binding, only : C_DOUBLE
            implicit none
            real(C_DOUBLE), value, intent(IN) :: arg
        end subroutine c_template_argument_double
    end interface

    interface
        function c_template_return_int() &
                result(SHT_rv) &
                bind(C, name="TUT_template_return_int")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT) :: SHT_rv
        end function c_template_return_int
    end interface

    interface
        function c_template_return_double() &
                result(SHT_rv) &
                bind(C, name="TUT_template_return_double")
            use iso_c_binding, only : C_DOUBLE
            implicit none
            real(C_DOUBLE) :: SHT_rv
        end function c_template_return_double
    end interface

    interface
        subroutine c_fortran_generic_overloaded_0() &
                bind(C, name="TUT_fortran_generic_overloaded_0")
            implicit none
        end subroutine c_fortran_generic_overloaded_0
    end interface

    interface
        subroutine c_fortran_generic_overloaded_1(name, arg2) &
                bind(C, name="TUT_fortran_generic_overloaded_1")
            use iso_c_binding, only : C_CHAR, C_DOUBLE
            implicit none
            character(kind=C_CHAR), intent(IN) :: name(*)
            real(C_DOUBLE), value, intent(IN) :: arg2
        end subroutine c_fortran_generic_overloaded_1
    end interface

    interface
        subroutine c_fortran_generic_overloaded_1_float_bufferify(name, &
                SHT_name_len, arg2) &
                bind(C, name="TUT_fortran_generic_overloaded_1_float_bufferify")
            use iso_c_binding, only : C_CHAR, C_FLOAT, C_INT
            implicit none
            character(kind=C_CHAR), intent(IN) :: name(*)
            integer(C_INT), value, intent(IN) :: SHT_name_len
            real(C_FLOAT), value, intent(IN) :: arg2
        end subroutine c_fortran_generic_overloaded_1_float_bufferify
    end interface

    interface
        subroutine c_fortran_generic_overloaded_1_double_bufferify(name, &
                SHT_name_len, arg2) &
                bind(C, name="TUT_fortran_generic_overloaded_1_double_bufferify")
            use iso_c_binding, only : C_CHAR, C_DOUBLE, C_INT
            implicit none
            character(kind=C_CHAR), intent(IN) :: name(*)
            integer(C_INT), value, intent(IN) :: SHT_name_len
            real(C_DOUBLE), value, intent(IN) :: arg2
        end subroutine c_fortran_generic_overloaded_1_double_bufferify
    end interface

    interface
        function c_use_default_overload_num(num) &
                result(SHT_rv) &
                bind(C, name="TUT_use_default_overload_num")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT), value, intent(IN) :: num
            integer(C_INT) :: SHT_rv
        end function c_use_default_overload_num
    end interface

    interface
        function c_use_default_overload_num_offset(num, offset) &
                result(SHT_rv) &
                bind(C, name="TUT_use_default_overload_num_offset")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT), value, intent(IN) :: num
            integer(C_INT), value, intent(IN) :: offset
            integer(C_INT) :: SHT_rv
        end function c_use_default_overload_num_offset
    end interface

    interface
        function c_use_default_overload_num_offset_stride(num, offset, &
                stride) &
                result(SHT_rv) &
                bind(C, name="TUT_use_default_overload_num_offset_stride")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT), value, intent(IN) :: num
            integer(C_INT), value, intent(IN) :: offset
            integer(C_INT), value, intent(IN) :: stride
            integer(C_INT) :: SHT_rv
        end function c_use_default_overload_num_offset_stride
    end interface

    interface
        function c_use_default_overload_3(type, num) &
                result(SHT_rv) &
                bind(C, name="TUT_use_default_overload_3")
            use iso_c_binding, only : C_DOUBLE, C_INT
            implicit none
            real(C_DOUBLE), value, intent(IN) :: type
            integer(C_INT), value, intent(IN) :: num
            integer(C_INT) :: SHT_rv
        end function c_use_default_overload_3
    end interface

    interface
        function c_use_default_overload_4(type, num, offset) &
                result(SHT_rv) &
                bind(C, name="TUT_use_default_overload_4")
            use iso_c_binding, only : C_DOUBLE, C_INT
            implicit none
            real(C_DOUBLE), value, intent(IN) :: type
            integer(C_INT), value, intent(IN) :: num
            integer(C_INT), value, intent(IN) :: offset
            integer(C_INT) :: SHT_rv
        end function c_use_default_overload_4
    end interface

    interface
        function c_use_default_overload_5(type, num, offset, stride) &
                result(SHT_rv) &
                bind(C, name="TUT_use_default_overload_5")
            use iso_c_binding, only : C_DOUBLE, C_INT
            implicit none
            real(C_DOUBLE), value, intent(IN) :: type
            integer(C_INT), value, intent(IN) :: num
            integer(C_INT), value, intent(IN) :: offset
            integer(C_INT), value, intent(IN) :: stride
            integer(C_INT) :: SHT_rv
        end function c_use_default_overload_5
    end interface

    interface
        function typefunc(arg) &
                result(SHT_rv) &
                bind(C, name="TUT_typefunc")
            import :: type_id
            implicit none
            integer(type_id), value, intent(IN) :: arg
            integer(type_id) :: SHT_rv
        end function typefunc
    end interface

    interface
        function enumfunc(arg) &
                result(SHT_rv) &
                bind(C, name="TUT_enumfunc")
            import :: enum_type_id
            implicit none
            integer(enum_type_id), value, intent(IN) :: arg
            integer(enum_type_id) :: SHT_rv
        end function enumfunc
    end interface

    interface
        function colorfunc(arg) &
                result(SHT_rv) &
                bind(C, name="TUT_colorfunc")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT), value, intent(IN) :: arg
            integer(C_INT) :: SHT_rv
        end function colorfunc
    end interface

    ! start get_min_max
    interface
        subroutine get_min_max(min, max) &
                bind(C, name="TUT_get_min_max")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT), intent(OUT) :: min
            integer(C_INT), intent(OUT) :: max
        end subroutine get_min_max
    end interface
    ! end get_min_max

    ! start callback1
    interface
        function callback1(in, incr) &
                result(SHT_rv) &
                bind(C, name="TUT_callback1")
            use iso_c_binding, only : C_INT
            import :: callback1_incr
            implicit none
            integer(C_INT), value, intent(IN) :: in
            procedure(callback1_incr) :: incr
            integer(C_INT) :: SHT_rv
        end function callback1
    end interface
    ! end callback1

    interface
        function c_last_function_called() &
                result(SHT_rv) &
                bind(C, name="TUT_last_function_called")
            use iso_c_binding, only : C_PTR
            implicit none
            type(C_PTR) SHT_rv
        end function c_last_function_called
    end interface

    interface
        subroutine c_last_function_called_bufferify(SHT_rv, SHT_rv_len) &
                bind(C, name="TUT_last_function_called_bufferify")
            use iso_c_binding, only : C_CHAR, C_INT
            implicit none
            character(kind=C_CHAR), intent(OUT) :: SHT_rv(*)
            integer(C_INT), value, intent(IN) :: SHT_rv_len
        end subroutine c_last_function_called_bufferify
    end interface

    interface
        ! splicer begin additional_interfaces
        subroutine all_test1(array)
          implicit none
          integer, dimension(:), allocatable :: array
        end subroutine all_test1
        ! splicer end additional_interfaces
    end interface

    interface fortran_generic_overloaded
        module procedure fortran_generic_overloaded_0
        module procedure fortran_generic_overloaded_1_float
        module procedure fortran_generic_overloaded_1_double
    end interface fortran_generic_overloaded

    interface overloaded_function
        module procedure overloaded_function_from_name
        module procedure overloaded_function_from_index
    end interface overloaded_function

    interface template_argument
        module procedure template_argument_int
        module procedure template_argument_double
    end interface template_argument

    ! start generic interface use_default_arguments
    interface use_default_arguments
        module procedure use_default_arguments
        module procedure use_default_arguments_arg1
        module procedure use_default_arguments_arg1_arg2
    end interface use_default_arguments
    ! end generic interface use_default_arguments

    interface use_default_overload
        module procedure use_default_overload_num
        module procedure use_default_overload_num_offset
        module procedure use_default_overload_num_offset_stride
        module procedure use_default_overload_3
        module procedure use_default_overload_4
        module procedure use_default_overload_5
    end interface use_default_overload

    interface
        ! helper copy_string
        ! Copy the char* or std::string in context into c_var.
        subroutine TUT_SHROUD_copy_string_and_free(context, c_var, c_var_size) &
             bind(c,name="TUT_ShroudCopyStringAndFree")
            use, intrinsic :: iso_c_binding, only : C_CHAR, C_SIZE_T
            import TUT_SHROUD_array
            type(TUT_SHROUD_array), intent(IN) :: context
            character(kind=C_CHAR), intent(OUT) :: c_var(*)
            integer(C_SIZE_T), value :: c_var_size
        end subroutine TUT_SHROUD_copy_string_and_free
    end interface

contains

    !>
    !! Note that since a reference is returned, no intermediate string
    !! is allocated.  It is assumed +owner(library).
    !<
    function concatenate_strings(arg1, arg2) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        character(len=*), intent(IN) :: arg1
        character(len=*), intent(IN) :: arg2
        character(len=:), allocatable :: SHT_rv
        ! splicer begin function.concatenate_strings
        integer(C_INT) SHT_arg1_len
        integer(C_INT) SHT_arg2_len
        type(TUT_SHROUD_array) :: SHT_rv_cdesc
        SHT_arg1_len = len(arg1, kind=C_INT)
        SHT_arg2_len = len(arg2, kind=C_INT)
        call c_concatenate_strings_bufferify(arg1, SHT_arg1_len, arg2, &
            SHT_arg2_len, SHT_rv_cdesc)
        allocate(character(len=SHT_rv_cdesc%elem_len):: SHT_rv)
        call TUT_SHROUD_copy_string_and_free(SHT_rv_cdesc, SHT_rv, &
            SHT_rv_cdesc%elem_len)
        ! splicer end function.concatenate_strings
    end function concatenate_strings

    ! start use_default_arguments
    function use_default_arguments() &
            result(SHT_rv)
        use iso_c_binding, only : C_DOUBLE
        real(C_DOUBLE) :: SHT_rv
        ! splicer begin function.use_default_arguments
        SHT_rv = c_use_default_arguments()
        ! splicer end function.use_default_arguments
    end function use_default_arguments
    ! end use_default_arguments

    ! start use_default_arguments_arg1
    function use_default_arguments_arg1(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_DOUBLE
        real(C_DOUBLE), value, intent(IN) :: arg1
        real(C_DOUBLE) :: SHT_rv
        ! splicer begin function.use_default_arguments_arg1
        SHT_rv = c_use_default_arguments_arg1(arg1)
        ! splicer end function.use_default_arguments_arg1
    end function use_default_arguments_arg1
    ! end use_default_arguments_arg1

    ! start use_default_arguments_arg1_arg2
    function use_default_arguments_arg1_arg2(arg1, arg2) &
            result(SHT_rv)
        use iso_c_binding, only : C_BOOL, C_DOUBLE
        real(C_DOUBLE), value, intent(IN) :: arg1
        logical, value, intent(IN) :: arg2
        real(C_DOUBLE) :: SHT_rv
        ! splicer begin function.use_default_arguments_arg1_arg2
        logical(C_BOOL) SH_arg2
        SH_arg2 = arg2  ! coerce to C_BOOL
        SHT_rv = c_use_default_arguments_arg1_arg2(arg1, SH_arg2)
        ! splicer end function.use_default_arguments_arg1_arg2
    end function use_default_arguments_arg1_arg2
    ! end use_default_arguments_arg1_arg2

    subroutine overloaded_function_from_name(name)
        use iso_c_binding, only : C_INT
        character(len=*), intent(IN) :: name
        ! splicer begin function.overloaded_function_from_name
        integer(C_INT) SHT_name_len
        SHT_name_len = len(name, kind=C_INT)
        call c_overloaded_function_from_name_bufferify(name, &
            SHT_name_len)
        ! splicer end function.overloaded_function_from_name
    end subroutine overloaded_function_from_name

    subroutine overloaded_function_from_index(indx)
        use iso_c_binding, only : C_INT
        integer(C_INT), value, intent(IN) :: indx
        ! splicer begin function.overloaded_function_from_index
        call c_overloaded_function_from_index(indx)
        ! splicer end function.overloaded_function_from_index
    end subroutine overloaded_function_from_index

    subroutine template_argument_int(arg)
        use iso_c_binding, only : C_INT
        integer(C_INT), value, intent(IN) :: arg
        ! splicer begin function.template_argument_int
        call c_template_argument_int(arg)
        ! splicer end function.template_argument_int
    end subroutine template_argument_int

    subroutine template_argument_double(arg)
        use iso_c_binding, only : C_DOUBLE
        real(C_DOUBLE), value, intent(IN) :: arg
        ! splicer begin function.template_argument_double
        call c_template_argument_double(arg)
        ! splicer end function.template_argument_double
    end subroutine template_argument_double

    function template_return_int() &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        integer(C_INT) :: SHT_rv
        ! splicer begin function.template_return_int
        SHT_rv = c_template_return_int()
        ! splicer end function.template_return_int
    end function template_return_int

    function template_return_double() &
            result(SHT_rv)
        use iso_c_binding, only : C_DOUBLE
        real(C_DOUBLE) :: SHT_rv
        ! splicer begin function.template_return_double
        SHT_rv = c_template_return_double()
        ! splicer end function.template_return_double
    end function template_return_double

    subroutine fortran_generic_overloaded_0()
        ! splicer begin function.fortran_generic_overloaded_0
        call c_fortran_generic_overloaded_0()
        ! splicer end function.fortran_generic_overloaded_0
    end subroutine fortran_generic_overloaded_0

    subroutine fortran_generic_overloaded_1_float(name, arg2)
        use iso_c_binding, only : C_FLOAT, C_INT
        character(len=*), intent(IN) :: name
        real(C_FLOAT), value, intent(IN) :: arg2
        ! splicer begin function.fortran_generic_overloaded_1_float
        integer(C_INT) SHT_name_len
        SHT_name_len = len(name, kind=C_INT)
        call c_fortran_generic_overloaded_1_float_bufferify(name, &
            SHT_name_len, arg2)
        ! splicer end function.fortran_generic_overloaded_1_float
    end subroutine fortran_generic_overloaded_1_float

    subroutine fortran_generic_overloaded_1_double(name, arg2)
        use iso_c_binding, only : C_DOUBLE, C_INT
        character(len=*), intent(IN) :: name
        real(C_DOUBLE), value, intent(IN) :: arg2
        ! splicer begin function.fortran_generic_overloaded_1_double
        integer(C_INT) SHT_name_len
        SHT_name_len = len(name, kind=C_INT)
        call c_fortran_generic_overloaded_1_double_bufferify(name, &
            SHT_name_len, arg2)
        ! splicer end function.fortran_generic_overloaded_1_double
    end subroutine fortran_generic_overloaded_1_double

    function use_default_overload_num(num) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        integer(C_INT), value, intent(IN) :: num
        integer(C_INT) :: SHT_rv
        ! splicer begin function.use_default_overload_num
        SHT_rv = c_use_default_overload_num(num)
        ! splicer end function.use_default_overload_num
    end function use_default_overload_num

    function use_default_overload_num_offset(num, offset) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        integer(C_INT), value, intent(IN) :: num
        integer(C_INT), value, intent(IN) :: offset
        integer(C_INT) :: SHT_rv
        ! splicer begin function.use_default_overload_num_offset
        SHT_rv = c_use_default_overload_num_offset(num, offset)
        ! splicer end function.use_default_overload_num_offset
    end function use_default_overload_num_offset

    function use_default_overload_num_offset_stride(num, offset, stride) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        integer(C_INT), value, intent(IN) :: num
        integer(C_INT), value, intent(IN) :: offset
        integer(C_INT), value, intent(IN) :: stride
        integer(C_INT) :: SHT_rv
        ! splicer begin function.use_default_overload_num_offset_stride
        SHT_rv = c_use_default_overload_num_offset_stride(num, offset, &
            stride)
        ! splicer end function.use_default_overload_num_offset_stride
    end function use_default_overload_num_offset_stride

    function use_default_overload_3(type, num) &
            result(SHT_rv)
        use iso_c_binding, only : C_DOUBLE, C_INT
        real(C_DOUBLE), value, intent(IN) :: type
        integer(C_INT), value, intent(IN) :: num
        integer(C_INT) :: SHT_rv
        ! splicer begin function.use_default_overload_3
        SHT_rv = c_use_default_overload_3(type, num)
        ! splicer end function.use_default_overload_3
    end function use_default_overload_3

    function use_default_overload_4(type, num, offset) &
            result(SHT_rv)
        use iso_c_binding, only : C_DOUBLE, C_INT
        real(C_DOUBLE), value, intent(IN) :: type
        integer(C_INT), value, intent(IN) :: num
        integer(C_INT), value, intent(IN) :: offset
        integer(C_INT) :: SHT_rv
        ! splicer begin function.use_default_overload_4
        SHT_rv = c_use_default_overload_4(type, num, offset)
        ! splicer end function.use_default_overload_4
    end function use_default_overload_4

    function use_default_overload_5(type, num, offset, stride) &
            result(SHT_rv)
        use iso_c_binding, only : C_DOUBLE, C_INT
        real(C_DOUBLE), value, intent(IN) :: type
        integer(C_INT), value, intent(IN) :: num
        integer(C_INT), value, intent(IN) :: offset
        integer(C_INT), value, intent(IN) :: stride
        integer(C_INT) :: SHT_rv
        ! splicer begin function.use_default_overload_5
        SHT_rv = c_use_default_overload_5(type, num, offset, stride)
        ! splicer end function.use_default_overload_5
    end function use_default_overload_5

    function last_function_called() &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        character(len=30) :: SHT_rv
        ! splicer begin function.last_function_called
        integer(C_INT) SHT_rv_len
        SHT_rv_len = len(SHT_rv, kind=C_INT)
        call c_last_function_called_bufferify(SHT_rv, SHT_rv_len)
        ! splicer end function.last_function_called
    end function last_function_called

    ! splicer begin additional_functions
    ! splicer end additional_functions

end module tutorial_mod
