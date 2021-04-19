#include <iostream>
#include "car.hpp"


using namespace std;


int main(){

 Car newcar;


char input[] = "ferrari";
newcar.modelNameChange(input);

char const* output = newcar.getModel();

cout << output << endl;





}
