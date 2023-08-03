#include<iostream>
#define ll int
using namespace std;

extern void print_scaled(int array[3][3],int scale);

int main(){
  ios_base::sync_with_stdio(0), cout.tie(0);
  ll a[3][3] = {
    {1, 2, 4},
    {6, 1, 2},
    {3, 4, 1},
  };
  ll scale = 3;
  // for (ll i = 0; i <= 3; i++){
  //   for (ll j = 0; j <= 3; j++){
  //     cout << a[i][j] << " ";
  //   }
  //   cout << endl;
  // }
   print_scaled(a, scale);
    return 0;
}