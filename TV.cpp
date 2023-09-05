#include "Appliance.h"
#include "TV.h"
#include<iostream>
using namespace std;

TV::TV(int powerRating, double screenSize) : Appliance(powerRating), _screenSize(screenSize) {}

TV::TV() : TV(0, 0.0) {}

void TV::setScreenSize(double screenSize){
    this->_screenSize = screenSize;
}

double TV::getScreenSize(){
    return this->_screenSize;
}

double TV::getPowerConsumption(){
    return _powerRating * (_screenSize / 10);
}