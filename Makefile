all: prog3.cpp sequenceAlign.cpp specialMatrix.cpp
	g++ prog3.cpp sequenceAlign.cpp specialMatrix.cpp -o prog3

clean:
	rm prog3
