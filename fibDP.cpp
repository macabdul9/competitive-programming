#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define MAX 100000001
using namespace std;

ll dp[MAX];

ll getFib(ll n){
  if(n < 2){
    if(dp[n])
      return dp[n];
    else{
      dp[n] = n;
      return dp[n];
    }
  }
  if(dp[n])
    return dp[n];
  else
    dp[n] = getFib(n - 1) + getFib( n - 2);
  return dp[n];
}
int main(int argc, char const *argv[]) {
  ll n;
  while(true){
    cin >>n;
    cout << getFib(n);
  }
  return 0;
}
