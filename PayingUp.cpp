/*
 * @author    : macab (macab@debian)
 * @file      : PayingUp
 * @created   : Friday Mar 22, 2019 20:03:04 IST
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

/*
 * source : https://www.codechef.com/problems/MARCHA1
*/

void getsusbet(vector<int> notes, int ans, int itr, set<int> &nset){

    if(itr == notes.size()){
        nset.insert(ans);
        return;
    }
    getsusbet(notes, ans, itr + 1, nset);
    ans += notes[itr];
    getsusbet(notes, ans, itr + 1, nset);

}

int main(){
	ios::sync_with_stdio(0);

    uint t, n, m, tmp;
    vector<int> notes;
    set<int> nset;
    cin >> t;
    while(t-- > 0){
        cin >> n >> m;
        loop(i, 0, n){
            cin >> tmp;
            notes.emplace_back(tmp);
        }
        getsusbet(notes, 0, 0, nset);
        if(nset.find(m) != nset.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        notes.clear();
        nset.clear();
    }

	return 0;
}

