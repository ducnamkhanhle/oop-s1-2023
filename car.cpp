#include "car.h"
#include <iostream>
#include <ctime>
using namespace std;



Car::Car(time_t _timeOfEntry,int _ID, int _parkingDuration): Vehicle(_timeOfEntry, _ID), parkingDuration(_parkingDuration){}
Car::Car() : Car(time(NULL),0, 0){}

int Car::getParkingDuration(){
   return this->parkingDuration - ((10 * this->parkingDuration) / 100); 
}

Car::~Car()
{
}
