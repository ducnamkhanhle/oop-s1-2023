#include<iostream>
#include<cmath>
#define ll long long
using namespace std;

void printMt(int Matrix[4][3]){
    for (ll i = 0; i < 4; i++){
        for (ll j = 0; j < 3; j++){
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
    
}

int main(){
    ios_base::sync_with_stdio(0), cout.tie(0);

    int t1 = 999, *ptr, t2 = 2343;
    int a[4][3] = {
        {1, 3, 2},
        {4, 2, 1},
        {7, 6, 8},
        {2, 3, 1}
    };
    printMt(a);




    return 0;
}