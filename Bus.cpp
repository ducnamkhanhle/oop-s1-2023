#include "Bus.h"
#include <iostream>
#include <ctime>
using namespace std;



Bus::Bus(int _ID): Vehicle(_ID){
    parkingDuration = time(0);
}
Bus::Bus() : Bus(0){
    timeOfEntry = time(0);
}

int Bus::getParkingDuration(){
    int tmp = difftime(time(0),timeOfEntry - timeOfEntry * 25 / 100);
    return tmp - (25 * tmp)/100; 

}

Bus::~Bus()
{
}




