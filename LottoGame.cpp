/*
 * @author    : macab (macab@debian)
 * @file      : LottoGame
 * @created   : Tuesday Mar 19, 2019 14:32:34 IST
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

/* ---problem statement---
 *  you have to to choose sets k numbers from set s (|s| > 6) such they're in increasing order s = [ 1, 2, 3, 4, 5, 6, 7, 8]
 *  sets will be [1, 2, 3, 4, 5, 6] [1, 2, 3, 4, 5, 7] [1, 2, 3, 4, ,5 , 8] ..........[3, 4, 5, 6, 7, 8]
 */

int main(){
	ios::sync_with_stdio(0);

    // brute - force approach
    //
    int arr[] = {1, 2, 4, 5, 7, 8, 9, 12};
    int limit = sizeof(arr)/sizeof(int);
    int total = 0;
    for(int i = 0; i < limit - 5; i++){
        for(int j = i + 1; j < limit - 4; j++){
            for(int k = j + 1; k < limit - 3; k++){
                for(int l = k + 1; l < limit - 2; l++){
                    for(int m = l + 1; m < limit - 1; m++){
                        for(int n = m + 1; n < limit; n++){
                            cout << arr[i] << " " << arr[j] << " " << arr[k] << " " << arr[l] << " " << arr[m] << " " << arr[n] << endl;
                            ++total;
                        }
                    }
                }
            }
        }
    }
    cout << "total = " << total << endl;

	return 0;
}

