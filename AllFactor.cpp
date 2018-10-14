/*
	If there exist an a such a divides n then will exist a b
	that divides such that b = n / a;
	bxa = n;

*/
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	stack<int> factor;
	for(int i = 1; i*i <= n; i++){
		if(n%i == 0){
			factor.push(i);
			if(i*i != n)
				factor.push(n/i);
		}
	}

	while(!factor.empty()){
		cout << factor.top() << " ";
		factor.pop();
	}
	cout << endl;
	return 0;

}