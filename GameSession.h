#ifndef GAMESESSION
#define GAMESESSION

#include<tuple>
#include<iostream>
#include<vector>
#include "GridUnit.h"
#include "Modifier.h"
#include "Avatar.h"
#include "Obstacle.h"
#include "Helper.h"
using namespace std;

typedef tuple<int,int> tu_int;

class GameSession{
    private:
        int _gridWidth, _gridHeight;
        vector<GridUnit*> grid;
    public:
        void initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight){
            _gridWidth = gridWidth;
            _gridHeight = gridHeight;
            for (int i = 0; i < numAvatars; i++){
                tu_int pos = Helper::generateRandomCoordinates(gridWidth, gridHeight);
                GridUnit *avatar = new Avatar(get<0>(pos), get<1>(pos));

                grid.push_back(avatar);
            }

            for (int i = 0; i < numObstacles; i++){
                tu_int pos = Helper::generateRandomCoordinates(gridWidth, gridHeight);
                GridUnit *obs = new Obstacle(get<0>(pos), get<1>(pos));

                grid.push_back(obs);
            }
        }
        std::vector<GridUnit*>& getGrid(){
            return grid;
        }
        void gameCycle(int maxCycles, double obstacleActivationDistance){
            bool is_win = false;

            for (int i = 0; i < maxCycles; i++) { 
                for (int k = 0; k < grid.size(); k++){
                    if (grid[k]->getEntity() == 'A'){
                        Avatar *avatar = dynamic_cast<Avatar*>(grid[k]);
                        avatar->shift(1, 0);
                    }
                }

                for(int k = 0; k < grid.size(); k++){
                    for (int l = 0; l < grid.size(); l++){
                        if (grid[k]->getEntity() == 'O' && grid[l]->getEntity() == 'A'){
                            Avatar *avatar = dynamic_cast<Avatar*>(grid[l]);  
                            Obstacle *obs = dynamic_cast<Obstacle*>(grid[k]); 
                            double dis = Helper::calculateDistance(avatar->getCoordinates(), obs->getCoordinates());
                            if (dis <= obstacleActivationDistance){
                                obs->apply(*grid[l]);
                            }
                        }
                    }
                }
                for (int j = 0; j < grid.size(); j++){
                    if (grid[j]->getEntity() == 'A'){
                        Avatar *avatar = dynamic_cast<Avatar*>(grid[j]);
                        tu_int pos = avatar->getCoordinates();
                        if (get<0>(pos) > _gridWidth) {
                            cout << "Avatar has won the game!" << endl;
                            is_win = true;
                        }
                    }
                }
                if (is_win == true) break;
            }
            if (is_win == false) cout << "Maximum number of cycles reached. Game over." << endl;
        }

};

#endif