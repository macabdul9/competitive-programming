#include<bits/stdc++.h>
using namespace std;

int k = 7;
int l = 8;
void F(int D, int T, string str){
    if(T < 0)return;
    if(D == 0){
        if(T == 0){
            k--;
            if(k == 0)
                    cout << str << endl;
        }
    return;
    }
    F(D-1, T+1 , str+"(");
    F(D-1, T+1, str +")");
}
int main(){
        F(l, 0, "");
        return 0;
}
