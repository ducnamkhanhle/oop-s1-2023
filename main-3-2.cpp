#include <iostream>
#include <algorithm>
#include "function-3-2.cpp"
// #define ll long long
using namespace std;
// const ll maxN = 1005;    

extern int median_array(int array[], int n);

int main() {
    ios_base::sync_with_stdio(0), cout.tie(0);
    int a[5] = {3,5,2,1,4}; 
    // int n;
    // cout << "Enter number: "; 
    // cin >> n;
    sort(a, a + 5);
    for (int i = 0; i < 5; i++) cout << a[i] << endl;
    cout << "The answer is: " << median_array(a, 5) << endl;
    return 0;
}