#include <iostream>

// #define ll long long
using namespace std;
// const ll maxN = 1005;    

extern int max_element(int array[], int n);

int main() {
    ios_base::sync_with_stdio(0), cout.tie(0);
    int a[6] = {2,6,7,8,5,3};
    // int n;
    // cout << "Enter number: "; 
    // cin >> n;
    cout << "The maximum num is: " << max_element(a, 6) << endl;

    return 0;
}