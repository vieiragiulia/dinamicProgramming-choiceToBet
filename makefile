CC = gcc
CFLAGS = -g -O0 -Wall -Wextra -std=c99 -pedantic
OBJ = dinamic.o Player.o Table.o
DEPS = Player.h Table.h 
VFLAGS = -v --leak-check=full --leak-resolution=high --show-reachable=yes --track-origins=yes
EXEC = ./tp2-pd input.txt output.txt
TIMED_RUN = time ./tp2-pd 

all: tp-pd 

tp2-pd: $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o tp2-pd

valgrind:
	valgrind $(VFLAGS) $(EXEC)

run:
	$(EXEC)

timed:
	$(TIMED_RUN)

