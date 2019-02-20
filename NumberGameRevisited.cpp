/*
 * @author    : macab (macab@debian)
 * @file      : NumberGameRevisited
 * @created   : Wednesday Feb 20, 2019 08:37:30 IST
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
typedef long long int ull;
using namespace std;
/*
 * source : https://www.codechef.com/problems/NUMGAME2
 * */
//time limit exceeded

set<ull> prime;



/*
void allprime(ull N) {
    ull i,j, p;
    p = 1;
    vector<bool> primes(N, true);
    primes[0] = primes[1] = false;
    for(i = 2; i <= N; ++i) {
        if(primes[i]) {
            p = i;
            for(j = i+i; j <= N; j += i)
                primes[j] = 0;
        }
    }
    loop(i, prime.size(), N){
        if(primes[i])
                prime.emplace(i);
    }
}
*/
int SieveOfAtkin(int limit) 
{ 
	for(int i = 1; i < 4; i++)
    	prime.emplace(i);
    
    // Initialise the sieve array with false values 
    bool sieve[limit]; 
    for (int i = 0; i < limit; i++) 
        sieve[i] = false; 
  
    /* Mark siev[n] is true if one  
       of the following is true: 
    a) n = (4*x*x)+(y*y) has odd number of  
       solutions, i.e., there exist 
       odd number of distinct pairs (x, y)  
       that satisfy the equation and 
        n % 12 = 1 or n % 12 = 5. 
    b) n = (3*x*x)+(y*y) has odd number of  
       solutions and n % 12 = 7 
    c) n = (3*x*x)-(y*y) has odd number of  
       solutions, x > y and n % 12 = 11 */
    for (int x = 1; x * x < limit; x++) { 
        for (int y = 1; y * y < limit; y++) { 
              
            // Main part of Sieve of Atkin 
            int n = (4 * x * x) + (y * y); 
            if (n <= limit && (n % 12 == 1 || n % 12 == 5)) 
                sieve[n] ^= true; 
  
            n = (3 * x * x) + (y * y); 
            if (n <= limit && n % 12 == 7) 
                sieve[n] ^= true; 
  
            n = (3 * x * x) - (y * y); 
            if (x > y && n <= limit && n % 12 == 11) 
                sieve[n] ^= true; 
        } 
    } 
  
    // Mark all multiples of squares as non-prime 
    for (int r = 5; r * r < limit; r++) { 
        if (sieve[r]) { 
            for (int i = r * r; i < limit; i += r * r) 
                sieve[i] = false; 
        } 
    } 
  
    // Print primes using sieve[] 
    for (int a = 5; a < limit; a++) 
        if (sieve[a]) 
            prime.emplace(a); 
} 

int main(){
    /*code goes here*/
    
    /*
    int i ;
    loop(i, 1, 4)
    	prime.emplace(i);
    
	SieveOfAtkin(45);
	for(auto &x : prime)
		cout << x << " ";
	*/
	
    ///*
    ull t, n, bob;
    cin >> t;
    while(t-- > 0){
        cin >> n;
        if(n == 1){
        	cout <<"ALICE" << endl;
        }else if(n < 5){
        	cout << "BOB" << endl;
        }
        else if(prime.find(n) == prime.end()){
        	if(prime.size() - 1%2)
        		cout << "BOB"<< endl;
        	else
        		cout << "ALICE" << endl;
        }
        else{
        	prime.find(n) == prime.end();
        }
    }
    //*/
  	
    return 0;
}

