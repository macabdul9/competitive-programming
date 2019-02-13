/*
 * @author    : macab (macab@debian)
 * @file      : ksum
 * @created   : Wednesday Feb 13, 2019 22:38:45 IST
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
/*
    Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
    For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
    Bonus: Can you do this in one pass?
*/

bool getpair(vi v, int k){
    unordered_set<int> s;
    int itr;
    s.insert(v[0]);
    loop(itr, 0, v.size()){
        if(s.find(k -v[itr]) != s.end())
            return true;
        else
            s.insert(v[itr]);
    }
    s.clear();
    return false;
}

int main(){
    /*code goes here*/
    int test;
    cin >> test ;
    ll n, k, itr, tmp;
    vi v;
    srand(time(0));
    while(test > 0){
        cin >> n >> k;
        loop(itr, 0, n){
                tmp =  rand()  % 20;
                v.push_back(tmp);
                cout << tmp << " ";
        }
        cout << endl << boolalpha << getpair(v, k) << endl ;
        v.clear();
        test --;
    }
    return 0;
}

