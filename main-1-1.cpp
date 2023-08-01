#include<iostream>
#define ll int
using namespace std;

extern int sum_diagonal(int (&array)[4][4]);

int main(){
  ios_base::sync_with_stdio(0), cout.tie(0);
  const ll n = 4, m = 4;
  ll a[n][m];
  // for (ll i = 0; i <= 3; i++){
  //   for (ll j = 0; j <= 3; j++){
  //     cout << a[i][j] << " ";
  //   }
  //   cout << endl;
  // }
   cout << "The answer is: " << sum_diagonal(a) << endl;
    return 0;
}