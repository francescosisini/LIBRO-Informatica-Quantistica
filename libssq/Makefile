#************************************************************************
# Makefile for the C shared library
# Copyright (C) 2022  - Marco Cavallini - KOAN sas - Bergamo, Italy 
# SPDX-License-Identifier: GPL-3.0-or-later
#************************************************************************

CC = gcc  # C compiler
CFLAGS = -fPIC -Wall -Wextra -O2 -g  # C flags
LDFLAGS = -shared   # linking flags
RM = rm -f   # rm command
TARGET_LIB = libssq.so  # target lib

SRCS = libSSQ.c  # source files
OBJS = $(SRCS:.c=.o)

.PHONY: all
all: ${TARGET_LIB}

$(TARGET_LIB): $(OBJS)
	$(CC) ${LDFLAGS} -o $@ $^

$(SRCS:.c):%.c
	$(CC) $(CFLAGS) -MM $< >$@

.PHONY: clean
clean:
	-${RM} ${TARGET_LIB} ${OBJS}