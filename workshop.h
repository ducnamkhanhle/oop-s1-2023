#include<iostream>
#define ll long long 
using namespace std;

void changeValue(double* ptr){
    *ptr = 42;
    return ;
}

void printArray(double* arr, int n){

    for (ll i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

double* dynamicArray(int N, int M){
    double* arr = new double[N];
    for (ll i = 0; i < N; i++){
        arr[i] = M;
    }

    return arr;
}

double arrayMax(double* arr, int N){
    double Max = 0;
    for (ll i = 0; i < N; i++){
        if (Max <= arr[i]) Max = arr[i];
    }
    return Max;
}