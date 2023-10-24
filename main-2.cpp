#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"
#include <iostream>
using namespace std;

int main(){
    Ship ship(10, 20);
    Mine mine(20, 30);
    tuple<int,int> tmp = ship.getPos();

    cout << get<0>(tmp) << " " << get<1>(tmp) << endl;
    
    ship.move(30, 50);
    tmp = ship.getPos();
    cout << get<0>(tmp) << " " << get<1>(tmp) << endl;
    
    Explosion ex1(20 , 20);
    ex1.apply(ship);

    tmp = ship.getPos();
    cout << get<0>(tmp) << " " << get<1>(tmp) << endl;
}