#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

long long total = 0;
long long target = 0;

void chararrange(string str){
    if(str.length() == 3){
        cout << str << endl;
        //++total;
        if(str == "cab"){
            //cout << "total = " << total << endl;
            target = total;
        }
        total++;
        return;
    }
    chararrange(str + 'a');
    chararrange(str + 'b');
    chararrange(str + 'c');
}

int main(){

    chararrange("");
    cout << "cab = " << target <<  endl;
    return 0;

}
