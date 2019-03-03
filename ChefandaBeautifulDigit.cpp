/*
 * @author    : macab (macab@debian)
 * @file      : ChefandaBeautifulDigit
 * @created   : Sunday Mar 03, 2019 09:25:59 IST
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

/*https://www.codechef.com/MARCH19B/problems/CHDIGER*/

ull digit(ull num, int d){
    multiset<int> mset;
    int tmp;
    // retireiving digits of num storing in a set
    while(num > 0){
        tmp = num % 10;
        if(tmp > d)//replace the digit with d
                tmp = d;
        mset.insert(tmp);
        num /= 10;
    }
    /*
    for(auto x : mset){
        cout << x << " ";
    }
    */
    ull result = 0;

    //constructing the  number
    for(auto x : mset){
        result *= 10;
        result += x;
    }
    return result;
}
int main(){
    /*code goes here*/
    ull t, n, d;
    cin >> t;
    while(t-- > 0){
            cin >> n >> d;
            cout << digit(n, d) << endl;
    }
    return 0;
}

