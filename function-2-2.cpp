#include <algorithm>
#include <limits.h>
using namespace std;
int max_element(int array[], int n){
    if (n < 1){
        return 0;
    }
    int Max = INT_MIN;
    for (int i = 0; i < n; i++){
        Max = max(Max, array[i]);
    }
    return Max;
}