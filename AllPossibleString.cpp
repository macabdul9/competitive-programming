/*
 * @author    : macab (macab@debian)
 * @file      : AllPossibleString
 * @created   : Thursday Feb 07, 2019 14:34:06 IST
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

// source: https://www.geeksforgeeks.org/print-all-combinations-of-given-length/

void allpossiblestring(char ch[],string str, int size){
    if(str.length() == size){
            cout << str << endl;
            return;
    }
    allpossiblestring(ch, str + ch[0], size);
    allpossiblestring(ch, str + ch[1], size);
    allpossiblestring(ch, str + ch[2], size);
    allpossiblestring(ch, str + ch[3], size);

}
int main(){
    /*code goes here */
    char ch[] = {'a', 'b','c','d'};
    allpossiblestring(ch, "", 4);
    return 0;
}

