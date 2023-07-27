#include <iostream>

// #define ll long long
using namespace std;
// const ll maxN = 1005;    

extern bool is_descending(int array[], int n);

int main() {
    ios_base::sync_with_stdio(0), cout.tie(0);
    int a[6] = {9,6,5,4,3,1};
    // int n;
    // cout << "Enter number: "; 
    // cin >> n;
    if (is_descending(a, 6) == 1) cout << "The answer is: true"<< endl;
    else cout << "The answer is: false"<< endl;
    return 0;
}