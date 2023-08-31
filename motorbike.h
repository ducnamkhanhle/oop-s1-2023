#ifndef MOTORBIKE
#define MOTORBIKE
#include<iostream>
#include<ctime>
#include "vehicle.h"

class Motorbike : public Vehicle
{
    protected:
        int parkingDuration;
        
    public:
        Motorbike();
        Motorbike(time_t _timeOfEntry, int _ID, int _parkingDuration);
        int getParkingDuration();
        ~Motorbike();
};



#endif


