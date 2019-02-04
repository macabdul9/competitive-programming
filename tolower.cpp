#include<bits/stdc++.h>
using namespace std;
int main(){
    string name ="Abdul";
    string tmp = name;
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    if(tmp == name)
        cout << boolalpha << true;
    else
        cout << boolalpha << false;
    return 0;
}
