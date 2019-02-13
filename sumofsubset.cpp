/*
 * @author    : macab (macab@debian)
 * @file      : sumofsubset
 * @created   : Saturday Feb 09, 2019 17:34:04 IST
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
typedef long long int ll;
typedef unsigned int uint;
using namespace std;

int sumofsubset(vi v, vi aux, int itr, int k, int count){
    if(itr == v.size())
        return count;
    int b, i;
    b = aux.size();
    loop(i, 0, b){
        if(aux[i] + v[itr] == k)
            count++;
        aux.push_back(aux[i] + v[itr]);
    }
    return sumofsubset(v, aux, itr + 1, k, count);
}

// Given an array find all subsets of A which sum to K

int main(){
    /*code goes here */
    vi v, aux;
    int n, k, i, tmp;
    cin >> n >> k;
    loop(i, 0, n){
            cin >> tmp;
            v.push_back(tmp);
    }
    aux.push_back(0);
    cout << sumofsubset(v, aux, 0, k, 0);
    return 0;
}

