CXX=g++-4.9
CFLAGS=-Wall

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)

SUBOBJ=$(wildcard $(CEDIR)/*.o)

CEDIR=Engine


all: engine main
	$(CXX) $(CFLAGS) $(SUBOBJ) $(OBJ) -o a.out

main: $(OBJ)
	$(CXX) $(CFLAGS) -c $(OBJ) 

.PHONY:Engine

engine:
	$(MAKE) -C $(CEDIR)

clean:
	rm *.o
	rm a.out
