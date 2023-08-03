#include<iostream>
#define ll int
using namespace std;

extern void print_binary_str(string decimal_number);

int main(){
    ios_base::sync_with_stdio(0), cout.tie(0);

    string s = "789";

    print_binary_str(s);
}