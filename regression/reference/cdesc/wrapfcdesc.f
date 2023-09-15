! wrapfcdesc.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapfcdesc.f
!! \brief Shroud generated wrapper for cdesc library
!<
! splicer begin file_top
! splicer end file_top
module cdesc_mod
    use iso_c_binding, only : C_INT, C_LONG, C_NULL_PTR, C_PTR, C_SIZE_T
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top

    ! helper ShroudTypeDefines
    ! Shroud type defines from helper ShroudTypeDefines
    integer, parameter, private :: &
        SH_TYPE_SIGNED_CHAR= 1, &
        SH_TYPE_SHORT      = 2, &
        SH_TYPE_INT        = 3, &
        SH_TYPE_LONG       = 4, &
        SH_TYPE_LONG_LONG  = 5, &
        SH_TYPE_SIZE_T     = 6, &
        SH_TYPE_UNSIGNED_SHORT      = SH_TYPE_SHORT + 100, &
        SH_TYPE_UNSIGNED_INT        = SH_TYPE_INT + 100, &
        SH_TYPE_UNSIGNED_LONG       = SH_TYPE_LONG + 100, &
        SH_TYPE_UNSIGNED_LONG_LONG  = SH_TYPE_LONG_LONG + 100, &
        SH_TYPE_INT8_T    =  7, &
        SH_TYPE_INT16_T   =  8, &
        SH_TYPE_INT32_T   =  9, &
        SH_TYPE_INT64_T   = 10, &
        SH_TYPE_UINT8_T  =  SH_TYPE_INT8_T + 100, &
        SH_TYPE_UINT16_T =  SH_TYPE_INT16_T + 100, &
        SH_TYPE_UINT32_T =  SH_TYPE_INT32_T + 100, &
        SH_TYPE_UINT64_T =  SH_TYPE_INT64_T + 100, &
        SH_TYPE_FLOAT       = 22, &
        SH_TYPE_DOUBLE      = 23, &
        SH_TYPE_LONG_DOUBLE = 24, &
        SH_TYPE_FLOAT_COMPLEX      = 25, &
        SH_TYPE_DOUBLE_COMPLEX     = 26, &
        SH_TYPE_LONG_DOUBLE_COMPLEX= 27, &
        SH_TYPE_BOOL      = 28, &
        SH_TYPE_CHAR      = 29, &
        SH_TYPE_CPTR      = 30, &
        SH_TYPE_STRUCT    = 31, &
        SH_TYPE_OTHER     = 32

    ! helper capsule_data_helper
    type, bind(C) :: CDE_SHROUD_capsule_data
        type(C_PTR) :: addr = C_NULL_PTR  ! address of C++ memory
        integer(C_INT) :: idtor = 0       ! index of destructor
    end type CDE_SHROUD_capsule_data

    ! helper array_context
    type, bind(C) :: CDE_SHROUD_array
        ! address of C++ memory
        type(CDE_SHROUD_capsule_data) :: cxx
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
    end type CDE_SHROUD_array

    interface

        ! ----------------------------------------
        ! Function:  void Rank2In
        ! Attrs:     +intent(subroutine)
        ! Exact:     f_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  int * arg +cdesc+intent(in)+rank(2)
        ! Attrs:     +intent(in)
        ! Exact:     c_in_native_*
        subroutine c_rank2_in(arg) &
                bind(C, name="CDE_Rank2In")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT), intent(IN) :: arg(*)
        end subroutine c_rank2_in

        ! Generated by arg_to_buffer
        ! ----------------------------------------
        ! Function:  void Rank2In
        ! Attrs:     +intent(subroutine)
        ! Exact:     f_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  int * arg +cdesc+intent(in)+rank(2)
        ! Attrs:     +api(cdesc)+intent(in)
        ! Exact:     c_in_native_*_cdesc
        subroutine c_rank2_in_bufferify(SHT_arg_cdesc) &
                bind(C, name="CDE_Rank2In_bufferify")
            import :: CDE_SHROUD_array
            implicit none
            type(CDE_SHROUD_array), intent(OUT) :: SHT_arg_cdesc
        end subroutine c_rank2_in_bufferify

        ! ----------------------------------------
        ! Function:  void GetScalar1
        ! Attrs:     +intent(subroutine)
        ! Exact:     f_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  std::string & name +intent(in)
        ! Attrs:     +intent(in)
        ! Exact:     c_in_string_&
        ! ----------------------------------------
        ! Argument:  void * value +cdesc+intent(in)+rank(0)+value
        ! Attrs:     +intent(in)
        ! Exact:     c_in_void_*
        subroutine c_get_scalar1(name, value) &
                bind(C, name="CDE_GetScalar1")
            use iso_c_binding, only : C_CHAR, C_PTR
            implicit none
            character(kind=C_CHAR), intent(IN) :: name(*)
            type(C_PTR), value, intent(IN) :: value
        end subroutine c_get_scalar1

        ! Generated by arg_to_buffer
        ! ----------------------------------------
        ! Function:  void GetScalar1
        ! Attrs:     +intent(subroutine)
        ! Exact:     f_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  std::string & name +intent(in)
        ! Attrs:     +api(buf)+intent(in)
        ! Exact:     c_in_string_&_buf
        ! ----------------------------------------
        ! Argument:  int * value +cdesc+intent(out)+rank(0)
        ! Attrs:     +api(cdesc)+intent(out)
        ! Exact:     c_out_native_*_cdesc
        subroutine c_get_scalar1_0_bufferify(name, SHT_name_len, &
                SHT_value_cdesc) &
                bind(C, name="CDE_GetScalar1_0_bufferify")
            use iso_c_binding, only : C_CHAR, C_INT
            import :: CDE_SHROUD_array
            implicit none
            character(kind=C_CHAR), intent(IN) :: name(*)
            integer(C_INT), value, intent(IN) :: SHT_name_len
            type(CDE_SHROUD_array), intent(OUT) :: SHT_value_cdesc
        end subroutine c_get_scalar1_0_bufferify

        ! Generated by arg_to_buffer
        ! ----------------------------------------
        ! Function:  void GetScalar1
        ! Attrs:     +intent(subroutine)
        ! Exact:     f_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  std::string & name +intent(in)
        ! Attrs:     +api(buf)+intent(in)
        ! Exact:     c_in_string_&_buf
        ! ----------------------------------------
        ! Argument:  double * value +cdesc+intent(out)+rank(0)
        ! Attrs:     +api(cdesc)+intent(out)
        ! Exact:     c_out_native_*_cdesc
        subroutine c_get_scalar1_1_bufferify(name, SHT_name_len, &
                SHT_value_cdesc) &
                bind(C, name="CDE_GetScalar1_1_bufferify")
            use iso_c_binding, only : C_CHAR, C_INT
            import :: CDE_SHROUD_array
            implicit none
            character(kind=C_CHAR), intent(IN) :: name(*)
            integer(C_INT), value, intent(IN) :: SHT_name_len
            type(CDE_SHROUD_array), intent(OUT) :: SHT_value_cdesc
        end subroutine c_get_scalar1_1_bufferify

        ! Generated by cxx_template
        ! ----------------------------------------
        ! Function:  int getData
        ! Attrs:     +intent(function)
        ! Exact:     f_function_native_scalar
        function c_get_data_int() &
                result(SHT_rv) &
                bind(C, name="CDE_getData_int")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT) :: SHT_rv
        end function c_get_data_int

        ! Generated by cxx_template
        ! ----------------------------------------
        ! Function:  double getData
        ! Attrs:     +intent(function)
        ! Exact:     f_function_native_scalar
        function c_get_data_double() &
                result(SHT_rv) &
                bind(C, name="CDE_getData_double")
            use iso_c_binding, only : C_DOUBLE
            implicit none
            real(C_DOUBLE) :: SHT_rv
        end function c_get_data_double

        ! Generated by arg_to_buffer
        ! ----------------------------------------
        ! Function:  void GetScalar2
        ! Attrs:     +intent(subroutine)
        ! Exact:     f_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  std::string & name +intent(in)
        ! Attrs:     +api(buf)+intent(in)
        ! Exact:     c_in_string_&_buf
        ! ----------------------------------------
        ! Argument:  int * value +intent(out)
        ! Attrs:     +intent(out)
        ! Exact:     c_out_native_*
        subroutine c_get_scalar2_0_bufferify(name, SHT_name_len, value) &
                bind(C, name="CDE_GetScalar2_0_bufferify")
            use iso_c_binding, only : C_CHAR, C_INT
            implicit none
            character(kind=C_CHAR), intent(IN) :: name(*)
            integer(C_INT), value, intent(IN) :: SHT_name_len
            integer(C_INT), intent(OUT) :: value
        end subroutine c_get_scalar2_0_bufferify

        ! Generated by arg_to_buffer
        ! ----------------------------------------
        ! Function:  void GetScalar2
        ! Attrs:     +intent(subroutine)
        ! Exact:     f_subroutine_void_scalar
        ! ----------------------------------------
        ! Argument:  std::string & name +intent(in)
        ! Attrs:     +api(buf)+intent(in)
        ! Exact:     c_in_string_&_buf
        ! ----------------------------------------
        ! Argument:  double * value +intent(out)
        ! Attrs:     +intent(out)
        ! Exact:     c_out_native_*
        subroutine c_get_scalar2_1_bufferify(name, SHT_name_len, value) &
                bind(C, name="CDE_GetScalar2_1_bufferify")
            use iso_c_binding, only : C_CHAR, C_DOUBLE, C_INT
            implicit none
            character(kind=C_CHAR), intent(IN) :: name(*)
            integer(C_INT), value, intent(IN) :: SHT_name_len
            real(C_DOUBLE), intent(OUT) :: value
        end subroutine c_get_scalar2_1_bufferify
    end interface

    interface get_scalar1
        module procedure get_scalar1_0
        module procedure get_scalar1_1
    end interface get_scalar1

    interface get_scalar2
        module procedure get_scalar2_0
        module procedure get_scalar2_1
    end interface get_scalar2

    ! splicer begin additional_declarations
    ! splicer end additional_declarations

