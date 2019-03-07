#include<iostream>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    //string str = "abdul" ;
    //cout << str.length()<< str << endl;
    //str.erase(str.begin() + 2);
    //cout << str.length() << str << endl;
    vector<string> v;
    v.push_back("a");
    v.push_back("b");
    string tmp;
    for(int i = 0; i < v.size(); i++){
            tmp = v[i];
            tmp.push_back('z');
            cout << tmp << endl;
    }
    v.push_back("c");
    cout << v.size() << endl;
    cout << pow(5, 2) << endl;
    return 0;
}
