#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define MAX 1000001
using namespace std;

ll getFib(ll n, ll *dp){
  if(n < 2){
    dp[n] = n;
    return dp[n];
  }
  if(dp[n] != -1)
    return dp[n];
  else
    dp[n] = getFib(n - 1, dp) + getFib( n - 2, dp);
  return dp[n];
}
int main(int argc, char const *argv[]) {
  ll n;
  ll dp[MAX];
  memset(dp, -1, sizeof(dp));
  while(true){
    cin >>n;
    cout << getFib(n, dp);
  }
  return 0;
}
