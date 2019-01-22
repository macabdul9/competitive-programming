#include <bits/stdc++.h>
#define ll long long
#define MAX 100001
using namespace std;

int main(int argc, char const *argv[]) {
  /* code */
  ll test, n, k, count;
  ll arr[MAX];
  cin>>test;
  while (test > 0) {
    /* code */
    count = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
      cin >> arr[i];
      if(arr[i] > 1)
        count++;
    }
    if(count <= k)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;

    test--;
  }
  return 0;
}
