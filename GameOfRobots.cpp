/*
  Problem Source: https://www.codechef.com/problems/ROBOGAME
*/

#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

void robotWalk(string rep){
  if(rep.length() < 2 ){
    cout << "safe" << endl;
    return;
  }
  int robot, left, right;
  int k = 1;
  for(int i = 0 ; i < rep.length(); i += k ){
    if (rep[i] != '.') {
      /* code */

      robot = rep[i] - '0';

      left = i - robot;
      right = i + robot;

      if(left < 0)
        left = 0;

      if(right > rep.length() - 1)
        right = rep.length() - 1;

      for(int j = left; j <= right; j++){
        if(j != i and rep[j] != '.'){
          cout << "unsafe" << endl;
          return;
        }
      }
      rep [right] = rep[i];
      k = robot + 1;
    }
    else
      k = 1;

  }
  cout << "safe" << endl;
  return;
}
int main(int argc, char const *argv[]) {
  int test;
  cin>>test;
  while(test > 0){
    string rep;
    cin>>rep;
    robotWalk(rep);

    test--;
  }
  return 0;
}
