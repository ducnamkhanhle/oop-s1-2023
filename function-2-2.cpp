#include<iostream>
#include<string>
#include<cmath>
#define ll int

int binary_to_int(int binary_digit[], int number_of_digits){
    ll sum = 0;
    for (ll i = number_of_digits - 1; i >= 0; i--){
        sum = sum + binary_digit[i] * pow(2, (i - number_of_digits - 1));
    }
    return sum;
}




