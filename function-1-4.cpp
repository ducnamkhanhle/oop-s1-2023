#include<iostream>
#include<cmath>
#define ll int
using namespace std;


void print_scaled(int array[3][3],int scale){
    for (ll i = 0; i < 3; i++){
        for (ll j = 0; j < 3; j++){
            array[i][j] = array[i][j] * scale;
        }
    }
    for (ll i = 0; i < 3; i++){
        for (ll j = 0; j < 3; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}