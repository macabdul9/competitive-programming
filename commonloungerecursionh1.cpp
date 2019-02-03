#include<bits/stdc++.h>
using namespace std;

int f(string str, int n){
    if ( str.length()  == n){
        cout << str << endl;
        return 0;
        
    }
    
    f(str + 'a', n);
    f(str + 'b', n);
    f(str + 'c', n);
    //if(str = "abc")
    //        return a + b + c;
    return 0;
}
int main(){
    string s = "";
   ear
           
           f(s, 3);


    return 0;
}
