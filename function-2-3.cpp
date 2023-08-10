#include<iostream>
#include<math.h>
#define ll int
using namespace std;

int sum_integers(int integers[], int length){
    ll sum = 0;
    for (ll i = 0; i < length; i++){
        sum = sum + integers[i];
    }
    return sum;
}

bool is_array_palindrome(int integers[], int length){
    for (ll i = 0; i <= (length - 1) / 2; i++){
        cout << i << " " << length - i - 1 << endl;
        if (integers[i] != integers[length - i - 1]) return false;
    }
    return true;
}

int palindrome_sum(int integers[], int length){
    if (length <= 0) {
        return -1;
    }
    if (is_array_palindrome(integers, length) == true){
        return sum_integers(integers, length);
    }
    else {
        return -2;
    }
}
