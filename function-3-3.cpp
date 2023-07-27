#include <algorithm>
#include <limits.h>
#include <map>
using namespace std;

double weighted_average(int array[], int n){
    if (n < 1) return 0;
    map<int, int> cnt;
    //int Max = INT_MIN
    for (int i = 0; i < n; i++) {
        cnt[array[i]]++;
    //    Max = max(Max, array[i]);
    }
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum += (double)((double)array[i] * (double)cnt[array[i]] / (double)n);
    //    cout << sum << endl;
    }
    return sum;
}