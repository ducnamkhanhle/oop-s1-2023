#include "Appliance.h"
#include "House.h"
#include "TV.h"
#include "Fridge.h"
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);

    House hs = House(5);

    Appliance* tv = new TV(10, 5);
    Appliance* fr = new Fridge(10, 5);
    hs.addAppliance(tv);
    hs.addAppliance(fr);

    cout << hs.getTotalPowerConsumption() << endl;
}