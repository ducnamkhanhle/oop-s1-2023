#include<iostream>
#include<string>
#include<cmath>
#define ll int
using namespace std;

void print_binary_str(string decimal_number){
    ll s = stoi(decimal_number), sum = 0;
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
    print(sum);
}




