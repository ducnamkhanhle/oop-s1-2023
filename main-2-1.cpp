#include "Car.h"
#include "Tesla.h"
#include <iostream>
using namespace std;

int main(){
    Tesla tl = Tesla('K',15);
    tl.set_batteryPercentage(40);
    tl.chargeBattery(30);

    tl.drive(20);

    cout << tl.get_emission() << endl;

    tl.drive(50);
    
    cout << tl.get_emission() << endl;
}