contains

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  void Rank2In
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! ----------------------------------------
    ! Argument:  int * arg +cdesc+intent(in)+rank(2)
    ! Attrs:     +api(cdesc)+intent(in)
    ! Exact:     f_in_native_*_cdesc
    ! Attrs:     +api(cdesc)+intent(in)
    ! Exact:     f_in_native_*_cdesc
    subroutine rank2_in(arg)
        use iso_c_binding, only : C_INT, C_LOC
        integer(C_INT), intent(IN), target :: arg(:,:)
        ! splicer begin function.rank2_in
        type(CDE_SHROUD_array) :: SHT_arg_cdesc
        SHT_arg_cdesc%base_addr = C_LOC(arg)
        SHT_arg_cdesc%type = SH_TYPE_INT
        ! SHT_arg_cdesc%elem_len = C_SIZEOF()
        SHT_arg_cdesc%size = size(arg)
        SHT_arg_cdesc%rank = 2
        SHT_arg_cdesc%shape(1:2) = shape(arg)
        call c_rank2_in_bufferify(SHT_arg_cdesc)
        ! splicer end function.rank2_in
    end subroutine rank2_in

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  void GetScalar1
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! ----------------------------------------
    ! Argument:  std::string & name +intent(in)
    ! Attrs:     +api(buf)+intent(in)
    ! Exact:     f_in_string_&_buf
    ! Attrs:     +api(buf)+intent(in)
    ! Exact:     f_in_string_&_buf
    ! ----------------------------------------
    ! Argument:  int * value +cdesc+intent(out)+rank(0)
    ! Attrs:     +api(cdesc)+intent(out)
    ! Exact:     f_out_native_*_cdesc
    ! Attrs:     +api(cdesc)+intent(out)
    ! Exact:     f_out_native_*_cdesc
    !>
    !! Create several Fortran generic functions which call a single
    !! C wrapper that checks the type of the Fortran argument
    !! and calls the correct templated function.
    !! Adding the string argument forces a bufferified function
    !! to be create.
    !! Argument value is intent(in). The pointer does not change, only
    !! the pointee.
    !! XXX - The function is virtual in the sense that GetScalar1 should
    !! not need to exist but there is no way, yet, to avoid wrapping the
    !! non-bufferify function.
    !<
    subroutine get_scalar1_0(name, value)
        use iso_c_binding, only : C_INT, C_LOC
        character(len=*), intent(IN) :: name
        integer(C_INT), intent(OUT), target :: value
        ! splicer begin function.get_scalar1_0
        integer(C_INT) SHT_name_len
        type(CDE_SHROUD_array) :: SHT_value_cdesc
        SHT_name_len = len(name, kind=C_INT)
        SHT_value_cdesc%base_addr = C_LOC(value)
        SHT_value_cdesc%type = SH_TYPE_INT
        ! SHT_value_cdesc%elem_len = C_SIZEOF()
        SHT_value_cdesc%size = 1
        SHT_value_cdesc%rank = 0
        call c_get_scalar1_0_bufferify(name, SHT_name_len, &
            SHT_value_cdesc)
        ! splicer end function.get_scalar1_0
    end subroutine get_scalar1_0

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  void GetScalar1
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! ----------------------------------------
    ! Argument:  std::string & name +intent(in)
    ! Attrs:     +api(buf)+intent(in)
    ! Exact:     f_in_string_&_buf
    ! Attrs:     +api(buf)+intent(in)
    ! Exact:     f_in_string_&_buf
    ! ----------------------------------------
    ! Argument:  double * value +cdesc+intent(out)+rank(0)
    ! Attrs:     +api(cdesc)+intent(out)
    ! Exact:     f_out_native_*_cdesc
    ! Attrs:     +api(cdesc)+intent(out)
    ! Exact:     f_out_native_*_cdesc
    !>
    !! Create several Fortran generic functions which call a single
    !! C wrapper that checks the type of the Fortran argument
    !! and calls the correct templated function.
    !! Adding the string argument forces a bufferified function
    !! to be create.
    !! Argument value is intent(in). The pointer does not change, only
    !! the pointee.
    !! XXX - The function is virtual in the sense that GetScalar1 should
    !! not need to exist but there is no way, yet, to avoid wrapping the
    !! non-bufferify function.
    !<
    subroutine get_scalar1_1(name, value)
        use iso_c_binding, only : C_DOUBLE, C_INT, C_LOC
        character(len=*), intent(IN) :: name
        real(C_DOUBLE), intent(OUT), target :: value
        ! splicer begin function.get_scalar1_1
        integer(C_INT) SHT_name_len
        type(CDE_SHROUD_array) :: SHT_value_cdesc
        SHT_name_len = len(name, kind=C_INT)
        SHT_value_cdesc%base_addr = C_LOC(value)
        SHT_value_cdesc%type = SH_TYPE_DOUBLE
        ! SHT_value_cdesc%elem_len = C_SIZEOF()
        SHT_value_cdesc%size = 1
        SHT_value_cdesc%rank = 0
        call c_get_scalar1_1_bufferify(name, SHT_name_len, &
            SHT_value_cdesc)
        ! splicer end function.get_scalar1_1
    end subroutine get_scalar1_1

    ! Generated by cxx_template
    ! ----------------------------------------
    ! Function:  int getData
    ! Attrs:     +intent(function)
    ! Exact:     f_function_native_scalar
    ! Attrs:     +intent(function)
    ! Exact:     f_function_native_scalar
    !>
    !! Wrapper for function which is templated on the return value.
    !<
    function get_data_int() &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        integer(C_INT) :: SHT_rv
        ! splicer begin function.get_data_int
        SHT_rv = c_get_data_int()
        ! splicer end function.get_data_int
    end function get_data_int

    ! Generated by cxx_template
    ! ----------------------------------------
    ! Function:  double getData
    ! Attrs:     +intent(function)
    ! Exact:     f_function_native_scalar
    ! Attrs:     +intent(function)
    ! Exact:     f_function_native_scalar
    !>
    !! Wrapper for function which is templated on the return value.
    !<
    function get_data_double() &
            result(SHT_rv)
        use iso_c_binding, only : C_DOUBLE
        real(C_DOUBLE) :: SHT_rv
        ! splicer begin function.get_data_double
        SHT_rv = c_get_data_double()
        ! splicer end function.get_data_double
    end function get_data_double

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  void GetScalar2
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! ----------------------------------------
    ! Argument:  std::string & name +intent(in)
    ! Attrs:     +api(buf)+intent(in)
    ! Exact:     f_in_string_&_buf
    ! Attrs:     +api(buf)+intent(in)
    ! Exact:     f_in_string_&_buf
    ! ----------------------------------------
    ! Argument:  int * value +intent(out)
    ! Attrs:     +intent(out)
    ! Exact:     f_out_native_*
    ! Attrs:     +intent(out)
    ! Exact:     f_out_native_*
    !>
    !! Call a C++ function which is templated on the return value.
    !! Create a Fortran function with the result passed in as an
    !! argument.  Change the function call clause to directly call the
    !! wrapped templated function.  fstatements is required instead of
    !! splicer in order to get {stype} expanded.
    !<
    subroutine get_scalar2_0(name, value)
        use iso_c_binding, only : C_INT
        character(len=*), intent(IN) :: name
        integer(C_INT), intent(OUT) :: value
        ! splicer begin function.get_scalar2_0
        integer(C_INT) SHT_name_len
        SHT_name_len = len(name, kind=C_INT)
        value = c_get_data_int()
        ! splicer end function.get_scalar2_0
    end subroutine get_scalar2_0

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  void GetScalar2
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! ----------------------------------------
    ! Argument:  std::string & name +intent(in)
    ! Attrs:     +api(buf)+intent(in)
    ! Exact:     f_in_string_&_buf
    ! Attrs:     +api(buf)+intent(in)
    ! Exact:     f_in_string_&_buf
    ! ----------------------------------------
    ! Argument:  double * value +intent(out)
    ! Attrs:     +intent(out)
    ! Exact:     f_out_native_*
    ! Attrs:     +intent(out)
    ! Exact:     f_out_native_*
    !>
    !! Call a C++ function which is templated on the return value.
    !! Create a Fortran function with the result passed in as an
    !! argument.  Change the function call clause to directly call the
    !! wrapped templated function.  fstatements is required instead of
    !! splicer in order to get {stype} expanded.
    !<
    subroutine get_scalar2_1(name, value)
        use iso_c_binding, only : C_DOUBLE, C_INT
        character(len=*), intent(IN) :: name
        real(C_DOUBLE), intent(OUT) :: value
        ! splicer begin function.get_scalar2_1
        integer(C_INT) SHT_name_len
        SHT_name_len = len(name, kind=C_INT)
        value = c_get_data_double()
        ! splicer end function.get_scalar2_1
    end subroutine get_scalar2_1

    ! splicer begin additional_functions
    ! splicer end additional_functions

end module cdesc_mod
