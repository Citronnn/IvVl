first: first.o kmp.o second.o test.o
	g++ first.o -o first kmp.o
	g++ second.o -o second kmp.o
	g++ test.o -o test kmp.o
	rm *.o
first.o:
	g++ -c -std=c++11 ./src/first.cpp
kmp.o:
	g++ -c  -std=c++11 ./src/kmp.cpp
second.o:
	g++ -c -std=c++11 ./src/second.cpp
test.o:
	g++ -c -std=c++11 ./tests/test.cpp
