/*
 * @author    : macab (macab@debian)
 * @file      : ChefandSoccer
 * @created   : Tuesday Mar 12, 2019 00:35:55 IST
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

/*
 * source : https://www.codechef.com/MARCH19B/problems/CHEFSOC
 */


// this function will give us all distinct possible values of j fron 1 <= |i - j| <= s
si possiblej(int i , int s, int n){
    si j_s;
    for(int itr = 1; itr <= s; itr++){
        if(i - itr > 0 and i - itr <= n)
                j_s.insert(abs(i - itr));
        if(i + itr > 0 and i + itr <= n)
                j_s.insert(i + itr);
    }

    return j_s;

}

ull diffsoccerresult(vi &skill){
    if(skill.size() < 2) return skill.size();

    vector<vector<int>> listofresult;
    vector<int> start;
    start.emplace_back(1);
    listofresult.emplace_back(start);

    si allpossiblej;
    set<int>:: iterator sitr;
    vector<int>::iterator vitr;
    int another_i;


    for(int i = 0; i < listofresult.size(); i++){
        allpossiblej = possiblej(listofresult[i].back(), skill[listofresult[i].back() - 1], skill.size());
        /*cout << "\nvalid j : ";
        for (auto x : allpossiblej)
                cout << x << endl;
        cout << endl;
        */

        for(sitr = allpossiblej.begin(); sitr != allpossiblej.end(); sitr++){
            another_i = *sitr;
            vitr = find(listofresult[i].begin(), listofresult[i].end(), another_i);
            if(vitr == listofresult[i].end()){
                vi newresult = listofresult[i];
                newresult.emplace_back(another_i);
                listofresult.push_back(newresult);
            }
        }
    }


    return listofresult.size() % MOD;
}


int main(){
	ios::sync_with_stdio(0);

	/*your code goes here*/
    int t, n, tmp;
    vi skill;
    cin >> t;
    while(t-- > 0){
        cin >> n;
        loop(i, 0, n){
            cin >> tmp;
            skill.emplace_back(tmp);
        }
        cout << diffsoccerresult(skill) << endl;
        skill.clear();
    }

	return 0;
}

