/**
 * @author      : macab (macab@debian)
 * @file        : subset
 * @created     : Wednesday Feb 06, 2019 20:33:05 IST
 */


#include<bits/stdc++.h>
#define endl 		         "\n"
#define ll                    long long int
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

using namespace std;

vi subset(vector<int> v, vector<int> aux, int itr){
    if(itr >= v.size())return aux;
    int i, b;
    b = aux.size();
    //cout << b << endl;
    loop(i, 0, b){
        aux.push_back(aux[i] + v[itr]);
    }
    return subset(v, aux, itr  + 1);
}


int main(){
    vector<int> v;
    vector<int> aux;
    aux.push_back(0);
    int i;
    loop(i, 1, 5)
        v.push_back(i);

    aux = subset(v, aux, 0);
    for(auto x : aux)
        cout << x << " ";

	return 0;
}

