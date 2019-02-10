/*
 * @author    : macab (macab@debian)
 * @file      : runningtime
 * @created   : Sunday Feb 10, 2019 05:27:02 IST
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

int main(){
    /*code goes here */
    // Record start time
    auto start = std::chrono::high_resolution_clock::now();

    // Portion of code to be timed
    int i;
    loop(i, 0, 100000){
        //do nothing
        cout << "";
    }
    // Record end time

    auto finish = std::chrono::high_resolution_clock::now();

    chrono::duration<double> elapsed = finish - start;

    cout << fixed << elapsed.count() << endl; //fixed for fixed value not expo
    return 0;
}

