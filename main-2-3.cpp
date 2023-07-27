#include <iostream>
#include "function-2-3.cpp"
// #define ll long long
using namespace std;
// const ll maxN = 1005;    

extern void two_five_nine(int array[], int n);

int main() {
    ios_base::sync_with_stdio(0), cout.tie(0);
    int a[6] = {2,2,9,5,5,9};
    // int n;
    // cout << "Enter number: "; 
    // cin >> n;
    // cout << "The maximum num is: " << max_element(a, 6) << endl;
    two_five_nine(a, 6);
    return 0;
}