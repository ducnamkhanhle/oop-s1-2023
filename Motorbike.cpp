#include "Motorbike.h"
#include <iostream>
#include <ctime>
using namespace std;



Motorbike::Motorbike(int _ID): Vehicle(_ID){
    timeOfEntry = time(0);
}
Motorbike::Motorbike() : Motorbike(0){
    timeOfEntry = time(0);
}

int Motorbike::getParkingDuration(){
    int tmp = difftime(time(0), timeOfEntry - timeOfEntry * 15 / 100);
    return tmp; 
}

Motorbike::~Motorbike()
{
}



