#include "Ship.h"

Ship::Ship(int x, int y) : GameEntity(x, y, 'S') {}

void Ship::move(int dx, int dy){
    get<0>(position) = dx;
    get<1>(position) = dy;
}
