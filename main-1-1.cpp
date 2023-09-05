#include "Appliance.h"
#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);

    Appliance a(5);

    cout << a.get_powerRating() << endl;
}