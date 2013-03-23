CC=g++

CFLAGS=-c -Wall


all: main.o game.o drawer.o
	$(CC) -o game main.o game.o drawer.o -lglut -lGL

main.o: main.cpp
	$(CC) -c main.cpp

game.o: game.cpp
	$(CC) $(CFLAGS) game.cpp

drawer.o: drawer.cpp
	$(CC) $(CFLAGS) drawer.cpp

clean:
	rm -f *.o
