/*

  Problem Description:
  A positive integer is called a palindrome if its representation
  in the decimal system is the same when read from left to right
  and from right to left. For a given positive integer K of not more
  than 1000000 digits, write the value of the smallest palindrome
  larger than K to output. Numbers are always displayed without
  leading zeros.
  ex:
  input:
  808
  2133

  Output:
  818
  2222
*/
//this sol will upto a limit
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
#define endl "\n"

// use int instead of cpp_int in case your compiler don't have boost
using boost::multiprecision::cpp_int;

using namespace std;
cpp_int reverse(cpp_int n, cpp_int r){
  if(!n){
    return r;
  }
  return reverse(n/10, r*10 + n%10);
}
int main(int argc, char const *argv[]) {
  int test;
  cpp_int num;
  cin >> test;
  while (test > 0) {
    /* code */
    bool b = false;
    cin>>num;
    for(cpp_int i = num + 1; !b; i++){
      if(i == reverse(i, 0)){
        b = true;
        cout << i << endl;
      }
    }
    test--;
  }

}
