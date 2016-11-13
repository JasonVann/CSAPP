CC = gcc
INPUT = example1.c example2.c example3.c example4.c example5.c example6.c\
   example7.c example8.c
PROJECT = example1 example2 example3 example4 example5 example6 example7\
   example8
CFLAGS = --std=c11 -g -O3 -D_POSIX_C_SOURCE=1

all: $(PROJECT)

$(PROJECT) :  $(INPUT)
	$(CC) $(CFLAGS) example1.c -o example1
	$(CC) $(CFLAGS) example2.c -o example2
	$(CC) $(CFLAGS) example3.c -o example3
	$(CC) $(CFLAGS) example4.c -o example4
	$(CC) $(CFLAGS) example5.c -o example5
	$(CC) $(CFLAGS) example6.c -o example6
	$(CC) $(CFLAGS) example7.c -o example7
	$(CC) $(CFLAGS) example8.c -o example8

clean:
	rm -f $(PROJECT)
