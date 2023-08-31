#ifndef MOTORBIKE
#define MOTORBIKE
#include<iostream>
#include<ctime>
#include "Vehicle.h"

class Motorbike : public Vehicle
{
    protected:
        int parkingDuration;
        
    public:
        Motorbike();
        Motorbike(int _ID);
        int getParkingDuration();
        ~Motorbike();
};



#endif


