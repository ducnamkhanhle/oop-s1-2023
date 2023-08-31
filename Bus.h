#ifndef BUS
#define BUS
#include<iostream>
#include<ctime>
#include "Vehicle.h"

class Bus : public Vehicle
{
    protected:
        int parkingDuration;
        
    public:
        Bus();
        Bus(int _ID);
        int getParkingDuration();
        ~Bus();
};



#endif



