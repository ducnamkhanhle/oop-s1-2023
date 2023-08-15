#include<iostream>
#define ll int
using namespace std;

extern int *readNumbers();
extern bool equalsArray(int *,int *,int ) ;


int main(){
    ios_base::sync_with_stdio(0);
    ll *a, *b;

    a = readNumbers();
    b = readNumbers();

    if (equalsArray(a, b, 10) == 1) cout << "true";
    else cout << "false";

    delete[] a;
    delete[] b;

}