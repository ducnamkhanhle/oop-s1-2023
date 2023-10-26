#include <iostream>
#include <tuple>
#include "GridUnit.h"
#include "Helper.h"
#include "Modifier.h"
#include "Avatar.h"
#include "Obstacle.h"
using namespace std;



int main(){
    GridUnit avatar = Avatar(1, 1);
    Obstacle o1(2, 3);

    o1.apply(avatar);

    cout << avatar.getEntity();
}