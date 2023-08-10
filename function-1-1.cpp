#include<iostream>
#include<math.h>
#define ll int
using namespace std;

void print_matrix(int array[10][10]){
    for (ll i = 0; i < 10; i++){
        for (ll j = 0; j < 10; j++){
            if (j != 10) cout << array[i][j] << " ";
            else cout << array[i][j];
        }
        if (i != 10) cout << endl;
    }
    
}
