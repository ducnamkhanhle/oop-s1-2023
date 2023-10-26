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
    game.initGameSession(3, 0, 25, 25);
    game.gameCycle(2, 2);

}