#include<iostream>
#define ll int
using namespace std;

extern int binary_to_int(int binary_digit[], int number_of_digits));

int main(){
    ios_base::sync_with_stdio(0), cout.tie(0);

    ll a[8] = {1, 0, 1, 1, 0, 1, 1, 1, 0}

    cout << binary_to_int(a);
}