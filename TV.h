#ifndef _TV
#define _TV

#include "Appliance.h"
#include<iostream>
using namespace std;

class TV : public Appliance{
    protected:
        double _screenSize;
    public:
        TV(int powerRating, double screenSize);
        TV();

        void setScreenSize(double screenSize);
        double getScreenSize();

        double getPowerConsumption();

};


#endif