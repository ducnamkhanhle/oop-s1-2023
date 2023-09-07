#include "Tesla.h"
#include "Car.h"
#include <iostream>
using namespace std;

Tesla::Tesla(char model, int price) : Car(price), _model(model), _batteryPercentage(100){}
Tesla::Tesla() : Tesla(' ',0) {}


void Tesla::set_model(char model){
    _model = model;
}

void Tesla::set_batteryPercentage(float batteryPercentage){
    if (batteryPercentage < 0) _batteryPercentage = 0;
    else if (batteryPercentage > 100) _batteryPercentage = 100;
    else _batteryPercentage = batteryPercentage;
}

char Tesla::get_model(){
    return _model;
}

float Tesla::get_batteryPercentage(){
    return _batteryPercentage;
}

void Tesla::chargeBattery(int mins){
    float tmp = _batteryPercentage + 0.5 * mins;
    if (tmp <= 100) _batteryPercentage = tmp;
    else _batteryPercentage = 100;
}

void Tesla::drive(int kms){
    float curr_battery = _batteryPercentage - ((float)kms * 0.2);
    if (curr_battery <= 0) {
        _batteryPercentage = 0;
        _emissions = 74 * 500;
    }
    else{ 
        _batteryPercentage = curr_battery;
        _emissions += 74 * kms;
    } 

    
}
