! wrapfvectors.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2021, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapfvectors.f
!! \brief Shroud generated wrapper for vectors library
!<
! splicer begin file_top
! splicer end file_top
module vectors_mod
    use iso_c_binding, only : C_INT, C_LONG, C_NULL_PTR, C_PTR, C_SIZE_T
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top

    ! start helper capsule_data_helper
    ! helper capsule_data_helper
    type, bind(C) :: VEC_SHROUD_capsule_data
        type(C_PTR) :: addr = C_NULL_PTR  ! address of C++ memory
        integer(C_INT) :: idtor = 0       ! index of destructor
    end type VEC_SHROUD_capsule_data
    ! end helper capsule_data_helper

    ! start array_context
    ! helper array_context
    type, bind(C) :: VEC_SHROUD_array
        ! address of C++ memory
        type(VEC_SHROUD_capsule_data) :: cxx
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
    end type VEC_SHROUD_array
    ! end array_context

    ! ----------------------------------------
    ! Function:  int vector_sum
    ! Attrs:     +intent(result)
    ! Requested: c_native_scalar_result_buf
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  const std::vector<int> & arg +rank(1)+size(Sarg)
    ! Attrs:     +intent(in)
    ! Requested: c_vector_&_in_buf_native
    ! Match:     c_vector_in_buf
    ! start c_vector_sum_bufferify
    interface
        function c_vector_sum_bufferify(arg, Sarg) &
                result(SHT_rv) &
                bind(C, name="VEC_vector_sum_bufferify")
            use iso_c_binding, only : C_INT, C_LONG
            implicit none
            integer(C_INT), intent(IN) :: arg(*)
            integer(C_LONG), value, intent(IN) :: Sarg
            integer(C_INT) :: SHT_rv
        end function c_vector_sum_bufferify
    end interface
    ! end c_vector_sum_bufferify

    ! ----------------------------------------
    ! Function:  void vector_iota_out
    ! Requested: c_void_scalar_result_buf
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  std::vector<int> & arg +context(Darg)+intent(out)+rank(1)
    ! Attrs:     +intent(out)
    ! Requested: c_vector_&_out_buf_native
    ! Match:     c_vector_out_buf
    ! start c_vector_iota_out_bufferify
    interface
        subroutine c_vector_iota_out_bufferify(Darg) &
                bind(C, name="VEC_vector_iota_out_bufferify")
            import :: VEC_SHROUD_array
            implicit none
            type(VEC_SHROUD_array), intent(INOUT) :: Darg
        end subroutine c_vector_iota_out_bufferify
    end interface
    ! end c_vector_iota_out_bufferify

    ! ----------------------------------------
    ! Function:  void vector_iota_out_with_num
    ! Requested: c_void_scalar_result_buf
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  std::vector<int> & arg +context(Darg)+intent(out)+rank(1)
    ! Attrs:     +intent(out)
    ! Requested: c_vector_&_out_buf_native
    ! Match:     c_vector_out_buf
    ! start c_vector_iota_out_with_num_bufferify
    interface
        function c_vector_iota_out_with_num_bufferify(Darg) &
                result(SHT_rv) &
                bind(C, name="VEC_vector_iota_out_with_num_bufferify")
            use iso_c_binding, only : C_LONG
            import :: VEC_SHROUD_array
            implicit none
            type(VEC_SHROUD_array), intent(INOUT) :: Darg
            integer(C_LONG) SHT_rv
        end function c_vector_iota_out_with_num_bufferify
    end interface
    ! end c_vector_iota_out_with_num_bufferify

    ! ----------------------------------------
    ! Function:  void vector_iota_out_with_num2
    ! Requested: c_void_scalar_result_buf
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  std::vector<int> & arg +context(Darg)+intent(out)+rank(1)
    ! Attrs:     +intent(out)
    ! Requested: c_vector_&_out_buf_native
    ! Match:     c_vector_out_buf
    ! start c_vector_iota_out_with_num2_bufferify
    interface
        subroutine c_vector_iota_out_with_num2_bufferify(Darg) &
                bind(C, name="VEC_vector_iota_out_with_num2_bufferify")
            import :: VEC_SHROUD_array
            implicit none
            type(VEC_SHROUD_array), intent(INOUT) :: Darg
        end subroutine c_vector_iota_out_with_num2_bufferify
    end interface
    ! end c_vector_iota_out_with_num2_bufferify

    ! ----------------------------------------
    ! Function:  void vector_iota_out_alloc
    ! Requested: c_void_scalar_result_buf
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  std::vector<int> & arg +context(Darg)+deref(allocatable)+intent(out)+rank(1)
    ! Attrs:     +deref(allocatable)+intent(out)
    ! Requested: c_vector_&_out_buf_allocatable_native
    ! Match:     c_vector_out_buf
    ! start c_vector_iota_out_alloc_bufferify
    interface
        subroutine c_vector_iota_out_alloc_bufferify(Darg) &
                bind(C, name="VEC_vector_iota_out_alloc_bufferify")
            import :: VEC_SHROUD_array
            implicit none
            type(VEC_SHROUD_array), intent(INOUT) :: Darg
        end subroutine c_vector_iota_out_alloc_bufferify
    end interface
    ! end c_vector_iota_out_alloc_bufferify

    ! ----------------------------------------
    ! Function:  void vector_iota_inout_alloc
    ! Requested: c_void_scalar_result_buf
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  std::vector<int> & arg +context(Darg)+deref(allocatable)+intent(inout)+rank(1)+size(Sarg)
    ! Attrs:     +deref(allocatable)+intent(inout)
    ! Requested: c_vector_&_inout_buf_allocatable_native
    ! Match:     c_vector_inout_buf
    ! start c_vector_iota_inout_alloc_bufferify
    interface
        subroutine c_vector_iota_inout_alloc_bufferify(arg, Sarg, Darg) &
                bind(C, name="VEC_vector_iota_inout_alloc_bufferify")
            use iso_c_binding, only : C_INT, C_LONG
            import :: VEC_SHROUD_array
            implicit none
            integer(C_INT), intent(INOUT) :: arg(*)
            integer(C_LONG), value, intent(IN) :: Sarg
            type(VEC_SHROUD_array), intent(INOUT) :: Darg
        end subroutine c_vector_iota_inout_alloc_bufferify
    end interface
    ! end c_vector_iota_inout_alloc_bufferify

    ! ----------------------------------------
    ! Function:  void vector_increment
    ! Requested: c_void_scalar_result_buf
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  std::vector<int> & arg +context(Darg)+rank(1)+size(Sarg)
    ! Attrs:     +intent(inout)
    ! Requested: c_vector_&_inout_buf_native
    ! Match:     c_vector_inout_buf
    interface
        subroutine c_vector_increment_bufferify(arg, Sarg, Darg) &
                bind(C, name="VEC_vector_increment_bufferify")
            use iso_c_binding, only : C_INT, C_LONG
            import :: VEC_SHROUD_array
            implicit none
            integer(C_INT), intent(INOUT) :: arg(*)
            integer(C_LONG), value, intent(IN) :: Sarg
            type(VEC_SHROUD_array), intent(INOUT) :: Darg
        end subroutine c_vector_increment_bufferify
    end interface

    ! ----------------------------------------
    ! Function:  void vector_iota_out_d
    ! Requested: c_void_scalar_result_buf
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  std::vector<double> & arg +context(Darg)+intent(out)+rank(1)
    ! Attrs:     +intent(out)
    ! Requested: c_vector_&_out_buf_native
    ! Match:     c_vector_out_buf
    interface
        subroutine c_vector_iota_out_d_bufferify(Darg) &
                bind(C, name="VEC_vector_iota_out_d_bufferify")
            import :: VEC_SHROUD_array
            implicit none
            type(VEC_SHROUD_array), intent(INOUT) :: Darg
        end subroutine c_vector_iota_out_d_bufferify
    end interface

    ! ----------------------------------------
    ! Function:  int vector_string_count
    ! Attrs:     +intent(result)
    ! Requested: c_native_scalar_result_buf
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  const std::vector<std::string> & arg +len(Narg)+rank(1)+size(Sarg)
    ! Attrs:     +intent(in)
    ! Requested: c_vector_&_in_buf_string
    ! Match:     c_vector_in_buf_string
    interface
        function c_vector_string_count_bufferify(arg, Sarg, Narg) &
                result(SHT_rv) &
                bind(C, name="VEC_vector_string_count_bufferify")
            use iso_c_binding, only : C_CHAR, C_INT, C_LONG
            implicit none
            character(kind=C_CHAR), intent(IN) :: arg(*)
            integer(C_LONG), value, intent(IN) :: Sarg
            integer(C_INT), value, intent(IN) :: Narg
            integer(C_INT) :: SHT_rv
        end function c_vector_string_count_bufferify
    end interface

    ! ----------------------------------------
    ! Function:  std::vector<int> ReturnVectorAlloc +rank(1)
    ! Attrs:     +deref(allocatable)+intent(result)
    ! Requested: c_vector_scalar_result_buf_allocatable
    ! Match:     c_vector_result_buf
    ! ----------------------------------------
    ! Argument:  int n +value
    ! Attrs:     +intent(in)
    ! Requested: c_native_scalar_in
    ! Match:     c_default
    interface
        subroutine c_return_vector_alloc_bufferify(SHT_rv, n) &
                bind(C, name="VEC_return_vector_alloc_bufferify")
            use iso_c_binding, only : C_INT
            import :: VEC_SHROUD_array
            implicit none
            type(VEC_SHROUD_array), intent(OUT) :: SHT_rv
            integer(C_INT), value, intent(IN) :: n
        end subroutine c_return_vector_alloc_bufferify
    end interface

    interface
        ! splicer begin additional_interfaces
        ! splicer end additional_interfaces
    end interface

    interface
        ! helper copy_array_double
        ! Copy contents of context into c_var.
        subroutine VEC_SHROUD_copy_array_double(context, c_var, c_var_size) &
            bind(C, name="VEC_ShroudCopyArray")
            use iso_c_binding, only : C_DOUBLE, C_SIZE_T
            import VEC_SHROUD_array
            type(VEC_SHROUD_array), intent(IN) :: context
            real(C_DOUBLE), intent(OUT) :: c_var(*)
            integer(C_SIZE_T), value :: c_var_size
        end subroutine VEC_SHROUD_copy_array_double
    end interface

    interface
        ! helper copy_array_int
        ! Copy contents of context into c_var.
        subroutine VEC_SHROUD_copy_array_int(context, c_var, c_var_size) &
            bind(C, name="VEC_ShroudCopyArray")
            use iso_c_binding, only : C_INT, C_SIZE_T
            import VEC_SHROUD_array
            type(VEC_SHROUD_array), intent(IN) :: context
            integer(C_INT), intent(OUT) :: c_var(*)
            integer(C_SIZE_T), value :: c_var_size
        end subroutine VEC_SHROUD_copy_array_int
    end interface

