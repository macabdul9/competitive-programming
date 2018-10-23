#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

/*
  recursive solution
  but for larger input upper this will be slow
*/
void subseq(string exp, string ans, int n){
  if (n == exp.length()) {
    /* code */
    cout<< ans << endl;
    return;
  }
  subseq(exp, ans, n + 1);
  ans.push_back(exp[n]);
  subseq(exp, ans, n + 1);
}
int main(int argc, char const *argv[]) {
  /* code */
  string e, a;
  cin>>e;
  subseq(e,a,0);
  return 0;
}
