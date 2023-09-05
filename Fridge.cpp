#include "Appliance.h"
#include "Fridge.h"
#include<iostream>
using namespace std;

Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating), _volume(volume) {}

Fridge::Fridge() : Fridge(0, 0.0) {}

void Fridge::setVolume(double volume){
    this->_volume = volume;
}

double Fridge::getVolume(){
    return this->_volume;
}

double Fridge::getPowerConsumption(){
    return _powerRating * 24 * (_volume / 100);
}