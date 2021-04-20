#include <iostream>
#include <cstring>
#include "car.hpp"


using namespace std;


int main()
{
 Car testcar;
 int b = 0;
//test get seat count and set seat count
int a = testcar.getSeatCount();
cout << a << endl;
cout << testcar.getSeatCount();

testcar.recountSeats(3);

b = testcar.getSeatCount();

cout << b << endl;



cout << "Change Car Stats"<< endl;
PerformanceStats teststats{1,2,.5};
PerformanceStats transfercar{0,0,0};

cout << "Get cars stats" << endl;
testcar.reevaluateStats(teststats);
transfercar = testcar.getStats();
cout << transfercar << endl;


cout <<" Testing kind of door, Expected output = 0" <<endl;
int doorval =  testcar.getBackseatDoors();
cout << doorval << endl;



cout << "Change door value, from input of existing doorking struct";

DoorKind testdoor = Hinge;

testcar.reexamineDoors(testdoor);

doorval = testcar.getBackseatDoors();

cout << " expected value: 1" << endl;
cout << doorval << endl;

char const* manutest = "General Electric";
testcar.manufacturerChange(manutest);

char const * manufact = testcar.getManufacturer();
cout << manufact << endl;

}
