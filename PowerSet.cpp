/*
 * @author    : macab (macab@debian)
 * @file      : PowerSet
 * @created   : Monday Mar 04, 2019 12:58:14 IST
*/
#include<bits/stdc++.h>
#define endl 		         "\n"
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
 * source : https://www.codechef.com/problems/CDPWST */
void sumofsubset(vi &set, int itr, vector<ull> &result){
        if(itr >= set.size()) return;

        int old_size = result.size();
        for(int i = 0; i <old_size; i++){
            int b = result[i] + set[itr];
            result.push_back(b);
        }
        sumofsubset(set, itr + 1, result);

}
ull sum(int n){
    ull subsum = 0;
    ull length = 1;
    for(int i = 1; i <= n; i++){
        subsum = (2*subsum%MOD + length*i%MOD)%MOD;
        length *= 2;
    }

    return subsum%MOD;
}


int main(){
    //ios::sync_with_stdio(0);
    //cin.tie(NULL);

    /*code goes here*/
    int t, n, tmp;
    vector<int> set;
    vector<ull> result ;

    cin >> t;
    while(t-- > 0){
        cin >> n;
        result.push_back(0);

        for(int i = 1 ; i <= n; i++){
            set.push_back(i);
        }

        //sumofsubset(set, 0, result);
        /*
        for(auto x : result)
                cout << x << " ";
        cout << endl;
        */
        //cout << "subset waale se = " << accumulate(result.begin(), result.end(), 0) << endl;
        cout << "sum waale se = " << sum(n) << endl;
        result.clear();
        set.clear();

    }
    return 0;
}

