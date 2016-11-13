CC = gcc
INPUT = calc.c
PROJECT = calc

all: $(PROJECT) test

$(PROJECT): $(INPUT)
	$(CC) $(INPUT) -o $(PROJECT)

test:
	python calc-test.py

clean:
	rm $(PROJECT)
