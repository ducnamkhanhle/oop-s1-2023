#include "Appliance.h"
#include "TV.h"
#include "House.h"
#include "House.h"
#include<iostream>
using namespace std;

House::House(int numAppliance){
    _numAppliance = numAppliance;
    _currAppliance = 0;
    arr = new Appliance*[_numAppliance];
}

House::House() : House(0) {}

bool House::addAppliance(Appliance* Appliance){
    if (_currAppliance >= _numAppliance){
        return false;
    }
    else {
        arr[_currAppliance] = Appliance;
        _currAppliance++;
        return true;
    }
}

double House::getTotalPowerConsumption(){
    int sum = 0;
    for (int i = 0; i < _currAppliance; i++){
        double tmp = arr[i]->getPowerConsumption();
    //    cout << arr[i]->get_powerRating() << endl;
        sum += tmp;
    }
    return sum;
}