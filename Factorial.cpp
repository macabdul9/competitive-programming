/*
 * @author    : macab (macab@debian)
 * @file      : Factorial
 * @created   : Monday Feb 25, 2019 06:28:24 IST
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
 * source : https://www.codechef.com/problems/FCTRL */
ull Z(ull N){
    ull result = 0;
    ull i = 1;
    while(N/pow(5, i) > 0){
            //cout << pow(5, i) << " " << N/pow(5, i) << endl;
            result += N/pow(5, i);
            i++;
    }
    return result;
}

int main(){
    /*code goes here*/
    ull t, n;
    cin >> t;
    while(t-->0){
            cin >> n;
            cout << Z(n) << endl;
    }
    return 0;
}

