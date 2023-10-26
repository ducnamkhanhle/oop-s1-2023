#ifndef GRIDUNIT
#define GRIDUNIT

#include<tuple>
#include<iostream>
using namespace std;

typedef tuple<int,int> tu_int;

class GridUnit{
    protected:
        tuple<int,int> coordinates;
        char _entity;
    public:
        GridUnit(int x, int y, char entity) : _entity(entity){
            coordinates = make_tuple(x, y);
        }

        tuple<int, int> getCoordinates(){
            return coordinates;
        }

        char getEntity(){
            return _entity;
        }

        void setCoordinates(int x, int y){
            get<0>(coordinates) = x;
            get<1>(coordinates) = y;
        }

        void setEntity(char entity){
            _entity = entity;
        }

        virtual void x(){}
};

#endif