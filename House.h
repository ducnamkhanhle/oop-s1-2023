#ifndef HOUSE
#define HOUSE

#include "Appliance.h"
#include<iostream>
using namespace std;

class House{
    protected:
        Appliance* *arr;
        int _numAppliance;
        int _currAppliance;
    public:
        House(int numAppliance);
        House();

        bool addAppliance(Appliance* appliance);
        double getTotalPowerConsumption();


};


#endif