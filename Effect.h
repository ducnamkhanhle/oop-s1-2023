#ifndef EFFECT
#define EFFECT

#include "GameEntity.h"
#include <tuple>

using namespace std;

class Effect{
    public:
        virtual void apply(GameEntity& entity);
};

#endif

