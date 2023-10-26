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
                GridUnit *obs = new Avatar(get<0>(pos), get<1>(pos));

                grid.push_back(obs);
            }
        }
        std::vector<GridUnit*>& getGrid(){
            return grid;
        }
        void gameCycle(int maxCycles, double obstacleActivationDistance){
            int curr_cycle = 0, num_avatar = 0;
            while (curr_cycle != maxCycles){
                num_avatar = 0;
                for (int i = 0; i < grid.size(); i++){
                    if (grid[i]->getEntity() == 'A'){
                        Avatar *avatar = dynamic_cast<Avatar*>(grid[i]);
                        avatar->shift(1, 0);
                        tu_int pos = avatar->getCoordinates();
                        if (get<0>(pos) > _gridWidth || get<1>(pos) > _gridHeight) {
                            cout << "Avatar has won the game!" << endl;
                            return;
                        }
                    }
                }

                for(int i = 0; i < grid.size(); i++){
                    if (grid[i]->getEntity() == 'O'){
                        Obstacle *obs = dynamic_cast<Obstacle*>(grid[i]);

                        for (int j = 0; j < grid.size(); j++){
                            if (grid[j]->getEntity() == 'A'){
                                Avatar *avatar = dynamic_cast<Avatar*>(grid[j]);    
                                int dis = Helper::calculateDistance(avatar->getCoordinates(), obs->getCoordinates());

                                if (dis < obstacleActivationDistance){
                                    obs->apply(*avatar);
                                }
                            }
                        }
                    }
                }

                curr_cycle++;
            }

            cout << "Maximum number of cycles reached. Game over." << endl;
        }

};

#endif