#************************************************************************
# Makefile for all the C examples
# Copyright (C) 2022  - Marco Cavallini - KOAN sas - Bergamo, Italy 
# SPDX-License-Identifier: GPL-3.0-or-later
#************************************************************************

CC = gcc
CFLAGS = -fPIC -Wall -Wextra -O2 -g -std=c99
LIBS=-lm

OUTPUTSSQ=libSSQ
OUTPUTA=main1
OUTPUTB=esercizio_1
OUTPUTC=esercizio_2
OUTPUTD=esercizio_3
OUTPUTPI=pi

all: $(OUTPUTSSQ) $(OUTPUTA) $(OUTPUTB) $(OUTPUTC) $(OUTPUTD) $(OUTPUTPI)

$(OUTPUTSSQ): $(OUTPUTSSQ).o
	@ echo "Placeholder for the target libSSQ.o"

$(OUTPUTA): $(OUTPUTA).o
	$(CC) $(CFLAGS) -o $@ $(OUTPUTSSQ).o $@.o $(LIBS)

$(OUTPUTB): $(OUTPUTB).o
	$(CC) $(CFLAGS) -o $@ $(OUTPUTSSQ).o $@.o $(LIBS)

$(OUTPUTC): $(OUTPUTC).o
	$(CC) $(CFLAGS) -o $@ $(OUTPUTSSQ).o $@.o $(LIBS)

$(OUTPUTD): $(OUTPUTD).o
	$(CC) $(CFLAGS) -o $@ $(OUTPUTSSQ).o $@.o $(LIBS)

$(OUTPUTPI): $(OUTPUTPI).o
	$(CC) $(CFLAGS) -o $@ $(OUTPUTSSQ).o $@.o $(LIBS)


%.o: %.c
	$(CC) $(CFLAGS) -c $<


clean:
	rm -f $(OUTPUTSSQ) $(OUTPUTA) $(OUTPUTB) $(OUTPUTC) $(OUTPUTD) $(OUTPUTPI)
	rm -f *.o
