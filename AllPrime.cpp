#include <bits/stdc++.h>
using namespace std;



int main(int argc, char const *argv[])
{
	
	int m, n;
	int test;
	cin>>test;
	while(test>0){
		cin >> m >> n;
		int size = n + 1;
		bool prime[n + 1];
		
		memset(prime, true, sizeof(prime));	

		prime[0] = prime[1] = false;

		for(int i = 2; i*i < size; i++){
			for(int j = 2; i*j < size; j++){
				prime[i*j] = false;
			}	
		}


		
		for(int i = m; i < size; i++){
			if(prime[i]){
				cout << i << endl;
			}
		}
		test--;
		
	}

	return 0;
}