contains

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  int vector_sum
    ! Attrs:     +intent(result)
    ! Requested: f_native_scalar_result_buf
    ! Match:     f_default
    ! Attrs:     +intent(result)
    ! Requested: c_native_scalar_result_buf
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  const std::vector<int> & arg +rank(1)
    ! Attrs:     +intent(in)
    ! Requested: f_vector_&_in_buf_native
    ! Match:     f_default
    ! Argument:  const std::vector<int> & arg +rank(1)+size(Sarg)
    ! Attrs:     +intent(in)
    ! Requested: c_vector_&_in_buf_native
    ! Match:     c_vector_in_buf
    ! start vector_sum
    function vector_sum(arg) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT, C_LONG
        integer(C_INT), intent(IN) :: arg(:)
        integer(C_INT) :: SHT_rv
        ! splicer begin function.vector_sum
        SHT_rv = c_vector_sum_bufferify(arg, size(arg, kind=C_LONG))
        ! splicer end function.vector_sum
    end function vector_sum
    ! end vector_sum

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  void vector_iota_out
    ! Requested: f_subroutine
    ! Match:     f_default
    ! Requested: c
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  std::vector<int> & arg +intent(out)+rank(1)
    ! Attrs:     +intent(out)
    ! Requested: f_vector_&_out_buf_native
    ! Match:     f_vector_out
    ! Argument:  std::vector<int> & arg +context(Darg)+intent(out)+rank(1)
    ! Attrs:     +intent(out)
    ! Requested: c_vector_&_out_buf_native
    ! Match:     c_vector_out_buf
    !>
    !! \brief Copy vector into Fortran input array
    !!
    !<
    ! start vector_iota_out
    subroutine vector_iota_out(arg)
        use iso_c_binding, only : C_INT, C_SIZE_T
        integer(C_INT), intent(OUT) :: arg(:)
        type(VEC_SHROUD_array) :: Darg
        ! splicer begin function.vector_iota_out
        call c_vector_iota_out_bufferify(Darg)
        call VEC_SHROUD_copy_array_int(Darg, arg, &
            size(arg,kind=C_SIZE_T))
        ! splicer end function.vector_iota_out
    end subroutine vector_iota_out
    ! end vector_iota_out

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  void vector_iota_out_with_num
    ! Requested: f_subroutine
    ! Match:     f_default
    ! Requested: c
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  std::vector<int> & arg +intent(out)+rank(1)
    ! Attrs:     +intent(out)
    ! Requested: f_vector_&_out_buf_native
    ! Match:     f_vector_out
    ! Argument:  std::vector<int> & arg +context(Darg)+intent(out)+rank(1)
    ! Attrs:     +intent(out)
    ! Requested: c_vector_&_out_buf_native
    ! Match:     c_vector_out_buf
    !>
    !! \brief Copy vector into Fortran input array
    !!
    !! Convert subroutine in to a function and
    !! return the number of items copied into argument
    !! by setting fstatements for both C and Fortran.
    !<
    ! start vector_iota_out_with_num
    function vector_iota_out_with_num(arg) &
            result(num)
        use iso_c_binding, only : C_INT, C_LONG, C_SIZE_T
        integer(C_INT), intent(OUT) :: arg(:)
        type(VEC_SHROUD_array) :: Darg
        ! splicer begin function.vector_iota_out_with_num
        integer(C_LONG) :: num
        num = c_vector_iota_out_with_num_bufferify(Darg)
        call VEC_SHROUD_copy_array_int(Darg, arg, &
            size(arg,kind=C_SIZE_T))
        ! splicer end function.vector_iota_out_with_num
    end function vector_iota_out_with_num
    ! end vector_iota_out_with_num

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  void vector_iota_out_with_num2
    ! Requested: f_subroutine
    ! Match:     f_default
    ! Requested: c
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  std::vector<int> & arg +intent(out)+rank(1)
    ! Attrs:     +intent(out)
    ! Requested: f_vector_&_out_buf_native
    ! Match:     f_vector_out
    ! Argument:  std::vector<int> & arg +context(Darg)+intent(out)+rank(1)
    ! Attrs:     +intent(out)
    ! Requested: c_vector_&_out_buf_native
    ! Match:     c_vector_out_buf
    !>
    !! \brief Copy vector into Fortran input array
    !!
    !! Convert subroutine in to a function.
    !! Return the number of items copied into argument
    !! by setting fstatements for the Fortran wrapper only.
    !<
    ! start vector_iota_out_with_num2
    function vector_iota_out_with_num2(arg) &
            result(num)
        use iso_c_binding, only : C_INT, C_LONG, C_SIZE_T
        integer(C_INT), intent(OUT) :: arg(:)
        type(VEC_SHROUD_array) :: Darg
        ! splicer begin function.vector_iota_out_with_num2
        integer(C_LONG) :: num
        call c_vector_iota_out_with_num2_bufferify(Darg)
        call VEC_SHROUD_copy_array_int(Darg, arg, &
            size(arg,kind=C_SIZE_T))
        num = Darg%size
        ! splicer end function.vector_iota_out_with_num2
    end function vector_iota_out_with_num2
    ! end vector_iota_out_with_num2

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  void vector_iota_out_alloc
    ! Requested: f_subroutine
    ! Match:     f_default
    ! Requested: c
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  std::vector<int> & arg +deref(allocatable)+intent(out)+rank(1)
    ! Attrs:     +deref(allocatable)+intent(out)
    ! Requested: f_vector_&_out_buf_allocatable_native
    ! Match:     f_vector_out_allocatable
    ! Argument:  std::vector<int> & arg +context(Darg)+deref(allocatable)+intent(out)+rank(1)
    ! Attrs:     +deref(allocatable)+intent(out)
    ! Requested: c_vector_&_out_buf_allocatable_native
    ! Match:     c_vector_out_buf
    !>
    !! \brief Copy vector into Fortran allocatable array
    !!
    !<
    ! start vector_iota_out_alloc
    subroutine vector_iota_out_alloc(arg)
        use iso_c_binding, only : C_INT, C_SIZE_T
        integer(C_INT), intent(OUT), allocatable :: arg(:)
        type(VEC_SHROUD_array) :: Darg
        ! splicer begin function.vector_iota_out_alloc
        call c_vector_iota_out_alloc_bufferify(Darg)
        allocate(arg(Darg%size))
        call VEC_SHROUD_copy_array_int(Darg, arg, &
            size(arg,kind=C_SIZE_T))
        ! splicer end function.vector_iota_out_alloc
    end subroutine vector_iota_out_alloc
    ! end vector_iota_out_alloc

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  void vector_iota_inout_alloc
    ! Requested: f_subroutine
    ! Match:     f_default
    ! Requested: c
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  std::vector<int> & arg +deref(allocatable)+intent(inout)+rank(1)
    ! Attrs:     +deref(allocatable)+intent(inout)
    ! Requested: f_vector_&_inout_buf_allocatable_native
    ! Match:     f_vector_inout_allocatable
    ! Argument:  std::vector<int> & arg +context(Darg)+deref(allocatable)+intent(inout)+rank(1)+size(Sarg)
    ! Attrs:     +deref(allocatable)+intent(inout)
    ! Requested: c_vector_&_inout_buf_allocatable_native
    ! Match:     c_vector_inout_buf
    !>
    !! \brief Copy vector into Fortran allocatable array
    !!
    !<
    ! start vector_iota_inout_alloc
    subroutine vector_iota_inout_alloc(arg)
        use iso_c_binding, only : C_INT, C_LONG, C_SIZE_T
        integer(C_INT), intent(INOUT), allocatable :: arg(:)
        type(VEC_SHROUD_array) :: Darg
        ! splicer begin function.vector_iota_inout_alloc
        call c_vector_iota_inout_alloc_bufferify(arg, &
            size(arg, kind=C_LONG), Darg)
        if (allocated(arg)) deallocate(arg)
        allocate(arg(Darg%size))
        call VEC_SHROUD_copy_array_int(Darg, arg, &
            size(arg,kind=C_SIZE_T))
        ! splicer end function.vector_iota_inout_alloc
    end subroutine vector_iota_inout_alloc
    ! end vector_iota_inout_alloc

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  void vector_increment
    ! Requested: f_subroutine
    ! Match:     f_default
    ! Requested: c
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  std::vector<int> & arg +rank(1)
    ! Attrs:     +intent(inout)
    ! Requested: f_vector_&_inout_buf_native
    ! Match:     f_vector_inout
    ! Argument:  std::vector<int> & arg +context(Darg)+rank(1)+size(Sarg)
    ! Attrs:     +intent(inout)
    ! Requested: c_vector_&_inout_buf_native
    ! Match:     c_vector_inout_buf
    subroutine vector_increment(arg)
        use iso_c_binding, only : C_INT, C_LONG, C_SIZE_T
        integer(C_INT), intent(INOUT) :: arg(:)
        type(VEC_SHROUD_array) :: Darg
        ! splicer begin function.vector_increment
        call c_vector_increment_bufferify(arg, size(arg, kind=C_LONG), &
            Darg)
        call VEC_SHROUD_copy_array_int(Darg, arg, &
            size(arg,kind=C_SIZE_T))
        ! splicer end function.vector_increment
    end subroutine vector_increment

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  void vector_iota_out_d
    ! Requested: f_subroutine
    ! Match:     f_default
    ! Requested: c
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  std::vector<double> & arg +intent(out)+rank(1)
    ! Attrs:     +intent(out)
    ! Requested: f_vector_&_out_buf_native
    ! Match:     f_vector_out
    ! Argument:  std::vector<double> & arg +context(Darg)+intent(out)+rank(1)
    ! Attrs:     +intent(out)
    ! Requested: c_vector_&_out_buf_native
    ! Match:     c_vector_out_buf
    !>
    !! \brief Copy vector into Fortran input array
    !!
    !<
    subroutine vector_iota_out_d(arg)
        use iso_c_binding, only : C_DOUBLE, C_SIZE_T
        real(C_DOUBLE), intent(OUT) :: arg(:)
        type(VEC_SHROUD_array) :: Darg
        ! splicer begin function.vector_iota_out_d
        call c_vector_iota_out_d_bufferify(Darg)
        call VEC_SHROUD_copy_array_double(Darg, arg, &
            size(arg,kind=C_SIZE_T))
        ! splicer end function.vector_iota_out_d
    end subroutine vector_iota_out_d

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  int vector_string_count
    ! Attrs:     +intent(result)
    ! Requested: f_native_scalar_result_buf
    ! Match:     f_default
    ! Attrs:     +intent(result)
    ! Requested: c_native_scalar_result_buf
    ! Match:     c_default
    ! ----------------------------------------
    ! Argument:  const std::vector<std::string> & arg +rank(1)
    ! Attrs:     +intent(in)
    ! Requested: f_vector_&_in_buf_string
    ! Match:     f_default
    ! Argument:  const std::vector<std::string> & arg +len(Narg)+rank(1)+size(Sarg)
    ! Attrs:     +intent(in)
    ! Requested: c_vector_&_in_buf_string
    ! Match:     c_vector_in_buf_string
    !>
    !! \brief count number of underscore in vector of strings
    !!
    !<
    function vector_string_count(arg) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT, C_LONG
        character(len=*), intent(IN) :: arg(:)
        integer(C_INT) :: SHT_rv
        ! splicer begin function.vector_string_count
        SHT_rv = c_vector_string_count_bufferify(arg, &
            size(arg, kind=C_LONG), len(arg, kind=C_INT))
        ! splicer end function.vector_string_count
    end function vector_string_count

    ! Generated by arg_to_buffer
    ! ----------------------------------------
    ! Function:  std::vector<int> ReturnVectorAlloc +rank(1)
    ! Attrs:     +deref(allocatable)+intent(result)
    ! Requested: f_vector_scalar_result_buf_allocatable
    ! Match:     f_vector_result_buf_allocatable
    ! Attrs:     +deref(allocatable)+intent(result)
    ! Requested: c_vector_scalar_result_buf_allocatable
    ! Match:     c_vector_result_buf
    ! ----------------------------------------
    ! Argument:  int n +value
    ! Attrs:     +intent(in)
    ! Requested: f_native_scalar_in
    ! Match:     f_default
    ! Attrs:     +intent(in)
    ! Requested: c_native_scalar_in
    ! Match:     c_default
    !>
    !! Implement iota function.
    !! Return a vector as an ALLOCATABLE array.
    !! Copy results into the new array.
    !<
    function return_vector_alloc(n) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT, C_SIZE_T
        integer(C_INT), allocatable :: SHT_rv(:)
        integer(C_INT), value, intent(IN) :: n
        ! splicer begin function.return_vector_alloc
        type(VEC_SHROUD_array) :: SHT_rv_temp0
        call c_return_vector_alloc_bufferify(SHT_rv_temp0, n)
        allocate(SHT_rv(SHT_rv_temp0%size))
        call VEC_SHROUD_copy_array_int(SHT_rv_temp0, SHT_rv, &
            size(SHT_rv,kind=C_SIZE_T))
        ! splicer end function.return_vector_alloc
    end function return_vector_alloc

    ! splicer begin additional_functions
    ! splicer end additional_functions

end module vectors_mod
