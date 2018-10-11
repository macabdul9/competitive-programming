#include <iostream>
#include<string>

using namespace std;
int main(int argc, char const *argv[])
{
	string exp;
	cin>>exp;

	int max_count = 0;
	int count = 0;
	char max_ch ;
	char prev_ch ;
	char current_ch ;

	for(char current_ch : exp){
		
		if (current_ch == prev_ch)
		{
			/* code */
			count += 1;

		}else{
			count = 1;
		}
		if (count > max_count)
		{
			/* code */
			max_count = count;
			max_ch = current_ch;
		}
		prev_ch = current_ch;
	}
	cout << max_ch << ":"<<max_count << endl;

	return 0;
}