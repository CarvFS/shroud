! wrapftypes.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapftypes.f
!! \brief Shroud generated wrapper for types library
!<
! splicer begin file_top
! splicer end file_top
module types_mod
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top

    interface

        ! ----------------------------------------
        ! Function:  short short_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  short arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function short_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_short_func")
            use iso_c_binding, only : C_SHORT
            implicit none
            integer(C_SHORT), value, intent(IN) :: arg1
            integer(C_SHORT) :: SHT_rv
        end function short_func

        ! ----------------------------------------
        ! Function:  int int_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  int arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function int_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_int_func")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT), value, intent(IN) :: arg1
            integer(C_INT) :: SHT_rv
        end function int_func

        ! ----------------------------------------
        ! Function:  long long_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  long arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function long_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_long_func")
            use iso_c_binding, only : C_LONG
            implicit none
            integer(C_LONG), value, intent(IN) :: arg1
            integer(C_LONG) :: SHT_rv
        end function long_func

        ! ----------------------------------------
        ! Function:  long long long_long_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  long long arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function long_long_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_long_long_func")
            use iso_c_binding, only : C_LONG_LONG
            implicit none
            integer(C_LONG_LONG), value, intent(IN) :: arg1
            integer(C_LONG_LONG) :: SHT_rv
        end function long_long_func

        ! ----------------------------------------
        ! Function:  short int short_int_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  short int arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function short_int_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_short_int_func")
            use iso_c_binding, only : C_SHORT
            implicit none
            integer(C_SHORT), value, intent(IN) :: arg1
            integer(C_SHORT) :: SHT_rv
        end function short_int_func

        ! ----------------------------------------
        ! Function:  long int long_int_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  long int arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function long_int_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_long_int_func")
            use iso_c_binding, only : C_LONG
            implicit none
            integer(C_LONG), value, intent(IN) :: arg1
            integer(C_LONG) :: SHT_rv
        end function long_int_func

        ! ----------------------------------------
        ! Function:  long long int long_long_int_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  long long int arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function long_long_int_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_long_long_int_func")
            use iso_c_binding, only : C_LONG_LONG
            implicit none
            integer(C_LONG_LONG), value, intent(IN) :: arg1
            integer(C_LONG_LONG) :: SHT_rv
        end function long_long_int_func

        ! ----------------------------------------
        ! Function:  unsigned unsigned_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  unsigned arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function unsigned_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_unsigned_func")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT), value, intent(IN) :: arg1
            integer(C_INT) :: SHT_rv
        end function unsigned_func

        ! ----------------------------------------
        ! Function:  unsigned short ushort_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  unsigned short arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function ushort_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_ushort_func")
            use iso_c_binding, only : C_SHORT
            implicit none
            integer(C_SHORT), value, intent(IN) :: arg1
            integer(C_SHORT) :: SHT_rv
        end function ushort_func

        ! ----------------------------------------
        ! Function:  unsigned int uint_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  unsigned int arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function uint_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_uint_func")
            use iso_c_binding, only : C_INT
            implicit none
            integer(C_INT), value, intent(IN) :: arg1
            integer(C_INT) :: SHT_rv
        end function uint_func

        ! ----------------------------------------
        ! Function:  unsigned long ulong_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  unsigned long arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function ulong_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_ulong_func")
            use iso_c_binding, only : C_LONG
            implicit none
            integer(C_LONG), value, intent(IN) :: arg1
            integer(C_LONG) :: SHT_rv
        end function ulong_func

        ! ----------------------------------------
        ! Function:  unsigned long long ulong_long_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  unsigned long long arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function ulong_long_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_ulong_long_func")
            use iso_c_binding, only : C_LONG_LONG
            implicit none
            integer(C_LONG_LONG), value, intent(IN) :: arg1
            integer(C_LONG_LONG) :: SHT_rv
        end function ulong_long_func

        ! ----------------------------------------
        ! Function:  unsigned long int ulong_int_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  unsigned long int arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function ulong_int_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_ulong_int_func")
            use iso_c_binding, only : C_LONG
            implicit none
            integer(C_LONG), value, intent(IN) :: arg1
            integer(C_LONG) :: SHT_rv
        end function ulong_int_func

        ! ----------------------------------------
        ! Function:  int8_t int8_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  int8_t arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function int8_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_int8_func")
            use iso_c_binding, only : C_INT8_T
            implicit none
            integer(C_INT8_T), value, intent(IN) :: arg1
            integer(C_INT8_T) :: SHT_rv
        end function int8_func

        ! ----------------------------------------
        ! Function:  int16_t int16_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  int16_t arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function int16_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_int16_func")
            use iso_c_binding, only : C_INT16_T
            implicit none
            integer(C_INT16_T), value, intent(IN) :: arg1
            integer(C_INT16_T) :: SHT_rv
        end function int16_func

        ! ----------------------------------------
        ! Function:  int32_t int32_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  int32_t arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function int32_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_int32_func")
            use iso_c_binding, only : C_INT32_T
            implicit none
            integer(C_INT32_T), value, intent(IN) :: arg1
            integer(C_INT32_T) :: SHT_rv
        end function int32_func

        ! ----------------------------------------
        ! Function:  int64_t int64_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  int64_t arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function int64_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_int64_func")
            use iso_c_binding, only : C_INT64_T
            implicit none
            integer(C_INT64_T), value, intent(IN) :: arg1
            integer(C_INT64_T) :: SHT_rv
        end function int64_func

        ! ----------------------------------------
        ! Function:  uint8_t uint8_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  uint8_t arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function uint8_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_uint8_func")
            use iso_c_binding, only : C_INT8_T
            implicit none
            integer(C_INT8_T), value, intent(IN) :: arg1
            integer(C_INT8_T) :: SHT_rv
        end function uint8_func

        ! ----------------------------------------
        ! Function:  uint16_t uint16_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  uint16_t arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function uint16_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_uint16_func")
            use iso_c_binding, only : C_INT16_T
            implicit none
            integer(C_INT16_T), value, intent(IN) :: arg1
            integer(C_INT16_T) :: SHT_rv
        end function uint16_func

        ! ----------------------------------------
        ! Function:  uint32_t uint32_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  uint32_t arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function uint32_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_uint32_func")
            use iso_c_binding, only : C_INT32_T
            implicit none
            integer(C_INT32_T), value, intent(IN) :: arg1
            integer(C_INT32_T) :: SHT_rv
        end function uint32_func

        ! ----------------------------------------
        ! Function:  uint64_t uint64_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  uint64_t arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function uint64_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_uint64_func")
            use iso_c_binding, only : C_INT64_T
            implicit none
            integer(C_INT64_T), value, intent(IN) :: arg1
            integer(C_INT64_T) :: SHT_rv
        end function uint64_func

        ! ----------------------------------------
        ! Function:  size_t size_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_native_scalar
        ! ----------------------------------------
        ! Argument:  size_t arg1 +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_native_scalar
        function size_func(arg1) &
                result(SHT_rv) &
                bind(C, name="TYP_size_func")
            use iso_c_binding, only : C_SIZE_T
            implicit none
            integer(C_SIZE_T), value, intent(IN) :: arg1
            integer(C_SIZE_T) :: SHT_rv
        end function size_func

        ! ----------------------------------------
        ! Function:  bool bool_func
        ! Attrs:     +intent(function)
        ! Statement: f_function_bool_scalar
        ! ----------------------------------------
        ! Argument:  bool arg +value
        ! Attrs:     +intent(in)
        ! Statement: f_in_bool_scalar
        function c_bool_func(arg) &
                result(SHT_rv) &
                bind(C, name="TYP_bool_func")
            use iso_c_binding, only : C_BOOL
            implicit none
            logical(C_BOOL), value, intent(IN) :: arg
            logical(C_BOOL) :: SHT_rv
        end function c_bool_func

        ! ----------------------------------------
        ! Function:  bool returnBoolAndOthers
        ! Attrs:     +intent(function)
        ! Statement: f_function_bool_scalar
        ! ----------------------------------------
        ! Argument:  int * flag +intent(out)
        ! Attrs:     +intent(out)
        ! Statement: f_out_native_*
        function c_return_bool_and_others(flag) &
                result(SHT_rv) &
                bind(C, name="TYP_returnBoolAndOthers")
            use iso_c_binding, only : C_BOOL, C_INT
            implicit none
            integer(C_INT), intent(OUT) :: flag
            logical(C_BOOL) :: SHT_rv
        end function c_return_bool_and_others
    end interface

    ! splicer begin additional_declarations
    ! splicer end additional_declarations

