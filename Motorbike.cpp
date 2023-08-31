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
    int tmp = difftime(time(0), timeOfEntry);
    return tmp - (15 * tmp)/100; 
}

Motorbike::~Motorbike()
{
}



