#include <iostream>
// #define ll long long
using namespace std;
// const ll maxN = 1005;    

extern double array_mean(int array[], int n);

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a[6] = {1,9,0,5,2,5};
    int n;
    cout << "The average of array is: " << array_mean(a, 6) << endl;
    
    return 0;
}