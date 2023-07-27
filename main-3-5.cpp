#include <iostream>
#include <algorithm>

// #define ll long long
using namespace std;
// const ll maxN = 1005;    

extern double sum_even(double array[], int n);

int main() {
    ios_base::sync_with_stdio(0), cout.tie(0);
    double a[6] = {1.2,2.4,1.6,4.8,1.2,3.3}; 
    // int n;
    // cout << "Enter number: "; 
    // cin >> n;
    cout << "The answer is: " << sum_even(a, 6) << endl;
    return 0;       
}   