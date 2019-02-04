#include<bits/stdc++.h>
using namespace std;

int main(){
    //string a, b, c;
    //a = "abdul";
    //b = "waheed";
    //c = a + b;
    //cout <<  c << endl;
    string s = "abbbbbsbdbs";
    s.erase(std::unique(s.begin(), s.end()), s.end());
    cout << s << endl;
    return 0;
}
