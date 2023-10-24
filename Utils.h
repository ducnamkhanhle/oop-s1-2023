#ifndef UTILS
#define UTILS

#include<tuple>
using namespace std;
typedef tuple<int, int> tu_int;

class Utils{
    public:
        static tu_int generateRandomPos(int gridWidth, int gridHeight);
        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2);
};

#endif