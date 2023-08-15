#include<iostream>
#define ll int
using namespace std;

extern int *readNumbers();
extern void printNumbers(int * ,int );


int main(){
    ios_base::sync_with_stdio(0);
    ll *a;

    a = readNumbers();
    printNumbers(a, 10);

    delete[] a;

}