#main target
all:hello
#main target dependency
hello: major1.o palindrome.o power.o replace.o reverse.o
gcc -o main major1.o palindrome.o power.o replace.o reverse.o -lm

#satisfying dependency of target
major1.o:major1.c
gcc -c major1.c -lm
palindrome.o:palindrome.c
gcc -c palindrome.c -lm
power.o:power.c
gcc -c power.c -lm
replace.o:replace.c
gcc -c replace.c -lm
reverse.o:reverse.c
gcc -c reverse.c -lm
clean:
rm -rf *o hello
~                  



////////THIS
CC := gcc
WFLAGS := -Wall
LIBRARIES := -lm

# source files list
SRC = major1.c \
      power.c \
      replace.c \
      reverse.c \
      palindrome.c

# object file list
OBJ := major1.o \
       power.o \
       replace.o \
       reverse.o \
       palindrome.o

# default: compile program
default: $(OBJ)
	$(CC) -o binops $(OBJ)

# object file compilation
%.o: %.c
	$(CC) -c $^ $(WFLAGS) $(LIBRARIES)

# clean directory
clean:
	rm $(OBJ)
	rm binops


//////////////////

IDIR = ../include

CC = gcc

CFLAGS = -I$(IDIR)

ODIR = obj

LDIR = ../lib

LIBS=-lm

_DEPS = major1.h

DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = major1.o power.o reverse.o

replace.o palindrome.o

OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)

$(CC) -c -o $@ $< $(CFLAGS)

major1: $(OBJ)

$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:

rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
