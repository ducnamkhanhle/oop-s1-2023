#include "Car.h"
#include "Tesla.h"
#include "Ford.h"
#include "Fleet.h"
#include<iostream>
using namespace std;

int main(){
    Fleet a;
    Car* *arr;

    arr = a.get_fleet();

    cout << arr[0]->get_price();


}