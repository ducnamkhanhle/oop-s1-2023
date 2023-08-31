#ifndef BUS
#define BUS
#include<iostream>
#include<ctime>
#include "vehicle.h"

class Bus : public Vehicle
{
    protected:
        int parkingDuration;
        
    public:
        Bus();
        Bus(time_t _timeOfEntry, int _ID, int _parkingDuration);
        int getParkingDuration();
        ~Bus();
};



#endif