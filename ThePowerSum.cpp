/*
 * @author    : macab (macab@debian)
 * @file      : ThePowerSum
 * @created   : Thursday Feb 07, 2019 00:54:21 IST
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
#define all(p)                p.begin(),p.end()
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define vi                    vector<int>
#define vs                    vector<string>
#define si                    set<int>
#define ss                    set<string>
#define mii                   map<int, int>
typedef long long int ll;
using namespace std;

/*
 * source : https://www.hackerrank.com/challenges/the-power-sum/problem
*/
int total = 1;
vi getPowerSum(vi v, vi aux, int itr){
    total++ ;
    if(itr >= v.size())return aux;

    int i, b;
    b = aux.size();
    loop(i, 0, b){
            //total++;
            aux.push_back(aux[i] + v[itr]);
    }
    return getPowerSum(v, aux, itr + 1);
}

int main(){
    /*code goes here */
    int x, n;
    cin >> x >> n;
    // vector for a^n x = 1,2,3.....x
    vi v;
    for( int i = 1; pow(i, n) <= x; i++ )
            v.push_back(pow(i, n));

    for(auto element : v)
            cout << element << " ";
    // this is sum of all possible subset
    vi aux;
    aux.push_back(0);
    aux = getPowerSum(v, aux, 0);
    int count = 0;
    for(auto element:aux){
            if(element == x)
                    count++ ;

    }
    cout << endl << count << "total function call = " << total << endl;
    return 0;
}

