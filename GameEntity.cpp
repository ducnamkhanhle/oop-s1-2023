#include "GameEntity.h"

GameEntity::GameEntity(int x, int y, char type) : _type(type){
    position = make_tuple(x, y);
}

tuple<int,int> GameEntity::getPos(){
    return position;
}

char GameEntity::getType(){
    return _type;
}

void GameEntity::setPos(int x, int y){
    get<0>(position) = x;
    get<1>(position) = y;
}

void GameEntity::setType(char type){
    _type = type;
}




