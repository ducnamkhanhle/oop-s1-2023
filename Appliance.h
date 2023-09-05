#ifndef APPLIANCE
#define APPLIANCE

#include<iostream>
using namespace std;

class Appliance{
    protected:
        int _powerRating;
        bool _isOn;
    public:
        Appliance(int powerRating);
        Appliance();

        void set_powerRating(int powerRating);
        int get_powerRating();
        void set_isOn(bool isOn);
        bool get_isOn();

        void turnOn();
        void turnOff();
        virtual double getPowerConsumption();

};


#endif