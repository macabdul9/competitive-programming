/*
 * @author    : macab (macab@debian)
 * @file      : segmentedSiev
 * @created   : Sunday Mar 31, 2019 02:12:14 IST
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

// this fun returns primes upto r ---- the maximum value of r could be 1000000000001
#define m 100000
vector<bool> sieve(){
    vector<bool> isPrime(m, true);
    isPrime[0] = isPrime[1] = false;

    rloop(p, 2, sqrt(m)){
        if(isPrime[p]){
            for(int i = p*p; i <= m; i += p)
                    isPrime[i] = false;
        }
    }

    return isPrime;
}

vector<bool> getprimeinrange(int  left, int right, vector<bool> primes){
    if(left > right)
            swap(left, right);

    int length, sizeofprimes;
    length = right - left;
    sizeofprimes = primes.size();

    vector<bool> isPrime(length, true);

    rloop(p, 2, sqrt(right)){
            if(primes[p]){
                int start ;
                if (left % p == 0)
                        start = left;
                else
                        start = (p*(left/p)) + p;

                for(int i = start ; i <= right ; i += p){
                    //cout << i << " ";
                    isPrime[i - left] = false;
                }
                // if start is prime !
                if(start == p)
                        isPrime[start - left] = true;
            }
    }
    return isPrime;

}

int main(){
	ios::sync_with_stdio(0);

    vector<bool> primes = sieve();
    int sizeofprimes = primes.size();

    int t , left , right;
    cin >> t;
    while(t--){
        cin >> left >> right;
        vector<bool> isPrime = getprimeinrange(left, right, primes);
        /*
        cout << isPrime.size() << endl;
        for(int i = 0 ; i < isPrime.size(); i++)
                cout << boolalpha << isPrime[i] << " ";
        cout << endl;
        */
        for(int i = 0; i < right - left ; i++){
            if(isPrime[i] and (i + left) <= right)
                    cout << i + left << " ";
        }

        isPrime.clear();
    }

	return 0;
}

