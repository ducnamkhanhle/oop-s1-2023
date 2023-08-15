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

bool equalsArray(int *a,int *b,int length){
    for (ll i = 0; i < length; i++){
        if (a[i] != b[i]) return false;
    }
    return true;
}

int *reverseArray(int *a,int length){
    int* b = new int[length];
    for (ll i = 0; i < length; i++){
        b[i] = a[length - i - 1];
    }

    return b;

}

void printNumbers(int* array,int length){
    for (ll i = 0; i < length; i++){
        cout << i << " "  << array[i] << endl;
    }
}

