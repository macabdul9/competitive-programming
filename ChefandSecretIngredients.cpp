/*
 * feb-2019 long challenge
 * https://www.codechef.com/FEB19B/problems/CHEFING
*/
#include<bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int main(){
    const ll MAX_L = 3500000;
    int T, N, count;
    string Si, tmp;
    cin >> T;
    // Constraint #1  1 ≤ T≤ 1,000
    if( T > 1000)
        return 0;

    while(T > 0){

        cin >> N;
        // Constraint #2 1 ≤ N ≤ 1,000
        if(N > 1000){
            T--;
            continue;
        }

        for(unsigned int itr = 0; itr < N; itr ++){
            cin >> Si;
            // Constraint #3  1 ≤ |Si| ≤ 200 for each valid i
            if ( tmp.length() > 200)break;

        }
        T--;
    }
    return 0;
}
