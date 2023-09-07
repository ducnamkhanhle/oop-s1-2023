#include "Car.h"
#include "Ford.h"
#include <iostream>
using namespace std;

Ford::Ford(int badgeNumber, int price) : Car(price), _badgeNumber(badgeNumber), _litresOfFuel(60) {}
Ford::Ford() : Ford(0,0) {}


void Ford::set_badgeNumber(int badgeNumber){
    _badgeNumber = badgeNumber;
}

void Ford::set_litresOfFuel(float litresOfFuel){
    _litresOfFuel = litresOfFuel;
}

int Ford::get_badgeNumber(){
    return _badgeNumber;
}

float Ford::get_litresOfFuel(){
    return _litresOfFuel;
}

void Ford::refuel(int litres){
    float tmp = _litresOfFuel + litres;
    if (tmp <= 60) _litresOfFuel = tmp;
    else _litresOfFuel = 60;
}

void Ford::drive(int kms){
    float curr_fuel = _litresOfFuel - ((float)kms * 0.2);
    if (curr_fuel <= 0) _litresOfFuel = 0;
    else{ 
        _litresOfFuel = curr_fuel;
        _emissions += 234 * kms;
    } 

    
}
