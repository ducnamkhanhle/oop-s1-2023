#include <algorithm>
#include <limits.h>
using namespace std;
int median_array(int array[], int n){
    if (n < 1 || n % 2 == 0){
        return false;
    }

    return array[n / 2];
}