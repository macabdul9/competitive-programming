/*
 * @author    : macab (macab@debian)
 * @file      : TheArmy
 * @created   : Friday Mar 01, 2019 10:21:01 IST
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
    int t, n, m, pos, prev, current;

    pos = 1; // this is current position
    cin >> t;
    vi shout;
    while(t-- > 0){
        cin >> n >> m;
        cin >> current; //first selection
        m -= 1; //
        loop(i, 0, n){ // intial state ie n = 6, m = 1, 3  then army will shout 3 2 1 0 1 2
            shout.push_back(current >= i ? current - i : i - current);
        }
        while(m > 0){
            loop(i, 0, n)
                cout << shout [i] << " ";
            cout << endl;
            cin >> current;
            loop(i, 0, n){
                cout << (current >= i ? current - i : i - current) << endl;
                current  = current >= i ? current - i : i - current;
                cout << current << endl;
                if(current > shout[i]){
                    shout[i] = current;
                }
            }

            m--;
        }
        loop(i, 0, n)
                cout << shout [i] << " ";
        cout << endl;

    }
    return 0;
}

