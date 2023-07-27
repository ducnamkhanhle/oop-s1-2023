#include <algorithm>
#include <limits.h>
using namespace std;
int min_element(int array[], int n){
    if (n < 1){
        return 0;
    }
    int Min = INT_MAX;
    for (int i = 0; i < n; i++){
        Min = min(Min, array[i]);
    }
    return Min;
}