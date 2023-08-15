#include<iostream>
#define ll int
using namespace std;

extern int *readNumbers();
extern bool equalsArray(int *,int *,int ) ;
extern int *reverseArray(int *,int );
extern printNumbers(int* ,int );

int main(){
    ios_base::sync_with_stdio(0);
    ll *a, *b;

    a = readNumbers();
    b = reverseArray(a, 10);

 //   printNumbers(b, 10);

    if (equalsArray(a, b, 10) == 1) cout << "true";
    else cout << "false";

    delete[] a;
    delete[] b;

}