#include "Vehicle.h"
#include <iostream>
#include <ctime>
using namespace std;



Vehicle::Vehicle(int _ID): ID(_ID){
    timeOfEntry = time(0);
}
Vehicle::Vehicle() : Vehicle(0){}

int Vehicle::getID(){
    return ID; 
}
int Vehicle::getParkingDuration(){

}

Vehicle::~Vehicle()
{
}

