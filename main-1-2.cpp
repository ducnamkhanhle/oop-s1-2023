#include<iostream>
#include<ctime>
#include "vehicle.h"
#include "car.h"
#include "bus.h"
#include "motorbike.h"
#include "parkinglot.h"
#define ll int

using namespace std;

int main(){

    ParkingLot a = ParkingLot(10);


    for (ll i = 1; i <= 11; i++){
        Car* b = new Car(time(0), i, 150);
        a.parkVehicle(b);
        delete b;
    }

    
    a.unparkVehicle(5);
    a.unparkVehicle(11);

    
    
    // arr[0] = new Car(time(0), 1, 150);
    // arr[1] = new Bus(time(0), 2, 170);
    // arr[2] = new Motorbike(time(0), 3, 180);

    // for (ll i = 0; i < 3; i++){
    //     cout << arr[i]->getParkingDuration() << endl;
    // }
}


