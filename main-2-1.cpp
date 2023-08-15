#include<iostream>
#define ll int
using namespace std;

extern int *readNumbers();
extern void hexDigits(int * ,int );


int main(){
    ios_base::sync_with_stdio(0);
    ll *a;

    a = readNumbers();
    hexDigits(a, 10);

    delete[] a;
    
}