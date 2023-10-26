#ifndef MODIFIER
#define MODIFIER

#include<tuple>
#include<iostream>
#include "GridUnit.h"
typedef tuple<int,int> tu_int;
using namespace std;


class Modifier{
    public:
        virtual void apply(GridUnit& unit){

        }
};

#endif