// string reversal using stack 
/*
	time and space complexity of this function is O(n), we can reverse a list of elements more fastly 
	that takes constant space O(1) using array, this is implementation is just to show stack application 
*/

#include <iostream>
#include<stack>
#include <string>

using namespace std;

string reverse(string str);

int main(int argc, char const *argv[]){
	string name;
	getline(cin, name);
	cout<<reverse(name) <<"\n";
	return 0;
}


string reverse(string str){
	stack<char> stack;
	for (int i = 0; i < str.length(); i++){
		stack.push(str.at(i));
	}
	for (int i = 0; i < str.length(); i++){
		str.at(i) = stack.top();
		stack.pop();
	}
	return str;
}
