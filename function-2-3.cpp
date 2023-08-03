#include<iostream>
#include<string>
#include<cmath>
#define ll int

int sum_if_palindrome(int integers[], int length){
    ll sum = 0;
    for (ll i = 0; i <= length - 1; i++){
        sum += integers[i];
    }
    return sum;
}

bool is_palindrome(int integers[], int length){
    length--;
    for (ll i = 0; i <= length / 2; i++){
        if (integers[i] != integers[length - i]) return false;
    }
    return true;
}

int sum_array_elements(int integers[], int length){
    if (length <= 0){
        return -1;
    }
    bool check = is_palindrome(integers, length);
    if (check == true){
        return sum_if_palindrome(integers, length);
    }
    else return -2;
}



