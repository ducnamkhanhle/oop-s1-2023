#include <iostream>
#include <tuple>
#include "GridUnit.h"
#include "Helper.h"
#include "Modifier.h"
using namespace std;



int main(){
    tuple<int,int> t1 = Helper::generateRandomCoordinates(0, 0);
    tuple<int,int> t2 = Helper::generateRandomCoordinates(20, 30);

    int dis = Helper::calculateDistance(t1, t2);
    cout << get<0>(t1) << " " << get<1>(t1) << endl;
}