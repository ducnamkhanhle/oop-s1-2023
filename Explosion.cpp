#include "Explosion.h"
typedef tuple<int,int> tu_int;

Explosion::Explosion(int x, int y) : GameEntity(x, y, 'E'){}

void Explosion::apply(GameEntity& entity){
    entity.setPos(-1, -1);
    entity.setType('E');
}

