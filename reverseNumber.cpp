#include <iostream>
using namespace std;
int reverse(int n, int r);
int main(int argc, char const *argv[])
{
	/* code */

	cout << reverse(4372, 0) <<endl;
	return 0;
}
int reverse(int n, int r){

	// recursive 
	if (n == 0)
		return 0;

	r = r*10 + n%10;
	return reverse(n/10, r) + r - r/10;


	// iterative
	// int r = 0;
	// while ( n > 0){
	// 	r = r*10 + n%10;
	// 	n = n/10;
	// }
	// return r;
}