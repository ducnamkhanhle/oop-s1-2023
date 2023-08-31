#include "motorbike.h"
#include <iostream>
#include <ctime>
using namespace std;



Motorbike::Motorbike(time_t _timeOfEntry,int _ID, int _parkingDuration): Vehicle(_timeOfEntry, _ID), parkingDuration(_parkingDuration){}
Motorbike::Motorbike() : Motorbike(time(NULL),0, 0){}

int Motorbike::getParkingDuration(){
    return this->parkingDuration - ((15 * this->parkingDuration) / 100); 
}

Motorbike::~Motorbike()
{
}



