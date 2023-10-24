#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"
#include "Game.h"
#include <iostream>
using namespace std;

int main(){
    Game game;
    game.initGame(10, 20, 50, 50);
    game.gameLoop(10, 2);
}