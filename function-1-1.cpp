#include<iostream>
#include<cmath>
#define ll int

int sum_diagonal(int array[][4]){
    ll sum = 0; 
    for (ll i = 0; i < 4; i++){
        sum += array[i][i];
    }
    return 0;
}