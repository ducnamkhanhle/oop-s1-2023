#include<iostream>
#include<cmath>
#define ll int
using namespace std;


ll a[10];

void count_digits(int array[4][4]){
    for (ll i = 0; i <= 9; i++){
        a[i] = 0;
    }
    for (ll i = 0; i < 4; i++){
        for (ll j = 0; j < 4; j++){
            a[array[i][j]]++;
        }
    }
    for (ll i = 0; i <= 9; i++){
        cout << i << ":" << a[i] << ";";
    }
}