#include<iostream>
#include<ctime>
#include "vehicle.h"
#include "car.h"
#include "bus.h"
#include "motorbike.h"
#define ll int

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);

    Vehicle* arr[4];

    arr[0] = new Car(1);
    arr[1] = new Bus(2);
    arr[2] = new Motorbike(3);

    for (ll i = 0; i < 3; i++){
        cout << arr[i]->getParkingDuration() << endl;
    }
}


