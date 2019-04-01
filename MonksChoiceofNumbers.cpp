/*
 * @author    : macab (macab@debian)
 * @file      : MonksChoiceofNumbers
 * @created   : Tuesday Apr 02, 2019 02:43:50 IST
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
 * source : https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/monks-choice-of-numbers-1
 */
int countsetbits(int n){
    if(!n) return 0;
    return 1 + countsetbits(n & (n - 1));
}

int maxcake(vector<int> &numbers, int n, int k){
    loop(i, 0, n){
        numbers[i] = countsetbits(numbers[i]);
    }
    sort(numbers.begin(), numbers.end(), greater<int>());

    int totoal = 0;
    for(int i = 0; i < k; i++){
            totoal += numbers[i];
    }
    return totoal;
}


int main(){
	ios::sync_with_stdio(0);

    int t, n, k, tmp;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<int> numbers(n);
        loop(i, 0, n){
            cin >> tmp;
            numbers[i] = tmp;
        }

        cout << maxcake(numbers, n, k) << endl;
        numbers.clear();

    }



	return 0;
}

