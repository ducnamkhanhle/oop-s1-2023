#include<iostream>
#define ll int
using namespace std;

extern int palindrome_sum(int[], int);

int main(){
    ios_base::sync_with_stdio(0);

    int a[4] = {1, 0, 0, 1};

    
    
    cout << palindrome_sum(a, 4) << endl;
}
