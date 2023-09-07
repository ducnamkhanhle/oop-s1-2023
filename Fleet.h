#ifndef FLEET
#define FLEET

#include "Car.h"
#include "Tesla.h"
#include "Ford.h"
#include<iostream>
using namespace std;

class Fleet{
    private:
        Car* *fleet;
    public:
        Fleet();

        Car** get_fleet();

};

#endif