contains

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  short short_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  short arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function short_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_SHORT
        integer(C_SHORT), value, intent(IN) :: arg1
        integer(C_SHORT) :: SHT_rv
        ! splicer begin function.short_func
        SHT_rv = c_short_func(arg1)
        ! splicer end function.short_func
    end function short_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  int int_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  int arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function int_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        integer(C_INT), value, intent(IN) :: arg1
        integer(C_INT) :: SHT_rv
        ! splicer begin function.int_func
        SHT_rv = c_int_func(arg1)
        ! splicer end function.int_func
    end function int_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  long long_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  long arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function long_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_LONG
        integer(C_LONG), value, intent(IN) :: arg1
        integer(C_LONG) :: SHT_rv
        ! splicer begin function.long_func
        SHT_rv = c_long_func(arg1)
        ! splicer end function.long_func
    end function long_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  long long long_long_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  long long arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function long_long_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_LONG_LONG
        integer(C_LONG_LONG), value, intent(IN) :: arg1
        integer(C_LONG_LONG) :: SHT_rv
        ! splicer begin function.long_long_func
        SHT_rv = c_long_long_func(arg1)
        ! splicer end function.long_long_func
    end function long_long_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  short int short_int_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  short int arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function short_int_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_SHORT
        integer(C_SHORT), value, intent(IN) :: arg1
        integer(C_SHORT) :: SHT_rv
        ! splicer begin function.short_int_func
        SHT_rv = c_short_int_func(arg1)
        ! splicer end function.short_int_func
    end function short_int_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  long int long_int_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  long int arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function long_int_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_LONG
        integer(C_LONG), value, intent(IN) :: arg1
        integer(C_LONG) :: SHT_rv
        ! splicer begin function.long_int_func
        SHT_rv = c_long_int_func(arg1)
        ! splicer end function.long_int_func
    end function long_int_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  long long int long_long_int_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  long long int arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function long_long_int_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_LONG_LONG
        integer(C_LONG_LONG), value, intent(IN) :: arg1
        integer(C_LONG_LONG) :: SHT_rv
        ! splicer begin function.long_long_int_func
        SHT_rv = c_long_long_int_func(arg1)
        ! splicer end function.long_long_int_func
    end function long_long_int_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  unsigned unsigned_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  unsigned arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function unsigned_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        integer(C_INT), value, intent(IN) :: arg1
        integer(C_INT) :: SHT_rv
        ! splicer begin function.unsigned_func
        SHT_rv = c_unsigned_func(arg1)
        ! splicer end function.unsigned_func
    end function unsigned_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  unsigned short ushort_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  unsigned short arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function ushort_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_SHORT
        integer(C_SHORT), value, intent(IN) :: arg1
        integer(C_SHORT) :: SHT_rv
        ! splicer begin function.ushort_func
        SHT_rv = c_ushort_func(arg1)
        ! splicer end function.ushort_func
    end function ushort_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  unsigned int uint_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  unsigned int arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function uint_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        integer(C_INT), value, intent(IN) :: arg1
        integer(C_INT) :: SHT_rv
        ! splicer begin function.uint_func
        SHT_rv = c_uint_func(arg1)
        ! splicer end function.uint_func
    end function uint_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  unsigned long ulong_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  unsigned long arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function ulong_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_LONG
        integer(C_LONG), value, intent(IN) :: arg1
        integer(C_LONG) :: SHT_rv
        ! splicer begin function.ulong_func
        SHT_rv = c_ulong_func(arg1)
        ! splicer end function.ulong_func
    end function ulong_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  unsigned long long ulong_long_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  unsigned long long arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function ulong_long_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_LONG_LONG
        integer(C_LONG_LONG), value, intent(IN) :: arg1
        integer(C_LONG_LONG) :: SHT_rv
        ! splicer begin function.ulong_long_func
        SHT_rv = c_ulong_long_func(arg1)
        ! splicer end function.ulong_long_func
    end function ulong_long_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  unsigned long int ulong_int_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  unsigned long int arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function ulong_int_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_LONG
        integer(C_LONG), value, intent(IN) :: arg1
        integer(C_LONG) :: SHT_rv
        ! splicer begin function.ulong_int_func
        SHT_rv = c_ulong_int_func(arg1)
        ! splicer end function.ulong_int_func
    end function ulong_int_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  int8_t int8_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  int8_t arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function int8_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT8_T
        integer(C_INT8_T), value, intent(IN) :: arg1
        integer(C_INT8_T) :: SHT_rv
        ! splicer begin function.int8_func
        SHT_rv = c_int8_func(arg1)
        ! splicer end function.int8_func
    end function int8_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  int16_t int16_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  int16_t arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function int16_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT16_T
        integer(C_INT16_T), value, intent(IN) :: arg1
        integer(C_INT16_T) :: SHT_rv
        ! splicer begin function.int16_func
        SHT_rv = c_int16_func(arg1)
        ! splicer end function.int16_func
    end function int16_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  int32_t int32_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  int32_t arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function int32_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT32_T
        integer(C_INT32_T), value, intent(IN) :: arg1
        integer(C_INT32_T) :: SHT_rv
        ! splicer begin function.int32_func
        SHT_rv = c_int32_func(arg1)
        ! splicer end function.int32_func
    end function int32_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  int64_t int64_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  int64_t arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function int64_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT64_T
        integer(C_INT64_T), value, intent(IN) :: arg1
        integer(C_INT64_T) :: SHT_rv
        ! splicer begin function.int64_func
        SHT_rv = c_int64_func(arg1)
        ! splicer end function.int64_func
    end function int64_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  uint8_t uint8_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  uint8_t arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function uint8_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT8_T
        integer(C_INT8_T), value, intent(IN) :: arg1
        integer(C_INT8_T) :: SHT_rv
        ! splicer begin function.uint8_func
        SHT_rv = c_uint8_func(arg1)
        ! splicer end function.uint8_func
    end function uint8_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  uint16_t uint16_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  uint16_t arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function uint16_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT16_T
        integer(C_INT16_T), value, intent(IN) :: arg1
        integer(C_INT16_T) :: SHT_rv
        ! splicer begin function.uint16_func
        SHT_rv = c_uint16_func(arg1)
        ! splicer end function.uint16_func
    end function uint16_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  uint32_t uint32_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  uint32_t arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function uint32_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT32_T
        integer(C_INT32_T), value, intent(IN) :: arg1
        integer(C_INT32_T) :: SHT_rv
        ! splicer begin function.uint32_func
        SHT_rv = c_uint32_func(arg1)
        ! splicer end function.uint32_func
    end function uint32_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  uint64_t uint64_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  uint64_t arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function uint64_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT64_T
        integer(C_INT64_T), value, intent(IN) :: arg1
        integer(C_INT64_T) :: SHT_rv
        ! splicer begin function.uint64_func
        SHT_rv = c_uint64_func(arg1)
        ! splicer end function.uint64_func
    end function uint64_func
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  size_t size_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_native_scalar
    ! ----------------------------------------
    ! Argument:  size_t arg1 +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_native_scalar
    function size_func(arg1) &
            result(SHT_rv)
        use iso_c_binding, only : C_SIZE_T
        integer(C_SIZE_T), value, intent(IN) :: arg1
        integer(C_SIZE_T) :: SHT_rv
        ! splicer begin function.size_func
        SHT_rv = c_size_func(arg1)
        ! splicer end function.size_func
    end function size_func
