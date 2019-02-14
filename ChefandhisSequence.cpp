/*
 * @author    : macab (macab@debian)
 * @file      : ChefandhisSequence
 * @created   : Thursday Feb 14, 2019 06:12:05 IST
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

int main(){
    /*code goes here*/
    int t, n, f, i, tmp;
    string str, pattern, s;
    cin >> t;
    while(t > 0){
        cin >> n;
        loop(i, 0, n){
                cin >> tmp;
                s = to_string(tmp);
                str += s;
        }
        cin >> f;
        loop(i, 0, f){
                cin >> tmp;
                s = to_string(tmp);
                pattern += s;

        }
        tmp = str.find(pattern);
        //cout << str << " " << pattern << tmp << endl;
        if(tmp != -1)
                cout << "Yes" << endl;
        else
                cout << "No" << endl;
        str = "";
        pattern = "";
        t--;
    }

    return 0;
}

