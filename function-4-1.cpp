#include<iostream>
#include<algorithm>
#define ll int
using namespace std;

int *readNumbers(){
    ll *a = new int[10];
    for (ll i = 0; i < 10; i++){
        cin >> a[i];
    }
    return a;
}

int secondSmallestSum(int *a,int length){
    int *b = new int[40];
    int it = 0;

    for (ll i = 0; i < length - 1; i++){
        ll sum = 0;
        for (ll j = i; j < length; j++){
            sum += a[j];
            b[it++] = sum;
        }
    }

    sort(b, b + length);
    return b[1];
}

