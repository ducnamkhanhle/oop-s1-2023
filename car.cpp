#include "Car.h"
#include <iostream>
#include <ctime>
using namespace std;



Car::Car(int _ID): Vehicle(_ID){
   timeOfEntry = time(0); 
}
Car::Car() : Car(0){}

int Car::getParkingDuration(){
   int tmp = timeOfEntry;
   return tmp - ((10 * tmp) / 100); 
}

Car::~Car()
{
}


