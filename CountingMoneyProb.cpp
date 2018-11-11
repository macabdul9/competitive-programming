#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define MAX 100000001
using namespace std;

const ll notes[] {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
int current = sizeof(notes)/sizeof(*notes) - 1;

void getNotes(ll amount, vector<ll> &result){
  if(!amount)
    return;
  for(int i = current ; i > -1; i--){
    if(amount == notes[i] or amount > notes[i]){
      result.push_back(notes[i]);
      amount -= notes[i];
      current = i;
      break;
    }
  }
  getNotes(amount, result);
}

int main(int argc, char const *argv[]) {
  /* code */
  ll amount;
  vector<ll> v;
  while (true) {
    /* code */
    cin >> amount;
    getNotes(amount, v);
    for(auto& e:v)
      cout << e << " ";
    cout << "\ntotal notes = " << v.size() <<endl;
  }
  return 0;
}
