#include <iostream>
#include <algorithm>

// #define ll long long
using namespace std;
// const ll maxN = 1005;    

extern double weighted_average(int array[], int n);

int main() {
    ios_base::sync_with_stdio(0), cout.tie(0);
    int a[6] = {1,2,1,4,1,3} ; 
    // int n;
    // cout << "Enter number: "; 
    // cin >> n;
    cout << "The answer is: " << weighted_average(a, 6) << endl;
    return 0;
}