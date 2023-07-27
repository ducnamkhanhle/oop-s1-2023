#include <iostream>
// #define ll long long
using namespace std;
// const ll maxN = 1005;    

extern int count_evens(int number);

int main() {
    ios_base::sync_with_stdio(0), cout.tie(0);
    // int a[6] = {4,3,7,2,9,2};
    int n;
    cout << "Enter number: "; 
    cin >> n;
    cout << "The num is: " << count_evens(n) << endl;
    
    return 0;
}