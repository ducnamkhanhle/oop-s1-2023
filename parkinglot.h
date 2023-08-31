#ifndef PARKINGLOT
#define PARKINGLOT
#include<iostream>
#include<ctime>
#include "vehicle.h"

class ParkingLot
{
    private:
        Vehicle* arr[20];
        Vehicle* base;
        int capacity;
        int curr_capacity;
        
    public:
        ParkingLot();
        ParkingLot(int _capacity);
        void parkVehicle(Vehicle* _vehicle);
        void unparkVehicle(int _ID);
        int getCount();
        int countOverstaytingVehicles(int maxParkingDuration);
        // virtual int getParkingDuration();
        ~ParkingLot();
};




#endif