/*
 * @author    : macab (macab@debian)
 * @file      : MaximandBiology
 * @created   : Friday Apr 19, 2019 19:45:29 IST
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
 * source : https://codeforces.com/problemset/problem/1151/A
 */

const string target = "ACTG";

int minop4(string str){
        //cout << str << endl;
        int cost = 0;
        int tmp = 0;
        for(int i = 0; i < str.length(); i++){
            tmp = abs(int(str[i]) - int(target[i]));
            tmp > 13 ? tmp = 26- tmp : tmp;
            cost += tmp;
            //cout << cost << " " << tmp << endl;
        }
        return cost;

}
int minop(string str, int n){

    int  op = MAX;
    for(int i = 0; i <= n - 4; i++){
        string sub = str.substr(i, 4);
        //cout << sub << endl;
        op = min(op, minop4(sub));
    }

    return op;

}

int main(){
	ios::sync_with_stdio(0);
	int n;
    string str;
    cin >> n;
    cin >> str;

    //vector<char> charset;
    // charset
    //for(int i = 65; i < 65 + 26; i++)
    //        charset.emplace_back(char(i));

    cout << minop(str, n) << endl;
    //cout << minop4("ZDAT", charset);

    //for(auto x: charset)
    //        cout << x ;
	return 0;
}

