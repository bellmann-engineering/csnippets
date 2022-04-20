CC=g++
CFLAGS=-Wall

objects = h.o c.o a.o

output: main.o math.o
	$(CC) $(CFLAGS) main.o math.o -o output
	
debug: main.o math.o
	$(CC) $(CFLAGS) main.o math.o -o output
	
a: output
	
main.o: main.cpp
	$(CC) -c main.cpp

math.o: math.cpp math.h
	$(CC) -c math.cpp
	
clean:
	rm *.o *.exe
