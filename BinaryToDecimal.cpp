#include <iostream>
#include <string>

using namespace std;
string getBinary(int n);
int main(int argc, char const *argv[])
{
	/* code */
	int n;

	cin>>n;
	
	cout << getBinary(n) << endl;
	return 0;
}
string getBinary(int n){
	if(n / 2 == 0){
		return to_string(n);
	}
	return getBinary(n/2) + to_string(n % 2);
}