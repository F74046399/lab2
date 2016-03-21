class:class.o lab2.o
	g++ -o class lab2.o class.o
class.o:class.o class.h
	g++ -c class.cpp
lab2.o:class.h lab2.cpp
	g++ -c lab2.cpp
clean:
	rm class*.o
