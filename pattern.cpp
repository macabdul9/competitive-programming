/*
 * @author    : macab (macab@debian)
 * @file      : pattern
 * @created   : Monday Apr 01, 2019 21:24:12 IST
*/
#include<bits/stdc++.h>
#define endl                  "\n"
#define merge(a, b)           a##b
#define loop(i,a,b)           for(int i=(int)a;i<(int)b;++i)
#define rloop(i,a,b)          for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b)          for(ll i=(ll)a;i<(ll)b;++i)
#define loopr(i,a,b)          for(int i=(int)a;i>=(int)b;--i)
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
#define vll                   vector<long long int>
#define vs                    vector<string>
#define si                    set<int>
#define ss                    set<string>
#define sll                   set<long long int>
#define mii                   map<int, int>
#define mll                   map<long long int, long long int>
#define msi                   map<string, int>
#define umii                  unordered_map<int, int>
#define umsi                  unordered_map<string, int>
typedef long long int ll;
typedef unsigned int uint;
typedef unsigned long long int ull;
using namespace std;
/*
 * source : https://www.hackerrank.com/challenges/printing-pattern-2/problem
 */


void createPattern(int n){
    int d = 2*n - 1;
    int arr[d][d];

    // set initial
    int mr, mc;
    mr = mc = d / 2;
    arr[mr][mc] = 1;

    loop(i, 1, n){

        // fill upper row
        loop(j, mc - i + 1, mc + i + 1){
            arr[mr - i][j] = arr[mr][mc] + i;
        }
        // fill bottom row
        loop(j, mc - i + 1, mc + i + 1){
            arr[mr + i][j] = arr[mr][mc] + i;
        }

        // fill right col
        loop(j, mr - i + 1, mr + i + 1){
            arr[j][mc - i] = arr[mr][mc] + i;
        }
        // fill left col
        loop(j, mr - i + 1, mr + i + 1){
            arr[j][mc + i] = arr[mr][mc] + i;
        }

        // corners !
        // top left
        arr[mr - i][mc - i] = arr[mr][mc] + i;
        // top right
        arr[mr - i][mc + i] = arr[mr][mc] + i;
        // bottom right
        arr[mr + i][mc + i] = arr[mr][mc] + i;
        // bottom left
        arr[mr + i][mc - i] = arr[mr][mc] + i;

    }

    // print pattern !
    loop(i, 0, d){
        loop(j, 0, d){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

int main(){
	ios::sync_with_stdio(0);

    createPattern(6);
	return 0;
}

