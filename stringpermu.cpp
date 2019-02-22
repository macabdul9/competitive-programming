/*
 * @author    : macab (macab@debian)
 * @file      : stringpermu
 * @created   : Friday Feb 22, 2019 23:22:39 IST
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
 * source : https://www.byte-by-byte.com/permutations
 * */

void stringpermu(string str, string aux, ss& result){
        if(str.empty()){
            result.emplace(aux);
            return;
        }
        for(int i = 0; i < str.length(); i++){
            stringpermu(str.substr(0, i)+str.substr(i + 1, str.length()), aux + str[i], result);
        }
}

int main(){
    /*code goes here*/

    ss result;
    stringpermu("abcd", "", result);
    for(auto x : result)
            cout << x << endl;

    return 0;
}

