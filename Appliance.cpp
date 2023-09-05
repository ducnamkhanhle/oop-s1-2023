#include "Appliance.h"
#include<iostream>
using namespace std;

Appliance::Appliance(int powerRating) : _powerRating(powerRating), _isOn(false) {}

Appliance::Appliance() : Appliance(0){}

void Appliance::turnOff(){
    this->_isOn = false;
}

void Appliance::turnOn(){
    this->_isOn = true;
}

void Appliance::set_powerRating(int powerRating){
    this->_powerRating = powerRating;
}
int Appliance::get_powerRating(){
    return this->_powerRating;
}
void Appliance::set_isOn(bool isOn){
    this->_isOn = isOn;
}
bool Appliance::get_isOn(){
    return this->_isOn;
}

double Appliance::getPowerConsumption(){}



