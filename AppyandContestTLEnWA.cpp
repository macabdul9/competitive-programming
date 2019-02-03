// feb-2019 long challenge
// https://www.codechef.com/FEB19B/problems/HMAPPY2

#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main(){
    ll t, n, a, b, k;
    set<ll> s;
    cin >> t;
    while(t > 0){
    cin >> n >> a >> b >> k;
    for(ll i = a ; i <= n; i += a)
            s.insert(i);

    for(ll i = b; i <= n; i += b){
        if(s.find(i) != s.end())
                s.erase(i);
        else
                s.insert(i);
    }
    if(s.size() >= k)
            cout << "Win";
    else
            cout << "Lose";
    /*
     * set<ll>::iterator itr;
    for(itr = s.begin(); itr != s.end(); itr++)
            cout << *itr << " ";
    cout << endl<< s.size();
    *
    */
    cout << s.size() << endl;
    s.clear();
    t--;
    }
    return 0;
}
