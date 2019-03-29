/*
 * @author    : macab (macab@debian)
 * @file      : diffnames
 * @created   : Wednesday Mar 27, 2019 21:09:14 IST
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
 * source : https://www.codingninjas.in/app/practice/92086/2978/different-names
 */

vector<string> printWords(string str){

    vector<string> vname;

    // word variable to store word
    string word;

    // making a string stream
    stringstream iss(str);

    // Read and print each word
    while (iss >> word)
        vname.emplace_back(word);

    return vname;
}


int main(){
	ios::sync_with_stdio(0);
    string str;
    getline(cin, str);
    //transform(str.begin(), str.end(), str.begin(), ::tolower);
    vector<string> vname = printWords(str);
    /*
    for (auto x : vname)
            cout << x << endl;
    */
    unordered_map<string, int> repeatedname;
    for(auto &x: vname){
        if(repeatedname.find(x) != repeatedname.end())
                repeatedname.at(x) += 1;
        else
                repeatedname.insert({x, 1});
    }

    unordered_map<string, int>::iterator itr;
    int count = -1;
    for(itr = repeatedname.begin(); itr != repeatedname.end(); itr++){
            if(itr->second > 1){
                count++;
                cout << itr->first << " " << itr->second << endl;
            }
    }
    if(count == -1 )
            cout << count << endl;




	return 0;
}

