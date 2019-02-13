/*
 * @author    : macab (macab@debian)
 * @file      : sumofpair
 * @created   : Tuesday Feb 12, 2019 03:03:33 IST
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
#define vl                    vector<long long int>
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

// in this prob i gotta find the pair of elements of two array whose sum is ie. x

ll getpair(vl &v1, vl &v2, vector<vector<bool>> &marked, ll current_row, ll current_col, ll target){

    if(current_row > v1.size() - 1 or  current_col < 0) return 0;

    if(v1[current_row] + v2[current_col] < target)
            return getpair(v1, v2, marked, current_row + 1, current_col, target);
    else if(v1[current_row] + v2[current_col] > target)
            return getpair(v1, v2, marked, current_row, current_col - 1, target);
    else{
        if(!marked[current_row][current_col]){ // if a shell is unvisited
            cout << v1[current_row] << " , " << v2[current_col] << endl;
            marked[current_row][current_col] = true;
            return 1 + getpair(v1, v2, marked, current_row + 1, current_col, target);
            return 1 + getpair(v1, v2, marked, current_row, current_col - 1, target);
        }else{
            return 0;
        }
    }
}

int main(){
    /*code goes here*/
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    vl v1, v2;
    ll m, n, target;
    cout << "enter size of both array and target,  array will be filled with random number less than 20 : " << endl;
    cin >> m >> n >> target ;
    int  i;
    srand(time(0));
    loop(i, 0, m){
        v1.push_back(rand() % 15);
        // v1.push_back(1);
    }
    loop(i, 0, n){
        v2.push_back(rand() % 15);
        // v2.push_back(1);
    }
    // sort both vectors
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    loop(i, 0, m)
            cout << v1[i] << " ";
    cout << endl;
    loop(i, 0, n)
            cout << v2[i] << " ";
    cout << endl;
    vector<vector<bool> > marked(10, vector<bool>(10, false));
    cout << "total pair " << getpair(v1, v2, marked, 0, v2.size() - 1, target);


    /*
     * print the vector to check the initialization
    for(int i = 0; i < 10; i ++){
        for(int j = 0; j < 10; j++)
            cout << location_matrix[i][j] << "   ";
        cout << "\n";
    }
    */

    return 0;
}

