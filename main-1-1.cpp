#include <iostream>

using namespace std;
  
extern int array_sum(int array[], int n);

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a[6] = {2,4,1,5,2,7};
    int n;
    cout << "The sum of array is: " << array_sum(a, 6) << endl;
    
    return 0;
}