/*
 * @author    : macab (macab@debian)
 * @file      : CheatingonQueue
 * @created   : Wednesday Mar 13, 2019 11:20:22 IST
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
 * source : https://www.codechef.com/MARCH19B/problems/CHONQ
 */
int totaljoin(vi &anger, int k){
    if(anger[anger.size() - 1] > k) return anger.size();

    int minjoin = 0, p = anger.size() - 1, div, sum;

    while(p >= 0){

        for(int j = 0; j < anger.size(); j++){
            sum = 0;
            div = 1;
            for(int k = j ; k < anger.size(); k++){
                sum += floor(anger[k]/div);
                div++;
            }
            if(sum <= k){
                p = j - 1;
                minjoin++;
                break;
            }
        }
    }
    return minjoin;

}


int main(){
	ios::sync_with_stdio(0);

	/*your code goes here*/
    int t, n, k, tmp;
    vi anger;
    cin >> t;
    while(t-- > 0){
        cin >> n >> k;
        loop(i, 0, n){
            cin >> tmp;
            anger.emplace_back(tmp);
        }
        cout << totaljoin(anger, k) << endl;

    }
	return 0;
}

