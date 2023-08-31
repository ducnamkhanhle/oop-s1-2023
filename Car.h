#ifndef CAR
#define CAR
#include<iostream>
#include<ctime>
#include "Vehicle.h"

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


