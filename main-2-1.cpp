#include "Car.h"
#include "Tesla.h"
#include <iostream>
using namespace std;

int main(){
    Tesla tl = Tesla('K',15);

    tl.drive(151);

    cout << tl.get_emissions() << endl;

    tl.chargeBattery(10);
    
    cout << tl.get_batteryPercentage() << endl;
}