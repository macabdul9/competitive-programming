/*
 * @author    : macab (macab@debian)
 * @file      : StringInfinity
 * @created   : Tuesday Apr 16, 2019 02:09:51 IST
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
 * source : https://hack.codingblocks.com/practice/p/346/1089
 */

int nonEmptySubstring(string s){
    if(s.length()==0) return 0;
    if(s.length() == 1) return 1;
    int s_len = s.length();
    /*
    int count = 0;
    for(int i = 0; i < s_len; i++){
        count += (i + 1);
    }
    */
    int count = (s_len*(s_len + 1))/2;

    return count;
}


int main(){
	ios::sync_with_stdio(0);

    string s;
    cin >> s;

    cout << nonEmptySubstring(s) << endl;


	return 0;
}

