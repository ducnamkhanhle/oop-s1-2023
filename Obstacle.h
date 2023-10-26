#ifndef OBSTACLE
#define OBSTACLE

#include<tuple>
#include<iostream>
#include "GridUnit.h"
#include "Modifier.h"
using namespace std;

typedef tuple<int,int> tu_int;

class Obstacle : public GridUnit, public Modifier{
    private:
        bool active;
    public:
        Obstacle(int x, int y) : GridUnit(x, y, 'O'){
            active = true;
        }

        bool isActive(){
            return active;
        }

        void apply(GridUnit& unit){
            unit.setEntity('O');
            //unit.setCoordinates(-1, -1);
            active = false;
        }

};

#endif