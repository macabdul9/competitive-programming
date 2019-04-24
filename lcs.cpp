/*
 * @author    : macab (macab@debian)
 * @file      : lcs
 * @created   : Wednesday Apr 24, 2019 05:00:44 IST
*/
#include<bits/stdc++.h>
#define endl                  "\n"
#define merge(a, b)           a##b
#define loop(i,a,b)           for(int i=(int)a;i<(int)b;++i)
#define rloop(i,a,b)          for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b)          for(ll i=(ll)a;i<(ll)b;++i)
#define loopr(i,a,b)          for(int i=(int)a;i>=(int)b;--i)
#define MOD                   1000000007
#define MAX                   1e9
#define MIN                   -1e9
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define psi                   pair<string, int>
#define pci                   pair<char, int>
#define all(p)                p.begin(),p.end()
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define vi                    vector<int>
#define vll                   vector<long long int>
#define vs                    vector<string>
#define si                    set<int>
#define ss                    set<string>
#define sll                   set<long long int>
#define mii                   map<int, int>
#define mll                   map<long long int, long long int>
#define msi                   map<string, int>
#define umii                  unordered_map<int, int>
#define umsi                  unordered_map<string, int>
typedef long long int ll;
typedef unsigned int uint;
typedef unsigned long long int ull;
using namespace std;

// source : https://www.hackerrank.com/challenges/dynamic-programming-classics-the-longest-common-subsequence/problem



int lcs(vi &v1, vi &v2, int i, int j, vector<vector<int>>  &dp){
        if(i == 0 or j == 0) return 0;

        if(dp[i][j] != 0)
                return dp[i][j];
        else if(v1[i - 1] == v2[j - 1]){
            dp[i][j] = 1 + lcs(v1, v2, i - 1, j - 1, dp);
            return dp[i][j];
        }else{
            dp[i][j] = max(lcs(v1, v2, i - 1, j, dp), lcs(v1, v2, i, j - 1, dp));
            return dp[i][j];
        }

}

/*
void lcsByMatrix(vi &v1, vi &v2){
    vector<vector<int>> mat(v1.size() + 1, vector<int>(v2.size() + 1, 0));

    for(int i = 1; i <= v1.size(); i++){
        for(int j = 1; j < v2.size(); j++){
            if(v1[i - 1] == v2[j - 1])
                    mat[i][j] = mat[i-1][j-1] + 1;
            else
                    mat[i][j] = max(mat[i-1][j], mat[i][j-1]);
        }
    }

    string str = "";

    int i = v1.size(), j = v2.size();
    while(i > 0 and j > 0){
        if(max(mat[i-1][j], mat[i][j-1]) == mat[i][j])
                v1[i] == mat[i][j] ? j -= 1 : i -= 1;
        else{
                str = to_string(v2[i]).append(str);
                i -= 1;
                j -= 1;
        }
    }

    cout << str << endl;

}
*/

int main(){
	ios::sync_with_stdio(0);

    int l1, l2, tmp, i1, i2;
    i1 = i2 = 0;
    cin >> l1 >> l2;

    vi v1(l1), v2(l2);

    loop(i, 0, l1){
        cin >> tmp;
        v1[i] = tmp;
    }
    loop(i, 0, l2){
        cin >> tmp;
        v2[i] = tmp;
    }

    vector<vector<int>> dp(l1 + 1, vector<int>(l2 + 1, 0));
    lcs(v1, v2, v1.size(), v2.size(), dp);

    /*

    loop(i, 0, l1 + 1){
        loop(j, 0, l2 + 1)
            cout << dp[i][j] << " ";
        cout << endl;
    }
    */
    int res = 0;
    int i = v1.size(), j = v2.size();
    while(i > 0 and j > 0){
        if(max(dp[i-1][j], dp[i][j-1]) == dp[i][j])
                dp[i-1][j] == dp[i][j] ? i -= 1 : j -= 1;
        else{
                res = res*10 + v2[i-1];
                i -= 1;
                j -= 1;
        }
    }
    string r = to_string(res);
    for(int i = r.length()-1; i > -1; i--)
            cout << r[i] << " ";
    cout << endl;

	return 0;
}

