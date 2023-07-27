#include <algorithm>
#include <limits.h>
using namespace std;
bool is_ascending(int array[], int n){
    if (n < 1){
        return false;
    }
    int Max = INT_MIN;
    for (int i = 1; i < n; i++){
        if (array[i] < array[i - 1]){
            return false;
        }
    }
    return true;
}