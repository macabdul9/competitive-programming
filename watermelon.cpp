//https://codeforces.com/problemset/problem/4/A
#include<bits/stdc++.h>
#define endl "\n"

using namespace std;

int main(){
  int k;
  cin >> k ;
  if( k < 3)
    cout << "NO" << endl;
  else if ( !((k - 2) % 2) )
    cout << "YES" << endl;
  else
    cout << "NO" << endl;


  return 0;
}

