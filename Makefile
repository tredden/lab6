#
# Makefile for asteroids game
#
# Enter one of the following
#
# make
# make all
# make asteroids
# make clean
#
CFLAGS = -I ./include
#LFLAGS = -lrt -lX11 -lGLU -lGL -pthread -lm
LFLAGS = -lrt -lX11 -lGL

all: lab6

lab6: asteroids.cpp log.cpp timers.cpp taylorR.cpp
	g++ $(CFLAGS) asteroids.cpp log.cpp timers.cpp taylorR.cpp \
	libggfonts.a -Wall $(LFLAGS) -o lab6

clean:
	rm -f asteroids
	rm -f *.o

