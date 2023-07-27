#include <iostream>

// #define ll long long
using namespace std;
// const ll maxN = 1005;    

extern bool is_fanarray(int array[], int n);

int main() {
    ios_base::sync_with_stdio(0), cout.tie(0);
    int a[5] = {1,2,1,2,1}; 
    // int n;
    // cout << "Enter number: "; 
    // cin >> n;
    if (is_fanarray(a, 5) == 1) cout << "The answer is: true"<< endl;
    else cout << "The answer is: false"<< endl;
    return 0;
}