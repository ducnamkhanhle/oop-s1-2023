#include "ParkingLot.h"
#include <iostream>
#include <ctime>
using namespace std;


ParkingLot::ParkingLot(int _capacity){
    capacity = _capacity;
    curr_capacity = 0;
}


ParkingLot::ParkingLot() : ParkingLot(0){}

int ParkingLot::getCount(){
    return curr_capacity;
}

void ParkingLot::parkVehicle(Vehicle* _vehicle){
   // Vehicle* arr[4];
    if (curr_capacity < capacity) {
        arr[curr_capacity] = _vehicle;
        curr_capacity++;
    }
    else {
        cout << "The Lot is full" << endl;
    }

}

void ParkingLot::unparkVehicle(int _ID){
    for (int i = 0; i < capacity; i++){
        int t = arr[i]->getID();
        Vehicle* tmp;
        if (arr[i]->getID() == _ID){
            tmp = arr[curr_capacity - 1];
            arr[curr_capacity - 1] = arr[i];
            arr[i] = tmp;
            curr_capacity--;
            return;
        }
    }
    cout << "Vehicle Not in the lot" << endl;
}

int ParkingLot::countOverstaytingVehicles(int maxParkingDuration){
    int cnt = 0;
    for (int i = 0; i < curr_capacity; i++){
        
        if (arr[i]->getParkingDuration() > maxParkingDuration) cnt++;
    }
    return cnt;
}

ParkingLot::~ParkingLot()
{
}


