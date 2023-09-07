#ifndef TESLA
#define TESLA

#include "Car.h"
#include<iostream>
using namespace std;

class Tesla : public Car{
    private:
        char _model;
        float _batteryPercentage;
    public:
        Tesla();
        Tesla(char model, int price);

        void set_model(char model);
        void set_batteryPercentage(float batteryPercentage);
        char get_model();
        float get_batteryPercentage();

        void chargeBattery(int mins);
        void drive(int kms);

};

#endif