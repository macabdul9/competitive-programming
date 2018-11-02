#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

bool isPallindrome(string str, int start, int end){
  if(start >= end)
    return true;
  if(str[start] != str[end ])
    return false;
  return isPallindrome(str, start + 1, end - 1);
}

void getPallindromicPartition(string str, int start, int end){
  if(start + 1 == end){
    cout << str.substr(start, end) << " ";
    return;
  }
  if(isPallindrome(str, start, end - 1)) {//end - 1 because end is length and we need last index which is le - 1
    cout << str.substr(start, end) << " ";
  }
  getPallindromicPartition(str, start, end - 1);
  getPallindromicPartition(str, end, str.length());

}

int main(int argc, char const *argv[]) {
  string str, ans;
  cin >> str;
  getPallindromicPartition(str, 0, str.length());
  cout << isPallindrome(str, 0, str.length() - 1);
  cout << endl;
  return 0;
}
