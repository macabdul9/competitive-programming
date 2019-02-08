// The Power Sum
// https://www.hackerrank.com/challenges/the-power-sum/problem
#include <cmath>
#include <iostream>
using namespace std;
int count = 1;
int totnum(int X,int N,int num){
    count ++;
    if(pow(num,N)< X)
        return totnum(X,N,num+1) + totnum(X-pow(num,N),N,num+1);
    else if(pow(num,N)==X)
        return 1;
    else
        return 0;
}

int main() {
    int X,N;
    cin>>X>>N;
    cout<<totnum(X,N,1) << endl;
    cout << "total function call = " << count << endl;
    return 0;
}
