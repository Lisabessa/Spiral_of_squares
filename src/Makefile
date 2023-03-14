CC = gcc
FLAGS = -Wall -Werror -Wextra

all: spiral_of_squares_algorithm.o
	$(CC) $(FLAGS) spiral_of_squares_algorithm.o -o ../build/spiral

spiral_of_squares_algorithm.o:
	$(CC) $(FLAGS) -c spiral_of_squares_algorithm.c -o spiral_of_squares_algorithm.o

clean:
	del -rf *.o