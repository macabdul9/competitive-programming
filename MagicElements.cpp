/*
 * @author    : macab (macab@debian)
 * @file      : MagicElements
 * @created   : Saturday Feb 23, 2019 20:56:55 IST
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
typedef unsigned int uint;
typedef unsigned long long int ull;
using namespace std;
/*
 * source : https://www.codechef.com/problems/ZOZ
 * */
ull bsearch(vector<ull> vect, ull current,ull sum, ull k){
    if(current < 0 or current > vect.size() - 1) return 0;
    
}

int main(){
    /*code goes here*/
    ull t, n , k, tmp;
    vector<ull> vect;
    cin >> t;
    while(t-- > 0){
        cin >> n >> k;
        loop(i, 0, n){
            cin >> tmp;
            vect.emplace_back(tmp);
        }
        sort(vect.begin(), vect.end());
        bsearch(vect, accumulate(vect.begin(), vect.end(), 0));
    }

    return 0;
}

