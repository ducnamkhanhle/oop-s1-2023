#ifndef AVATAR
#define AVATAR

#include<tuple>
#include<iostream>
#include "GridUnit.h"
#include "Modifier.h"
using namespace std;

typedef tuple<int,int> tu_int;

class Avatar : public GridUnit{
    public:
        Avatar(int x, int y) : GridUnit(x, y, 'A') {}

        void shift(int dx, int dy){
            get<0>(coordinates) += dx;
            get<1>(coordinates) += dy;
        }

};

#endif