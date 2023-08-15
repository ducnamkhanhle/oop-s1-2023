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