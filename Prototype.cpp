#include <iostream>
#include <string>
using namespace std;
#include "ConcreateVehicles.h"

int main()
{
	Car car;
	car.SetDetails("Toyota", "Car", 1999);
	car.Print();
	cout << endl;

	Vehicle* car_clone = car.clone();
	car_clone->Print();

	delete car_clone;
}
