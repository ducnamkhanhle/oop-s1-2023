#include <iostream>
#include "function-2-4.cpp"
// #define ll long long
using namespace std;
// const ll maxN = 1005;    

extern bool is_ascending(int array[], int n);

int main() {
    ios_base::sync_with_stdio(0), cout.tie(0);
    int a[6] = {5,6,7,8,9,10};
    // int n;
    // cout << "Enter number: "; 
    // cin >> n;
    if (is_ascending(a, 6) == 1) cout << "The answer is: true"<< endl;
    else cout << "The answer is: false"<< endl;
    return 0;
}