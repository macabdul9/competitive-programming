#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define MAX 100000001
using namespace std;

const ll notes[] {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
/* this is greedy technique solution that might not work for every currency
  const ll notes[] {1, 2, 5, 7, 10 20, 50, 100, 200, 500, 2000};
  in the above notes suppose we want 14 then below solution will give 10, 2, 2
  counting total = 3 Notes - 10 2 2
  while optimal solution should have  total = 2 notes - 7 7
*/
void getNotes(ll amount, vector<ll> &result, int start){
  if(!amount)
    return;
  for(int i = start ; i > -1; i--){
    if(amount == notes[i] or amount > notes[i]){
      result.push_back(notes[i]);
      amount -= notes[i];
      start = i;
      break;
    }
  }
  getNotes(amount, result, start);
}

int main(int argc, char const *argv[]) {
  /* code */
  ll amount;
  vector<ll> v;
  int current = sizeof(notes)/sizeof(*notes) - 1;
  while (true) {
    /* code */
    cin >> amount;
    getNotes(amount, v,  current);
    for(auto& e:v)
      cout << e << " ";
    cout << "\ntotal notes = " << v.size() <<endl;
  }
  return 0;
}
