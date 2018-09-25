#include <iostream>
using namespace std;

void solution();
int main(int argc, char const *argv[])
{
	/* code */

	int test
	;cin>>test;
	while(test > 0 ){
		solution();
		test--;
	}
	return 0;
}
void solution(){
	int size, element;
	cin>>size;
	int arr[size];
	arr[0] = 0;
	for(int i = 1; i <= size; i++ ){
		cin >> element;
		arr[i] = arr[i-1] + element;
	}
	int equilibrium_count = 0;
	for(int i = 1; i <= size; i++){
		if (arr[i-1] == arr[size] - arr[i])
		{
			equilibrium_count++;
			cout << i;
		}
	}
	if (equilibrium_count == 0)
	{
		cout<< -1;
	}
	cout << endl;

}