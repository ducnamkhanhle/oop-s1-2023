#include "Car.h"
#include <iostream>
using namespace std;

int main(){
    Car ca = Car(15);

    ca.drive(20);

    cout << ca.get_price() << " " << ca.get_emissions() << endl;
}