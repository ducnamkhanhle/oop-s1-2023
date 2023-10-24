#include "GameEntity.h"
#include "Utils.h"
#include <iostream>
using namespace std;

int main(){
    tu_int t1 = Utils::generateRandomPos(20 , 30);
    tu_int t2 = Utils::generateRandomPos(20 , 30);

    cout << Utils::calculateDistance(t1, t2);
}