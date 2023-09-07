#ifndef FORD
#define FORD

#include "Car.h"
#include<iostream>
using namespace std;

class Ford : public Car{
    private:
        int _badgeNumber;
        float _litresOfFuel;
    public:
        Ford();            
        Ford(int badgeNumber, int price); 

        void set_badgeNumber(int badgeNumber);
        void set_litresOfFuel(float litresOfFuel);
        int get_badgeNumber();
        float get_litresOfFuel();

        void refuel(int litres);
        void drive(int kms);   

};

#endif