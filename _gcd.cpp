#include<bits/stdc++.h>
#include<math.h>
#include<algorithm>
#define endl "\n"
using namespace std;


int main(){

    // gcm
    //cout << __gcd(10,43);
    // bhai ab tu __gcd() use karke lcm nikal skta hai
    int a, b, lcm;
    a = 10;
    b = 24;
    lcm = a*b/__gcd(a,b);
    cout << lcm << endl;


    return 0;
}
