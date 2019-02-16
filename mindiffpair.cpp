/*
 * @author    : macab (macab@debian)
 * @file      : mindiffpair
 * @created   : Friday Feb 15, 2019 17:08:17 IST
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
 * Description: find the pairs in a list whose abs diff is minimun
 * ie: [0,10,10,9,6,13,24,6] in this list min diff is 0 and pairs are (10, 10) and (6, 6)
 * */

ll getmindiffpair(vector<ll> &list, vector<vector<bool>> &visited, multimap<ll, ll> &container, ll row, ll col){
        if(row > list.size() - 1 and col > list.size() - 1) return 0; //if we reach end of the matrix
        if(row == col) return 0; // bcoz this won't a valid pair ,both element will b same
        if(abs(list[row] - list[col]) < abs(container.begin()->first - container.begin()->second)){ // prevous minimun wasn't minimun
            if(!visited[row][col]){  // if cell isn't visited earlier
                container.clear(); // since this diff is lower than prev so we don't need that anymore
                visited[row][col] = true; // mark this visited
                container.insert(pll(list[row], list[col]));
                return getmindiffpair(list, visited, container, row + 1, col) + getmindiffpair(list, visited, container, row, col + 1);
            }else{ //if already visited
                return 0;
            }
        }else if(abs(list[row] - list[col]) == abs(container.begin()->first - container.begin()->second)){ // means we've found another pair whose diff is minimun
             if(!visited[row][col]){  // if cell isn't visited earlier
                visited[row][col] = true; // mark this visited
                container.insert(pll(list[row], list[col]));
                return 1 + getmindiffpair(list, visited, container, row + 1, col) + getmindiffpair(list, visited, container, row, col + 1);
            }else{ //if already visited
                return 0;
            }
        }else{ // if current abs is larger  then whole row  will not have minimun hence increase the check the next row
            return getmindiffpair(list, visited, container, row + 1,  col);
        }



}

int main(){
    /*code goes here*/
    int test;
    ll i, j, tmp; // test case
    cin >> test;
    ll n; //no of elements
    srand(time(0)); //for diff rand no.
    while(test > 0){
        cin >> n;
        vector<ll> list;

        loop(i, 0, n){
            list.push_back(rand() % 100); //random no below 100
        }
        vector<vector<bool>> visited(n, vector<bool>(n, false)); // visited cells ; initially all are unvisited
        multimap<ll, ll> container ; //continers that contains the pairs
        container.insert(pll(MAX, MAX));
        getmindiffpair(list, visited, container, 0, 1);
        //print list and visited to test

        /*
        loop(i, 0, n)
            cout << list[i] << " ";
        cout  << endl;
        loop(i, 0, n){
            loop(j, 0, visited[i].size())
                    cout << visited[i][j] << " ";
            cout << endl;
        }
        visited.clear();
        cout << endl;

        */

        test--;
    }
    return 0;
}

