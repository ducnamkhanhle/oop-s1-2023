#include<iostream>
#include<cmath>
#define ll int

int is_identity(int array[10][10]){
    for (ll i = 0; i <= 9; i++){
        for (ll j = 0; j <= 9; j++){
            if (i == j) {
                if (a[i][j] != 1) return 0;
            }
            else {
                if (a[i][j] != 0) return 0;
            }
        }
    }
    return 1;
}