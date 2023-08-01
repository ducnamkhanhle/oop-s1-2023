#include<iostream>
#include<cmath>
#define ll long long
using namespace std;



int main(){
    ios_base::sync_with_stdio(0), cout.tie(0);

    ll s = 123, sum = 0;
    while (s != 0){
     //   cout << s << endl;
        sum = sum * 10 + (s % 2);
        s /= 2;
    }
    ll res = 0;
    while (sum != 0){
        res = res * 10 + (sum % 10);
        sum /= 10;
    }
    cout << res << endl;
    return 0;
}