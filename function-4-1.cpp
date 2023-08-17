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
    int b[10000];
    int it = 0;

    for (ll i = 0; i < length; i++){
        ll sum = 0;
        for (ll j = i; j < length; j++){
            sum += a[j];
        //b cdmlthy    cout << j << endl;
            b[it++] = sum;
        }
    }

    // for (ll i = 0; i < length; i++){
    //     cout << b[i] << " ";
    // }

    sort(b, b + it);
    return b[1];
}

