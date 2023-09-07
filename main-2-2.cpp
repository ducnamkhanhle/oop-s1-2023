#include "Car.h"
#include "Ford.h"
#include <iostream>
using namespace std;

int main(){
    Ford fd = Ford(2,15);
    fd.set_litresOfFuel(40);
    fd.refuel(10);

    fd.drive(20);

    cout << fd.get_emission() << endl;

    fd.drive(50);
    
    cout << fd.get_emission() << endl;
}