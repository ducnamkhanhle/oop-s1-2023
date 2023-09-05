#ifndef FRIDGE
#define FRIDGE

#include "Appliance.h"
#include<iostream>
using namespace std;

class Fridge : public Appliance{
    protected:
        double _volume;
    public:
        Fridge(int powerRating, double volume);
        Fridge();

        void setVolume(double volume);
        double getVolume();

        double getPowerConsumption();

};


#endif