/*
 * @author    : macab (macab@debian)
 * @file      : MeeraandHerCloset
 * @created   : Monday Feb 25, 2019 22:16:37 IST
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
 * source : https://www.codechef.com/CCOQ2019/problems/MCLOSET
 * */


int main(){
    /*code goes here*/
    uint t, n, tmp;
    vector<uint> clothes;
    vector<uint> maxdes(3); // of size 3  first one is for sum second left third right indices
    cin >> t;
    while(t-- > 0){
        maxdes[0] = maxdes[1] = maxdes[2] = 0;
        cin >> n;
        loop(i, 0, n){
            cin >> tmp;
            clothes.emplace_back(tmp);
        }
        int i = 0;
        //cout << clothes.size() << endl;
        while(i <= clothes.size() - 1 - i){
            //cout << clothes[i] << " " << clothes[clothes.size() - 1 - i] << endl;
            if(i == clothes.size() - 1 - i and  clothes[i] > maxdes[i] ){
                maxdes[0] = clothes[i];
                maxdes[1] = i + 1;
                maxdes[2] = clothes.size() - i;
            }
            else if(clothes[i] + clothes[clothes.size() - 1 - i ] > maxdes[0]){
                maxdes[0] = clothes[i] + clothes[clothes.size() - 1 - i ];
                maxdes[1] = i + 1;
                maxdes[2] = clothes.size() - i;
            }
            else if(clothes[i] + clothes[clothes.size() - 1 - i ] == maxdes[0] and abs(i + 1 - clothes.size() - i) < abs(maxdes[1] - maxdes[2])){
                maxdes[0] = clothes[i] + clothes[clothes.size() - 1 - i ];
                maxdes[1] = i + 1;
                maxdes[2] = clothes.size() - i;
            }
            ++i;
        }
        cout << maxdes[0] << " " << maxdes[1] << " "<< maxdes[2] << endl;
        maxdes.clear();
        clothes.clear();
    }

    return 0;
}

