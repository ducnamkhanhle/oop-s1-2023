#ifndef MINE
#define MINE

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity{
    public:
        Mine(int x, int y);
        Explosion explode();
        
};

#endif 