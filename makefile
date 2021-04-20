car.o: car.cpp car.hpp 
	g++ -c -std=c++11 car.cpp
perf.o: perf.cpp perf.hpp
		g++ -c perf.cpp -std=c++11 

test :test.cpp car.o perf.o
		g++ -o test -std=c++11 test.cpp car.o perf.o
clean:
	rm car.o perf.o
