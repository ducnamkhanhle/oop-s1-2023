#include<iostream>
#include<string>
#include<cmath>
#define ll int
using namespace std;

int binary_to_int(int binary_digit[], int number_of_digits){
    ll sum = 0;
    for (ll i = number_of_digits - 1; i >= 0; i--){
    //    cout << pow(2, (i - number_of_digits - 1)) << endl;
        sum = sum + binary_digit[i] * pow(2, (number_of_digits - 1 - i));
    }
    return sum;
}




