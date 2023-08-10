#include<iostream>
#include<math.h>
#define ll int
using namespace std;

void print_matrix(int array[10][10]){
    for (ll i = 0; i < 10; i++){
        for (ll j = 0; j < 10; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
}
