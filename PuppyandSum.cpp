/*
 * @author    : macab (macab@debian)
 * @file      : PuppyandSum
 * @created   : Thursday Feb 14, 2019 05:56:49 IST
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
 * source : https://www.codechef.com/problems/PPSUM
 */
int sum1(int n){
    if( n < 2)
            return n;
    return n + sum1(n - 1);
}
int sum2(int n, int d){
    if(d == 1)
        return sum1(n);
    return sum2(sum1(n), d - 1);
}
int main(){
    /*code goes here*/
    int t, n , d;
    cin >> t;
    while(t > 0){
        cin >> d >> n;
        cout << sum2(n, d) << endl;
        t--;
    }
    return 0;
}

