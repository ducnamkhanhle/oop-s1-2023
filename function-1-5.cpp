#include<iostream>
#include<cmath>
#define ll int
using namespace std;

void print_summed(int array1[3][3],int array2[3][3]){
    ll sum[3][3] = {0};
    for (ll i = 0; i < 9; i++){
        for (ll j = 0; j <= 9; j++){
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }
    for (ll i = 0; i < 3; i++){
        for (ll j = 0; j < 3; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}