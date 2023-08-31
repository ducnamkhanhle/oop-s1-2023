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
        Car(time_t _timeOfEntry, int _ID, int _parkingDuration);
        int getParkingDuration();
        ~Car();
};



#endif