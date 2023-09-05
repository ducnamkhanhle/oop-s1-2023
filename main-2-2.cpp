#include "Appliance.h"
#include "TV.h"
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);

    Appliance* tv = new TV(10, 5);

    cout << tv->getPowerConsumption() << endl;
}