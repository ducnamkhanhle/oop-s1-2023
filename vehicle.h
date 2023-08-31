#ifndef VEHICLE
#define VEHICLE
#include<iostream>
#include<ctime>

class Vehicle
{
    protected:
        time_t timeOfEntry;
        int ID;
        
    public:
        Vehicle();
        Vehicle(int ID);
        int getID();
        virtual int getParkingDuration();
        virtual ~Vehicle();
};




#endif