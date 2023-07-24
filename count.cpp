#include <iostream>
#define ll long long
using namespace std;
// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
//extern int count(int[], int);
int count(int a[], int n){
    ll sum = 0;
    for (ll i = 0; i < n; i++){
        if (a[i] % 2 == 0){
            sum += a[i];
        }
    }
    return sum;
}

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << "The number is: " << count(array, 5) << std::endl;
    return 0;
}