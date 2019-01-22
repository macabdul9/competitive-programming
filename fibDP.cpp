#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define MAX 1000001
using namespace std;

ll fibRec(ll n){
  if(n < 2)
    return n;
  return fibRec(n - 1) + fibRec(n - 2);
}
//top down aprroach
ll getFibTD(ll n, ll *dp){
  if(n < 2){
    dp[n] = n;
    return dp[n];
  }
  if(dp[n] != -1)
    return dp[n];
  else
    dp[n] = getFibTD(n - 1, dp) + getFibTD( n - 2, dp);
  return dp[n];
}
//bottom up approach
ll getFibBU(ll n){
  ll mem[n  + 1];
  mem[0] = 0;
  mem[1] = 1;

  for(int i = 2; i <= n; i++)
    mem[i] = mem[i - 1] + mem[i - 2];
  return mem[n];
}
int main(int argc, char const *argv[]) {
  ll n;
  ll dp[MAX];
  memset(dp, -1, sizeof(dp));
  // while(true){
  //   cin >>n;
  //   cout << getFibTD(n, dp);
  //   cout << endl;
  //   cout << getFibBU(n);
  // }
  cin>> n;
  cout << getFibTD(n, dp);
  return 0;
}
