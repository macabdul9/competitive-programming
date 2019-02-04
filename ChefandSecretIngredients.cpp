/*
 * feb-2019 long challenge
 * https://www.codechef.com/FEB19B/problems/CHEFING
*/
#include<bits/stdc++.h>
#include<algorithm>
#define endl "\n"
#define ll long long
using namespace std;

// Constraint #3  1 ≤ |Si| ≤ 200 for each valid i
// Constraint #4 S1,S2,…,SN contain only lowercase English letters
bool checkConstraint(string str){
    string tmp = str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    if(str.length() > 200 or tmp != str)
            return false;
    else
            return true;

}
int main(){
    const ll MAX_L = 3500000;
    ll total_length = 0;
    int T, N, count;
    string Si, tmp, result;
    unordered_set< char > s;


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
        int var = 1;
        cin >> tmp;
        while(!checkConstraint(tmp)){
                cin >> tmp;
                var++ ;
        }
        total_length += tmp.length();

        for(unsigned int itr = var ; itr < N; itr ++){

            cin >> Si;

            total_length += Si.length();

            // Constraint #last The sum of length of strings over all test cases ≤ 3500000
            if(total_length > MAX_L ) return 0;

            if(checkConstraint(Si)){
                sort(tmp.begin(), tmp.end());
                sort(Si.begin(), Si.end());
                set_intersection(tmp.begin(), tmp.end(), Si.begin(),Si.end(), back_inserter(result));
                //cout << result << endl;
                // remove duplicate char
                // result.erase(unique(result.begin(), result.end()), result.end());
                tmp = result;
                result = "";
            }
        }
        result = tmp;
        //remove duplicate
        for(auto x: result)
                s.insert(x);
        cout << s.size() << endl;
        tmp = result = "";
        T--;
    }
    return 0;
}
