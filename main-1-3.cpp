#include <iostream>
#include "function-1-3.cpp"
// #define ll long long
using namespace std;
// const ll maxN = 1005;    

extern int num_count(int array[], int n, int number);

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a[6] = {2,3,7,2,8,2};
    int n;
    cout << "The number is: " << num_count(a, 6, 2) << endl;
    
    return 0;
}