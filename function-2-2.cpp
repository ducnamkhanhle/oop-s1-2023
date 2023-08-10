#include<iostream>
#include<math.h>
#define ll int
using namespace std;

int bin_to_int(int binary_digits[], int number_of_digits){
    ll num = 0;
    for (ll i = number_of_digits - 1; i >= 0; i--){
        num = num + binary_digits[i] * pow(2, number_of_digits - i - 1);
     //   cout << number_of_digits - i << endl;
    }
    return num;
}