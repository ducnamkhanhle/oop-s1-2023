#include "Motorbike.h"
#include <iostream>
#include <ctime>
using namespace std;



Motorbike::Motorbike(int _ID): Vehicle(_ID){
    timeOfEntry = time(0);
}
Motorbike::Motorbike() : Motorbike(0){}

int Motorbike::getParkingDuration(){
    int tmp = difftime(timeOfEntry, time(0));
    return difftime(timeOfEntry, time(0)); 
}

Motorbike::~Motorbike()
{
}



