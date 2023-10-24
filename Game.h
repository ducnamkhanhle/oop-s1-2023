#ifndef GAME
#define GAME

#include "GameEntity.h"
#include "Utils.h"
#include "Ship.h"
#include "Mine.h"
#include <vector>
using namespace std;

class Game {
    private:
        vector<GameEntity*> entities;
    public:
        Game();
        vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight){
            for (int i = 0; i < numShips; i++){
                tu_int pos = Utils::generateRandomPos(gridWidth, gridHeight);
                int x = get<0>(pos);
                int y = get<1>(pos);
                GameEntity *ship = new Ship(x, y);

                entities.push_back(ship);
            }

            for (int i = 0; i < numMines; i++){
                tu_int pos = Utils::generateRandomPos(gridWidth, gridHeight);
                int x = get<0>(pos);
                int y = get<1>(pos);
                GameEntity *mines = new Mine(x, y);

                entities.push_back(mines);
            }

            return entities;
        }
        void gameLoop(int maxIterations, double mineDistanceThreshold){
            int curr_interaction = 0;
            int curr_ship = 0;
            while(curr_interaction != maxIterations){
                curr_ship = 0;
                for (int i = 0; i < entities.size(); i++){
                    if (entities[i]->getType() == 'S'){
                        Ship* ship = dynamic_cast<Ship*>(entities[i]);
                        ship->move(1,0);
                        curr_ship++;
                    }                
                }
                if (curr_ship != 0) break;
                for (int i = 0; i < entities.size(); i++){
                    if (entities[i]->getType() == 'M'){
                        Mine* mine = dynamic_cast<Mine*>(entities[i]);
                        for (int i = 0; i < entities.size();i++){
                            if (entities[i]->getType() == 'S'){
                                Ship* ship = dynamic_cast<Ship*>(entities[i]);
                                double dis = Utils::calculateDistance(ship->getPos(), mine->getPos());
                                if (dis <= mineDistanceThreshold){
                                    Explosion ex = mine->explode();
                                    ex.apply(*ship);
                                }
                            }      
                        }
                    }
                }
            }
        }
};

#endif