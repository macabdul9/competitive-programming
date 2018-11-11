//problem source - https://www.codingninjas.in/app/classroom/me/466/content/7160/offering/50202/problem/3010
#include<bits/stdc++.h>
#define endl  "\n"
#define MAX 9
using namespace std;
int main() {

	// Write your code here
  	vector<int> v;
    vector<int>::iterator it1,it2;
  	int sum = 0;
  	int extra = 0;
    int input;
  	for(int i = 0; i < MAX; i++){
      cin >> input;
      v.push_back(input);
      sum += input;
    }
  	extra = sum - 100;
  	bool b = false;
      	for(int i = 0 ; i < MAX ; i++){
     for(int j = i + 1; j< MAX; j++){
       if(v[i] + v[j] == extra){
         it1 = v.begin() + i ;
         it2 = v.begin() + j - 1;
         v.erase(it1);
         v.erase(it2);
         b = true;
         break;
       }
     }
      if(b)
        break;
    }
 	for(auto& e : v)
      cout << e << endl;

}
