#include<iostream>
#include<string>
#include<cmath>
#include<limits.h>
#define ll int

int array_min(int integers[], int length){
    int MIN = INT_MAX;
    for (ll i = 0; i <= length - 1; i++){
        MIN = min(MIN, integers[i]);
    }
    return MIN;
}

int array_max(int integers[], int length){
    int MAX = INT_MIN;
    for (ll i = 0; i <= length - 1; i++){
        MAX = max(MAX, integers[i]);
    }
    return MAX;
}

int sum_min_max(int integers[], int length){
    ll Max = array_max(integers, length), Min = array_min(integers, length);
    return Max + Min;
}


