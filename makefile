CC = g++
OBJFLAGS = -w -c
INC = -Iheaders
LIB = -L/usr/lib

all: exemplofila

exemplofila: lib/main.o lib/local.o lib/filalocal.o
	$(CC) $(INC) $(LIB) $^ -o $@

lib/main.o: src/main.cpp
	$(CC) $(INC) $(LIB) $^ $(OBJFLAGS) -o $@

lib/local.o: src/local.cpp
	$(CC) $(INC) $(LIB) $^ $(OBJFLAGS) -o $@

lib/filalocal.o: src/filalocal.cpp
	$(CC) $(INC) $(LIB) $^ $(OBJFLAGS) -o $@

clean:
	rm -rf lib/*.o exemplofila
