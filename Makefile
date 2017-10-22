#!/bin/makefile

EXEC=l_Epopee_d_Asnigard


OFILES=*.o
LDFLAGS=-lSDL2 -lSDL2_ttf -lSDL2_image -lSDL_mixer
CFLAGS=-Wall -Wextra -ansi -pedantic -Wextra -Wchar-subscripts -Wdouble-promotion -Werror -Wcomment -Wformat

CC=gcc

CLEAN=*.o

all:$(EXEC)

$(EXEC):$(OFILES)
	$(CC) $^ -o $@ $(LDFLAGS)

%.o:%.c
	$(CC) -c $< $(CFLAGS)

clean:
	rm $(CLEAN)
clear: clean

cleaner:
	rm $(EXEC) $(CLEAN)
