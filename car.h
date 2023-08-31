#ifndef CAR
#define CAR
#include<iostream>
#include<ctime>
#include "vehicle.h"

class Car : public Vehicle
{
    protected:
        int parkingDuration;
        
    public:
        Car();
        Car(int _ID);
        int getParkingDuration();
        ~Car();
};



#endif


