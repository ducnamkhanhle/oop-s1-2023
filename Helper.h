#ifndef HELPER
#define HELPER

#include<tuple>
#include<iostream>
#include <math.h>
#include "GridUnit.h"
typedef tuple<int,int> tu_int;
using namespace std;


class Helper{
    public:
        static tu_int generateRandomCoordinates(int gridWidth, int gridHeight){
            int rd_x = (rand() % (gridWidth + 1)), rd_y = (rand() % (gridHeight + 1));
            tu_int tmp(rd_x, rd_y);
            return tmp;
        }

        static double calculateDistance(std::tuple<int, int> coords1, std::tuple<int, int> coords2){
            int x1 = get<0>(coords1);
            int y1 = get<1>(coords1);

            int x2 = get<0>(coords2);
            int y2 = get<1>(coords2);

            double res = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
            return res;
        }
};

#endif