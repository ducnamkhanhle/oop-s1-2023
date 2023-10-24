#ifndef UTILS
#define UTILS

#include<tuple>
#include<math.h>
using namespace std;
typedef tuple<int, int> tu_int;

class Utils{
    public:
        static tu_int generateRandomPos(int gridWidth, int gridHeight){
            int rd_x = (rand() % (gridWidth + 1)), rd_y = (rand() % (gridHeight + 1));
            tu_int tmp(rd_x, rd_y);
            return tmp;
        }

        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
            int x1 = get<0>(pos1);
            int y1 = get<1>(pos1);

            int x2 = get<0>(pos2);
            int y2 = get<1>(pos2);

            double res = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
            return res;
        }
};

#endif