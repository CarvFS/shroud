# Copyright (c) 2017-2023, Lawrence Livermore National Security, LLC and
# other Shroud Project Developers.
# See the top-level COPYRIGHT file for details.
#
# SPDX-License-Identifier: (BSD-3-Clause)
#
# #######################################################################
#
# run/struct-c
#
include $(top)/regression/run/defaults.mk

INCLUDE = \
    -I$(top)/regression/reference/struct-c \
    -I$(top)/regression/run/struct \
    -I$(top)/regression/run/fruit

VPATH = \
    $(top)/regression/reference/struct-c \
    $(top)/regression/run/struct \
    $(top)/regression/run/fruit

OBJS = \
    struct.o \
    wrapfstruct.o \
    wrapstruct.o \
    wrapCstruct_as_class.o \
    wrapCstruct_as_subclass.o \
    fruit.o \
    main.o

struct-c : $(OBJS)
	$(FC) $(FFLAGS) $^ -o $@ $(FLIBS)

clean :
	rm -f $(OBJS) *.mod struct-c

struct.o : struct.h
wrapstruct.o : wrapstruct.h struct.h
main.o : fruit.o wrapfstruct.o
