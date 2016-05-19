CXX=g++
CFLAGS=-Wall

SRC=$(wildcard *.cpp)

OBJ=$(SRC:.cpp=.o)


engine: $(OBJ)
	$(CXX) $(CFLAGS) -c $(OBJ)

clean:
	rm *.o
