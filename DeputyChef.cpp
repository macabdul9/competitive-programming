/*
 * @author    : macab (macab@debian)
 * @file      : DeputyChef
 * @created   : Thursday Feb 07, 2019 21:17:45 IST
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
using namespace std;

/*
 * source : https://www.codechef.com/FEB19B/problems/DEPCHEF
*/
int main(){
    /*code goes here */
    uint T, N;
    cin >> T;
    while(T > 0){
        cin >> N;
        int attack_defence[2][N]; //[attack][defence]
        //attack values
        for(uint i = 0; i < N; i++)
                cin >> attack_defence[0][i];
        //defence values
        for(uint i = 0; i < N; i++)
                cin >> attack_defence[1][i];

        int left , right, best_defence;
        best_defence = -1;

        //let get that
        for(uint i  = 0; i < N; i++){
            left = i - 1;
            right = i + 1;
            if(left < 0)left = N - 1;
            if(right > N - 1)right = 0;
            // cout << " left = " << left << " right = " << right << endl;
            if(attack_defence[1][i] > attack_defence[0][left] + attack_defence[0][right]  and attack_defence[1][i] > best_defence)
                    best_defence = attack_defence[1][i];
        }
        cout << best_defence << endl;
        best_defence = -1;

        T--;
    }
    return 0;
}

