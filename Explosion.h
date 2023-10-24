#ifndef EXPLOSION
#define EXPLOSION

#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect{
    public:
        Explosion(int x, int y);
        void apply(GameEntity& entity);
};

#endif 