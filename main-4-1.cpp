#include<iostream>
#define ll int
using namespace std;

extern int *readNumbers();
extern printNumbers(int* ,int );
extern secondSmallestSum(int *,int );

int main(){
    ios_base::sync_with_stdio(0);
    ll *a, *b;

    a = readNumbers();

    cout << secondSmallestSum(a, 10);

    delete[] a;
    delete[] b;

}