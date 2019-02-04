#include<iostream>
#include<string>
#include<algorithm>
#define endl "\n"
using namespace std;

 int k = 7;
 int l = 8;

//distinct balanced bracket
void dbb(int d, int t, string str){
    if(t < 0)return;

    if(!d){
        if(!t){
            k--;
            if(!k)
                cout << str << endl;
        }
        return;
    }
    dbb(d - 1, t + 1, str + "(");
    dbb(d - 1, t - 1, str + ")");
    return;
}
int main(){

    dbb(l, 0, "");
    return 0;
}
