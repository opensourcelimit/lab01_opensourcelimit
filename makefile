car.o: car.cpp car.hpp 
	g++ -c -std=c++11 car.cpp
perf.o: perf.cpp perf.hpp
		g++ -c perf.cpp -std=c++11 

testGetSetModel :testGetSetModel.cpp car.o perf.o
		g++ -o testGetSetModel -std=c++11 testGetSetModel.cpp car.o perf.o
clean:
	rm car.o perfo.o
