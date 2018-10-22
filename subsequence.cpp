#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

/*
Brute-force approach solution time complexity O(n(n+n)) = O(n^2)
*/
void subseq1(string s){


  if(s.length() == 1){
    cout << s << endl;
    return;
  }
  string ans = "";
  for (int i = s.length(); i > 0; i--){
    ans = s.substr(0, i);
    cout << ans  << endl;
  }

  for(int i = 2; i < s.length(); i++){
    ans = "";
    ans.push_back(s[0]);ans.push_back(s[i]);
    cout << ans << endl;
  }
  subseq1(s.substr(1, s.length()));
}


/*
  optimized solution
*/
void subseq2(string exp, string ans, int n){
  if (n == exp.length()) {
    /* code */
    cout<< ans << endl;
    return;
  }
  subseq2(exp, ans, n + 1);
  ans.push_back(exp[n]);
  subseq2(exp, ans, n + 1);
}
int main(int argc, char const *argv[]) {
  /* code */
  string e, a;
  cin>>e;
  subseq1(e);
  // subseq2(e,a,0);
  return 0;
}
