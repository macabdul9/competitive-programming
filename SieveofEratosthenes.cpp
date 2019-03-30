/*
 * @author    : macab (macab@debian)
 * @file      : SieveofEratosthenes
 * @created   : Sunday Mar 31, 2019 01:19:37 IST
*/
#include<bits/stdc++.h>
#define endl                  "\n"
#define merge(a, b)           a##b
#define loop(i,a,b)           for(int i=(int)a;i<(int)b;++i)
#define rloop(i,a,b)          for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b)          for(ll i=(ll)a;i<(ll)b;++i)
#define loopr(i,a,b)          for(int i=(int)a;i>=(int)b;--i)
#define MOD                   1000000007
#define MAX                   1e9
#define MIN                   -1e9
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define psi                   pair<string, int>
#define pci                   pair<char, int>
#define all(p)                p.begin(),p.end()
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define vi                    vector<int>
#define vll                   vector<long long int>
#define vs                    vector<string>
#define si                    set<int>
#define ss                    set<string>
#define sll                   set<long long int>
#define mii                   map<int, int>
#define mll                   map<long long int, long long int>
#define msi                   map<string, int>
#define umii                  unordered_map<int, int>
#define umsi                  unordered_map<string, int>
typedef long long int ll;
typedef unsigned int uint;
typedef unsigned long long int ull;
using namespace std;

// Time complexity : O(n*log(log(n)))

vector<bool> primes(vector<bool> &num){
    int n = num.size();
    int i;
    rloop(p, 2, sqrt(n)){
        // if p index is prime eliminate all the non prime that which is divisble by p
        if(num[p]){
            i = 0;
            // while(p*(p + i) <= n){ // p*(p + i) <= n, i <= n/p - p
            while(i <= ((n/p) - p)){
                num[p*(p + i)] = false;
                i += 1;
            }
        }
    }

    return num;
}

int main(){
	ios::sync_with_stdio(0);

    int n , t;
    cin >> t;
    while(t-- > 0){
        cin >> n;
        vector<bool> num(n, true);

        primes(num);

        rloop(i, 2, n){
            if(num[i])
                    cout << i << " ";
        }
        cout << endl;

        num.clear();

    }

	return 0;
}

