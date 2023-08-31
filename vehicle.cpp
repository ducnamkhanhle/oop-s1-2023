#include "vehicle.h"
#include <iostream>
#include <ctime>
using namespace std;



Vehicle::Vehicle(time_t _timeOfEntry, int _ID): ID(_ID), timeOfEntry(_timeOfEntry){}
Vehicle::Vehicle() : Vehicle(time(NULL), 0){}

int Vehicle::getID(){
    return ID; 
}
int Vehicle::getParkingDuration(){

}

Vehicle::~Vehicle()
{
}
