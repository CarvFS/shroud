! wrapftypedefs.f
! This file is generated by Shroud nowrite-version. Do not edit.
! Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
! other Shroud Project Developers.
! See the top-level COPYRIGHT file for details.
!
! SPDX-License-Identifier: (BSD-3-Clause)
!
!>
!! \file wrapftypedefs.f
!! \brief Shroud generated wrapper for typedefs library
!<
! splicer begin file_top
! splicer end file_top
module typedefs_mod
    use iso_c_binding, only : C_DOUBLE, C_INT, C_INT32_T, C_INT64_T
    ! splicer begin module_use
    ! splicer end module_use
    implicit none

    ! splicer begin module_top
    ! splicer end module_top

    ! start typedef TypeID
    ! typedef TypeID
    ! splicer begin typedef.TypeID
    integer, parameter :: type_id = C_INT
    ! splicer end typedef.TypeID
    ! end typedef TypeID

    ! start typedef IndexType
    ! typedef IndexType
    ! splicer begin typedef.IndexType
#if defined(USE_64BIT_INDEXTYPE)
    integer, parameter :: INDEX_TYPE = C_INT64_T
#else
    integer, parameter :: INDEX_TYPE = C_INT32_T
#endif
    ! splicer end typedef.IndexType
    ! end typedef IndexType


    ! start derived-type struct1_rename
    type, bind(C) :: struct1_rename
        integer(C_INT) :: i
        real(C_DOUBLE) :: d
    end type struct1_rename
    ! end derived-type struct1_rename

    ! ----------------------------------------
    ! Function:  TypeID typefunc
    ! Attrs:     +intent(function)
    ! Requested: c_function_native_scalar
    ! Match:     c_function
    ! ----------------------------------------
    ! Argument:  TypeID arg +value
    ! Attrs:     +intent(in)
    ! Requested: c_in_native_scalar
    ! Match:     c_default
    ! start typefunc
    interface
        function typefunc(arg) &
                result(SHT_rv) &
                bind(C, name="TYP_typefunc")
            import :: type_id
            implicit none
            integer(type_id), value, intent(IN) :: arg
            integer(type_id) :: SHT_rv
        end function typefunc
    end interface
    ! end typefunc

    ! ----------------------------------------
    ! Function:  void typestruct
    ! Attrs:     +intent(subroutine)
    ! Requested: c_subroutine_void_scalar
    ! Match:     c_subroutine
    ! ----------------------------------------
    ! Argument:  Struct1Rename * arg1
    ! Attrs:     +intent(inout)
    ! Requested: c_inout_struct_*
    ! Match:     c_inout_struct
    ! start typestruct
    interface
        subroutine typestruct(arg1) &
                bind(C, name="TYP_typestruct")
            import :: struct1_rename
            implicit none
            type(struct1_rename), intent(INOUT) :: arg1
        end subroutine typestruct
    end interface
    ! end typestruct

    ! ----------------------------------------
    ! Function:  int returnBytesForIndexType
    ! Attrs:     +intent(function)
    ! Requested: c_function_native_scalar
    ! Match:     c_function
    ! ----------------------------------------
    ! Argument:  IndexType arg +value
    ! Attrs:     +intent(in)
    ! Requested: c_in_native_scalar
    ! Match:     c_default
    ! start return_bytes_for_index_type
    interface
        function return_bytes_for_index_type(arg) &
                result(SHT_rv) &
                bind(C, name="TYP_returnBytesForIndexType")
            use iso_c_binding, only : C_INT
            import :: index_type
            implicit none
            integer(index_type), value, intent(IN) :: arg
            integer(C_INT) :: SHT_rv
        end function return_bytes_for_index_type
    end interface
    ! end return_bytes_for_index_type

    interface
        ! splicer begin additional_interfaces
        ! splicer end additional_interfaces
    end interface

contains

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  TypeID typefunc
    ! Attrs:     +intent(function)
    ! Requested: f_function_native_scalar
    ! Match:     f_function
    ! Attrs:     +intent(function)
    ! Requested: c_function_native_scalar
    ! Match:     c_function
    ! ----------------------------------------
    ! Argument:  TypeID arg +value
    ! Attrs:     +intent(in)
    ! Requested: f_in_native_scalar
    ! Match:     f_default
    ! Attrs:     +intent(in)
    ! Requested: c_in_native_scalar
    ! Match:     c_default
    ! start typefunc
    function typefunc(arg) &
            result(SHT_rv)
        integer(type_id), value, intent(IN) :: arg
        integer(type_id) :: SHT_rv
        ! splicer begin function.typefunc
        SHT_rv = c_typefunc(arg)
        ! splicer end function.typefunc
    end function typefunc
    ! end typefunc
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  void typestruct
    ! Attrs:     +intent(subroutine)
    ! Exact:     f_subroutine
    ! Attrs:     +intent(subroutine)
    ! Exact:     c_subroutine
    ! ----------------------------------------
    ! Argument:  Struct1Rename * arg1
    ! Attrs:     +intent(inout)
    ! Requested: f_inout_struct_*
    ! Match:     f_default
    ! Attrs:     +intent(inout)
    ! Requested: c_inout_struct_*
    ! Match:     c_inout_struct
    ! start typestruct
    subroutine typestruct(arg1)
        type(struct1_rename), intent(INOUT) :: arg1
        ! splicer begin function.typestruct
        call c_typestruct(arg1)
        ! splicer end function.typestruct
    end subroutine typestruct
    ! end typestruct
#endif

#if 0
    ! Only the interface is needed
    ! ----------------------------------------
    ! Function:  int returnBytesForIndexType
    ! Attrs:     +intent(function)
    ! Requested: f_function_native_scalar
    ! Match:     f_function
    ! Attrs:     +intent(function)
    ! Requested: c_function_native_scalar
    ! Match:     c_function
    ! ----------------------------------------
    ! Argument:  IndexType arg +value
    ! Attrs:     +intent(in)
    ! Requested: f_in_native_scalar
    ! Match:     f_default
    ! Attrs:     +intent(in)
    ! Requested: c_in_native_scalar
    ! Match:     c_default
    ! start return_bytes_for_index_type
    function return_bytes_for_index_type(arg) &
            result(SHT_rv)
        use iso_c_binding, only : C_INT
        integer(index_type), value, intent(IN) :: arg
        integer(C_INT) :: SHT_rv
        ! splicer begin function.return_bytes_for_index_type
        SHT_rv = c_return_bytes_for_index_type(arg)
        ! splicer end function.return_bytes_for_index_type
    end function return_bytes_for_index_type
    ! end return_bytes_for_index_type
#endif

    ! splicer begin additional_functions
    ! splicer end additional_functions

end module typedefs_mod