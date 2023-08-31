#include "Car.h"
#include <iostream>
#include <ctime>
using namespace std;



Car::Car(int _ID): Vehicle(_ID){
   timeOfEntry = time(0); 
}
Car::Car() : Car(0){
   timeOfEntry = time(0);
}

int Car::getParkingDuration(){
   int tmp = difftime(time(0),timeOfEntry - timeOfEntry * 10 / 100);
    return tmp; 
}

Car::~Car()
{
}


