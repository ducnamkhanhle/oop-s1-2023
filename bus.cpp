#include "bus.h"
#include <iostream>
#include <ctime>
using namespace std;



Bus::Bus(time_t _timeOfEntry,int _ID, int _parkingDuration): Vehicle(_timeOfEntry, _ID), parkingDuration(_parkingDuration){}
Bus::Bus() : Bus(time(NULL),0, 0){}

int Bus::getParkingDuration(){
    return this->parkingDuration - ((25 * this->parkingDuration) / 100); 
}

Bus::~Bus()
{
}




