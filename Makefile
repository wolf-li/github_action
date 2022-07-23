all:
	g++ hello.cpp -o hello -std=c++17
	g++ test.cpp -o test -std=c++11
clean:
	rm *.o
