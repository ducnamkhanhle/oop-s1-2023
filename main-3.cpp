#include <iostream>
#include <tuple>
#include "GridUnit.h"
#include "Helper.h"
#include "Modifier.h"
#include "Avatar.h"
#include "Obstacle.h"
#include "GameSession.h"
using namespace std;



int main(){
    GameSession game;
    game.initGameSession(10, 20, 50, 50);
    game.gameCycle(20, 3);
}