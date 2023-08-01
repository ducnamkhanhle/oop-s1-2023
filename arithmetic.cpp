#include<iostream>
#include<cmath>
#define ll long long
using namespace std;

ll a;


int main(){
    ios_base::sync_with_stdio(0), cout.tie(0);

    string s1 = "111011101011", s2 = "1110101", res = "";
    ll tmp = 0;
    ll s1_size = s1.size() - 1, s2_size = s2.size() - 1;
    for (ll i = 1; i <= abs(s1_size - s2_size); i++) {
        if (s1_size <= s2_size) s1 = "0" + s1;
        else s2 = "0" + s2;
    }
    //cout << s1 << " " << s2 << " " << abs(s1.size() - s2.size()) << endl;
    for (ll i = s1.size() - 1; i >= 0; i--){
        string st1 = s1.substr(i, 1), st2 = s2.substr(i, 1);
        // cout << st1 << " " << st2 << endl;
        
        // ll tmp1 = st1 - '0', tmp2 = str2 - '0';
        if (st1 == "1") {
            if (st2 == "1"){
                if (tmp == 1) res = "1" + res, tmp = 1;
                else res = "0" + res, tmp = 0;
            }
            else {
                if (tmp == 1) res = "0" + res, tmp = 0;
                else res = "1" + res, tmp = 0;
            }
        }
        else {
            if (st2 == "1"){
                if (tmp == 1) res = "0" + res, tmp = 1;
                else res = "1" + res, tmp = 1;
            }
            else {
                if (tmp == 1) res = "1" + res, tmp = 1;
                else res = "0" + res, tmp = 0;
            }
        }
    }
    cout << res;
    return 0;
}