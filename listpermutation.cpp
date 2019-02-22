/*
 * @author    : macab (macab@debian)
 * @file      : listpermutation
 * @created   : Friday Feb 22, 2019 20:44:12 IST
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

int total = 0;

void printvector(vi &vect){
    for(auto &x : vect)
            cout << x << " ";
    cout << endl;
}

void listpermutation(vi &vect, int itr){
        //vi aux = vect;
        if(itr == vect.size() - 1){
            printvector(vect);
            ++total;
            return;
        }
        loop(i, itr, vect.size()){
            swap(vect[i], vect[itr]);
            listpermutation(vect, itr + 1);
            // since a vector is mutable hence we gotta preserve the initial state of the list so reverse the last fucking swap
            swap(vect[i], vect[itr]);
        }

}

int main(){
    /*code goes here*/
    srand(time(0));
    vi vect;
    int n = 4;
    loop(i, 1, n){
            //vect.emplace_back(rand() % 10);
            vect.emplace_back(i);
    }
    /*
    cout << " vector is : \n";
    for(auto &x : vect)
            cout << x << " ";
    cout << endl;
    */
    listpermutation(vect, 0);
    cout << "total = " << total << endl;


    return 0;
}

