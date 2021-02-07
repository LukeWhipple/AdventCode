#
# makefile for image and color utilities C library
#
#

CC = gcc -std=gnu99
FLAGS = -Wall
INCLUDES = -lm


advent: demo.o advent.c
	$(CC) $(FLAGS) demo.o advent.c -o advent $(INCLUDES)

demo.o: demo.c demo.h
	$(CC) $(FLAGS) $(INCLUDES) -c demo.c -o demo.o

clean:
	rm -f *~ *.o
