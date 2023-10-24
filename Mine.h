#ifndef MINE
#define MINE

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity{
    public:
        Mine(int x, int y): GameEntity(x, y, 'M') {}
        Explosion explode(){
            _type = 'X';
            return Explosion(get<0>(position), get<1>(position));
        }

};

#endif 