/*
  Source: https://www.codechef.com/submit/KCHESS
*/

#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define MAX 100001

using namespace std;

ll a[MAX], b[MAX]; //horizontal and vertical position of knight

bool isInCheckmate(ll n, ll a[], ll b[], ll x, ll y){
  ll k;
  for(ll i = 0; i < n; i++ ){
    k = ((x-a[i])*(x-a[i]))+((y-b[i])*(y-b[i]));
    if(k == 5)
      return true;
    else
      continue;
  }
  return false;
}

int main(int argc, char const *argv[]) {
  /* code */
  ll t, n, x, y;
  cin>>t;
  while (t > 0) {
    /* code */
    cin>>n;
    for(ll i = 0; i < n; i++)
      cin >> a[i] >> b[i];
    cin >>x >> y;
    if(isInCheckmate(n, a , b, x, y))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;

    t--;
  }
  return 0;
}