#endif

    ! ----------------------------------------
    ! Function:  bool bool_func
    ! Attrs:     +intent(function)
    ! Statement: f_function_bool_scalar
    ! ----------------------------------------
    ! Argument:  bool arg +value
    ! Attrs:     +intent(in)
    ! Statement: f_in_bool_scalar
    function bool_func(arg) &
            result(SHT_rv)
        use iso_c_binding, only : C_BOOL
        logical, value, intent(IN) :: arg
        logical :: SHT_rv
        ! splicer begin function.bool_func
        logical(C_BOOL) :: SHT_arg_cxx
        SHT_arg_cxx = arg  ! coerce to C_BOOL
        SHT_rv = c_bool_func(SHT_arg_cxx)
        ! splicer end function.bool_func
    end function bool_func

    ! ----------------------------------------
    ! Function:  bool returnBoolAndOthers
    ! Attrs:     +intent(function)
    ! Statement: f_function_bool_scalar
    ! ----------------------------------------
    ! Argument:  int * flag +intent(out)
    ! Attrs:     +intent(out)
    ! Statement: f_out_native_*
    !>
    !! \brief Function which returns bool with other intent(out) arguments
    !!
    !! Python treats bool differently since Py_BuildValue does not support
    !! bool until Python 3.3.
    !! Must create a PyObject with PyBool_FromLong then include that object
    !! in call to Py_BuildValue as type 'O'.  But since two return values
    !! are being created, function return and argument flag, rename first
    !! local C variable to avoid duplicate names in wrapper.
    !<
    function return_bool_and_others(flag) &
            result(SHT_rv)
        use iso_c_binding, only : C_BOOL, C_INT
        integer(C_INT), intent(OUT) :: flag
        logical :: SHT_rv
        ! splicer begin function.return_bool_and_others
        SHT_rv = c_return_bool_and_others(flag)
        ! splicer end function.return_bool_and_others
    end function return_bool_and_others

    ! splicer begin additional_functions
    ! splicer end additional_functions

end module types_mod
