#include "Appliance.h"
#include "Fridge.h"
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);

    Appliance* fr = new Fridge(10, 5);

    cout << fr->getPowerConsumption() << endl;
}