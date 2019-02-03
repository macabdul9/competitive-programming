// feb-2019 long challenge
// https://www.codechef.com/FEB19B/problems/HMAPPY2
#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

// Function to return LCM of two numbers
ll findLCM(ll a, ll b){
    ll lar = max(a, b);
    ll small = min(a, b);
    for (ll i = lar; ; i += lar) {
        if (i % small == 0)
            return i;
    }
}
ll gcd(ll a, ll b){
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
ll lcm(ll a,ll b){
    return a*b/gcd(a,b);
}

int main(){
    ll t, n, a, b, k, result;
    cin >> t;
    while(t  > 0){
        cin >> n >> a >> b >> k;
        //cin >> a >> b;
        result = n/a + n/b - 2*n/lcm(a, b);
        if( result >= k)
                cout << "Win";
        else
                cout << "Lose";
        t--;
    }
    return 0;
}
