/*
 * @author    : macab (macab@debian)
 * @file      : BearandSpecies
 * @created   : Thursday Feb 14, 2019 03:36:59 IST
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
 * Source : https://www.codechef.com/problems/SPECIES
*/

ll waysno(vector<vs> &matrix, int current_row, int current_col){
    if(current_row >matrix[0].size()  and current_col > matrix[0][0].size()) return 0;

    if()
}

int main(){
    /*code goes here*/

    int T, N, i, j;
    string tmp;
    char c;
    cin >> T;
    while(T > 0){
        cin >> N;
        vector<vs> matrix(N, vs(N)); // this is 2D dimensional char matrix

        loop(i, 0, N){
            cin >> tmp;
            loop(j, 0, N){
                matrix[i][j].push_back(tmp[j]);
            }
        }
        // just print to check out the insertion
        loop(i, 0, N){
            loop(j, 0, N)
                cout << matrix[i][j] << " ";
            cout << endl;
        }
        waysno(matrix, 0, 0);
        T--;
    }
    return 0;
}

