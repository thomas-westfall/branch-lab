CXXFLAGS=-std=c++14
OBJECTS=shapes.o

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

main.o: main.cpp shapes.h

shapes.o: shapes.cpp shapes.h

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)

clean:
	rm main.o $(OBJECTS)
