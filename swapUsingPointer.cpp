//swaping of two number without using third variable (using pointer)
#include <iostream>

using namespace std;
void swap(int *a, int *b){
	if ( a== b){
		return;
	}
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	
}
int main(int argc, char const *argv[])
{
	int a, b;
	a = 10;
	b = 202;
	swap(&a, &b);
	cout << a << "\t" << b<<"\n";
	return 0;
}