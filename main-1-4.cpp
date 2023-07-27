#include <iostream>
// #define ll long long
using namespace std;
// const ll maxN = 1005;    

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a[6] = {4,3,7,2,9,2};
    int b[6] = {6,4,5,1,2,8};
    int n;
    cout << "The sum is: " << sum_two_arrays(a, b, 6) << endl;
    
    return 0;
}