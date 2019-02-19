/*
 * @author    : macab (macab@debian)
 * @file      : Processingastring
 * @created   : Tuesday Feb 19, 2019 06:09:58 IST
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
 * source : https://www.codechef.com/problems/KOL15A
 * */
int main(){
    /*code goes here*/
    int t, sum;
    cin >> t;
    string str;
    while(t-- > 0){
        cin >> str;
        sum = 0;
        for(char& c:str){
            if(int(c) > 47 and int(c) < 58 )
                    sum += int(c) - 48;
        }
        cout << sum << endl;
    }
    return 0;
}

