#include<iostream>
#include "function-2-3.cpp"
#define ll int
using namespace std;

//extern int bin_to_int(int binary_digits[], int number_of_digits);

int main(){
    ios_base::sync_with_stdio(0);

    ll a[4] = {1, 0, 0, 1};

    
    
    cout << palindrome_sum(a, 4) << endl;
}
