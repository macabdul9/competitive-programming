/*
  Source : Spoj
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
#include <iostream>
#define endl "\n"

using namespace std;
long long reverse(long long n, long long r){
  if(!n){
    return r;
  }
  return reverse(n/10, r*10 + n%10);
}
int main(int argc, char const *argv[]) {
  int test;
  long long num;
  cin >> test;
  while (test > 0) {
    /* code */
    bool b = false;
    cin>>num;
    for(long long i = num + 1; !b; i++){
      if(i == reverse(i, 0)){
        b = true;
        cout << i << endl;
      }
    }
    test--;
  }

}
