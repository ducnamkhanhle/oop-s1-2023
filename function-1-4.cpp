#include<iostream>
#include<cmath>
#define ll int

ll a[10];

void print_scaled(int array[3][3],int scale){
    for (ll i = 0; i < 3; i++){
        for (ll j = 0; j < 3; j++){
            a[i][j] *= scale;
        }
    }
    for (ll i = 0; i < 3; i++){
        for (ll j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}