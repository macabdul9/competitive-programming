/*
 * @author    : macab (macab@debian)
 * @file      : JustaSimpleSum
 * @created   : Tuesday Feb 19, 2019 04:31:43 IST
*/
#include<bits/stdc++.h>
#define endl 		         "\n"
#define loop(i,a,b)           for(int i=(int)a;i<(int)b;++i)
#define rloop(i,a,b)          for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b)          for(ll i=(ll)a;i<(ll)b;++i)
#define loopr(i,a,b)          for(int i=(int)a;i>=(int)b;--i)
#define clr(x)                x.clear()
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
#define vs                    vector<string>
#define si                    set<int>
#define ss                    set<string>
#define mii                   map<int, int>
#define msi                   map<string, int>
#define umii                  unordered_map<int, int>
#define umsi                  unordered_map<string, int>
typedef long long int ll;
typedef unsigned long long int ull;
typedef unsigned int uint;
using namespace std;

ull expmod(ull n, ull p, ull m) {
   if (p == 0) return 1;
   int nm = n % m;
   ull r = expmod(nm, p / 2, m);
   r = (r * r) % m;
   if (p % 2 == 0) return r;
   return (r * nm) % m;
}

int main(){
    /*code goes here*/
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    ull n, m, sum, i;
    while( t-- > 0){
        cin >> n >> m;
        sum = 0;
        for(i = 1 ; i <= n; i ++){
            sum = (sum + expmod(i, i, m))%m;
        }
        cout << sum << endl;
    }

    return 0;
}

