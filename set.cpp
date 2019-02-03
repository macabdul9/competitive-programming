#include<iostream>
#include<iterator>
#include<unordered_set>
#include<set>
#include<string>
using namespace std;
int main(){

    set<string> s;
    /*
    s.insert("(");
    s.insert("{");
    s.insert(")");
    s.insert("(");
    s.insert("(");

    cout << s.size() << endl;
    set<string>::iterator itr;
    for(itr = s.begin(); itr != s.end(); itr++)
        cout << *itr << endl;
    */
    auto t = s.insert("30");
    cout << *t ;
    //cout << s.insert("foo") << endl;// << s.insert("foo");
    return 0;
}
