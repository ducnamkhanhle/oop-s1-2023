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

    
    
    

    arr[0] = new Car(time(0), 1, 150);
    arr[1] = new Bus(time(0), 2, 170);
    arr[2] = new Motorbike(time(0), 3, 180);

    for (ll i = 0; i < 3; i++){
        cout << arr[i]->getParkingDuration() << endl;
    }
}