#include <iostream>
#include <stack>
#include <string>
using namespace std;

void isBalanced(string exp);
int main(int argc, char const *argv[])
{
	string exp;
	getline(cin, exp);
	/* code */
	isBalanced(exp);
	return 0;
}
void isBalanced(string exp){

	stack<char> stack; 
	string opening = "[{(";
	string closing = "]})";
	for(int i = 0; i < exp.length(); i++){
		if(opening.find(exp[i]) < opening.length()){
			stack.push(exp[i]);
		}else if (closing.find(exp[i]) < closing.length()){
			if(stack.empty() or  closing.find(exp[i]) != opening.find(stack.top())){
				cout << "expression is unbalanced\n";
				return;
			}else{
				stack.pop();
			}
		}
	}
	if(stack.empty()){
		cout << "expression is balanced\n";
		return;
	}

}