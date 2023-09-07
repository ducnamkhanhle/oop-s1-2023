#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(int price) : _price(price), _emission(0) {}
Car::Car() : Car(0) {}

void Car::set_price(int price){
    _price = price;
}

void Car::set_emission(int emission){
    _emission = emission;
}

int Car::get_price(){
    return _price;
}

int Car::get_emission(){
    return _emission;
}

void Car::drive(int kms){
    _emission += 20 * kms;
}

