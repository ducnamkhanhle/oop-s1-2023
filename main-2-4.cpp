#include<iostream>
#define ll int
using namespace std;

extern int sum_min_max(int integers[], int length);

int main(){
    ios_base::sync_with_stdio(0), cout.tie(0);

    ll a[9] = {1, 0, 1, 1, 0, 1, 1, 1, 0};

    cout << sum_min_max(a);
}