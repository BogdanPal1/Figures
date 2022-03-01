COMPILER=g++

CFLAGS=-c -std=c++1y

all: figures

figures: main.o flatfigure.o circle.o righttriangle.o square.o
	$(COMPILER) main.o flatfigure.o circle.o righttriangle.o square.o -o figures

main.o: main.cpp
	$(COMPILER) $(CFLAGS) main.cpp

flatfigure.o: flatfigure.cpp
	$(COMPILER) $(CFLAGS) flatfigure.cpp

circle.o: circle.cpp
	$(COMPILER) $(CFLAGS) circle.cpp

righttriangle.o: righttriangle.cpp
	$(COMPILER) $(CFLAGS) righttriangle.cpp

square.o: square.cpp
	$(COMPILER) $(CFLAGS) square.cpp

clean:
	rm -rf *.o figures
