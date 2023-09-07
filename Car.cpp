#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(int price) : _price(price), _emissions(0) {}
Car::Car() : Car(0) {}

void Car::set_price(int price){
    _price = price;
}

void Car::set_emissions(int emission){
    _emissions = emission;
}

int Car::get_price(){
    return _price;
}

int Car::get_emissions(){
    return _emissions;
}

void Car::drive(int kms){
    _emissions += 20 * kms;
}

