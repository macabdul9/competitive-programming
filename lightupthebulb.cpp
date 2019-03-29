/*
 * @author    : macab (macab@debian)
 * @file      : lightupthebulb
 * @created   : Wednesday Mar 27, 2019 21:43:32 IST
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
 * source : https://www.codingninjas.in/app/practice/92086/2965/light-up-the-bulbs
 */

int main(){
	ios::sync_with_stdio(0);

    int n, x, y, cost, current;
    string str;
    cin >> n >> x >> y;
    cin >> str;
    // first reverse
    int front = 0;
    int back = 0;
    int lastzero = 0;
    for(int i = 0; i < n; i++){
        if(str[i] == '0'){
            lastzero = i;
            break;
        }
    }
    int zero = 0;
    if(str[0] == '0')
            zero = 1;
    for(int i = 1; i < n; i++){
        if(str[i] == '1' and lastzero < i){
                front += x;
        }
        else if(str[i] == '0' and i < lastzero){
                lastzero = i;
        }
        else if(str[i] == '0')
                zero++;

    }
    

    for(int i = 0; i < n; i++){
            if(str[i] == '0'){
                lastzero = i;
                break;
            }
    }


    for(int i = n - 2; i > -1; i--){
        if(str[i] == '1' and i < lastzero)
                back += x;
        else if(str[i] == '0' and i > lastzero)
                lastzero = i;
    }

    back <= front ? cost = back : cost = front;
    if(zero > 0)
            cost += y;
    cout << cost;


	return 0;
}

