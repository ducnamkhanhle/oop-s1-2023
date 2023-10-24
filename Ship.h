#ifndef SHIP
#define SHIP

#include "GameEntity.h"

class Ship : public GameEntity{
    public:
        Ship(int x, int y);
        void move(int dx, int dy);
};

#endif 