#include <iostream>
#include <algorithm>
#include "function-3-4.cpp"
// #define ll long long
using namespace std;
// const ll maxN = 1005;    

extern void print_pass_fail(char grade);

int main() {
    ios_base::sync_with_stdio(0), cout.tie(0);
    char s = 'F';
    print_pass_fail(s);
    return 0;       
}