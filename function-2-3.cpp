#include<iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
void two_five_nine(int array[], int n){
    if (n < 1){
        return ;
    }
    int cnt2 = 0, cnt5 = 0, cnt9 = 0;
    for (int i = 0; i < n; i++){
        if (array[i] == 2) {
            cnt2++;
        }
        if (array[i] == 5) {
            cnt5++;
        }
        if (array[i] == 9) {
            cnt9++;
        }
    }
    cout << "2:" << cnt2 << static_cast<char>(59) << "5:" << cnt5 << static_cast<char>(59) << "9:" << cnt9 << static_cast<char>(59); 
}