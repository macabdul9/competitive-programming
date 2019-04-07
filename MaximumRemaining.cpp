/*
 * @author    : macab (macab@debian)
 * @file      : MaximumRemaining
 * @created   : Monday Apr 08, 2019 02:00:05 IST
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

// source : https://www.codechef.com/APRIL19B/problems/MAXREM

int main(){
	ios::sync_with_stdio(0);
    uint n, tmp;
    scanf("%u", &n);
    set<uint> arr;
    loop(i, 0, n){
        scanf("%u", &tmp);
        arr.insert(tmp);
    }
    if(arr.size() == 1)
            cout << 0 << endl;
    else{
        uint last = *arr.rbegin();
        arr.erase(*arr.rbegin());
        uint sla = *arr.rbegin();
		cout << (sla)<< endl;
    }



	return 0;
}

