#include<iostream>
#define ll int
using namespace std;

extern int sum_diagonal(int array[4][4]);

int main(){
  ios_base::sync_with_stdio(0), cout.tie(0);
  ll a[4][4] = {
    {1, 2, 4, 5},
    {6, 1, 2, 4},
    {3, 4, 1, 2},
    {3, 2, 1, 5}
  };
  // for (ll i = 0; i <= 3; i++){
  //   for (ll j = 0; j <= 3; j++){
  //     cout << a[i][j] << " ";
  //   }
  //   cout << endl;
  // }
   cout << "The answer is: " << sum_diagonal() << endl;
    return 0;
}