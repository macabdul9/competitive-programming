/*
 * @author    : macab (macab@debian)
 * @file      : subsetofaset
 * @created   : Tuesday Feb 19, 2019 07:10:09 IST
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
using namespace std;

void printsubset(vi &aux){
    if(aux.empty())
            return;
    for(auto &x : aux)
            cout << x << ", ";
    cout << endl;
    return;
}
int total = 0;
void subsetofaset(vi &v, int itr, string ans){
    if(itr >= v.size() ){
        ++total;
        cout << ans <<endl;
        ans.pop_back();
        return;
    }
    ans += "";
    subsetofaset(v, itr + 1, ans);
    ans.append(to_string(v[itr]) + ",");
    subsetofaset(v, itr + 1, ans);

}

int main(){
    /*code goes here*/
    int t, n, itr, tmp;
    cin >> t;
    srand(time(0));
    vi v, aux;
    while(t-- > 0){
        cin >> n;
        loop(itr, 0, n){
                //v.emplace_back(rand() % 5);
                cin >> tmp;
                v.emplace_back(tmp);
        }
        cout << "set is : " << endl;
        for(auto &x : v)
                cout << x << " ";
        cout << endl << "subsetofaset :" << endl;
        subsetofaset(v, 0, "");
        cout << "total subset = " << total << endl;
    }
    return 0;
}

