/*
 * @author    : macab (macab@debian)
 * @file      : TheBlockGame
 * @created   : Thursday Feb 14, 2019 05:31:14 IST
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
 * Source : https://www.codechef.com/problems/PALL01
 * */
int reverse(int n, int r){
        if(!n)
                return 0;
        r = r*10 + n%10;
        return reverse(n / 10, r) + r - r / 10;
}
int main(){
    /*code goes here*/
    int t, n;
    cin >> t;
    while(t > 0){
        cin >> n;
        if(n == reverse(n, 0))
                cout << "wins" << endl;
        else
                cout << "losses" << endl;

        t--;
    }
    return 0;
}

