#include <algorithm>
#include <limits.h>
using namespace std;
bool is_fanarray(int array[], int n){
    if (n < 1){
        return false;
    }

    for (int i = 0; i < n; i++){
        if (i == n - i - 1){
            if (array[i] < array[i - 1] || array[i] < array[i + 1]) return false;
        }
        if (array[i] != array[n - i - 1]){
        //    cout << array[i] << " " << array[n - i - 1] << endl;
        //    cout << i << " " << n - i - 1 << endl;
            return false;
        }
    }
    return true;
}