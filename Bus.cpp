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
    return difftime(time(0), timeOfEntry) * 0.75; 

}

Bus::~Bus()
{
}




