#include "Mine.h"

Mine::Mine(int x, int y) : GameEntity(x, y, 'M') {}

Explosion Mine::explode(){
    _type = 'X';
    return Explosion(get<0>(position), get<1>(position));
}
