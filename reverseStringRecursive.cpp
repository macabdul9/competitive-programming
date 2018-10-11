#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string reverse(string name);
int main(){
	string name;
	cin>>name;
	cout << reverse(name)<<endl;
}
string reverse(string name){ 
	if(name.length() == 1)
		return name;
	else
		return reverse(name.substr(1,name.length()-1)) + name[0];

}