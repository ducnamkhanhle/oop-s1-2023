#include<iostream>
#define ll int
using namespace std;

int *readNumbers(){
    ll *a = new int[10];
    for (ll i = 0; i < 10; i++){
        cin >> a[i];
    }
    return a;
}

void printNumbers(int* array,int length){
    for (ll i = 0; i < length; i++){
        cout << i << " "  << array[i] << endl;
    }
}