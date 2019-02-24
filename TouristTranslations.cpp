/*
 * @author    : macab (macab@debian)
 * @file      : TouristTranslations
 * @created   : Sunday Feb 24, 2019 00:55:20 IST
*/
#include<bits/stdc++.h>
#define endl 		         "\n"
#define loop(i,a,b)           for(int i=(int)a;i<(int)b;++i)
#define rloop(i,a,b)          for(int i=(int)a;i<=(int)b;++i)
#define loopl(i,a,b)          for(ll i=(ll)a;i<(ll)b;++i)
#define loopr(i,a,b)          for(int i=(int)a;i>=(int)b;--i)
#define clr(x)                x.clear()
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
#define vs                    vector<string>
#define si                    set<int>
#define ss                    set<string>
#define mii                   map<int, int>
#define msi                   map<string, int>
#define umii                  unordered_map<int, int>
#define umsi                  unordered_map<string, int>
typedef long long int ll;
typedef unsigned int uint;
using namespace std;
/*
 * source : https://www.codechef.com/problems/TOTR
 * */
int main(){
    /*code goes here*/
    uint t;
    string lang, sen;
    cin >> t >> lang;
    map<char, char> mp;
    while(t-- > 0){
            cin >> sen;
            int i = 0;
            char ch;
            /*create a dictionary key value*/
            for(ch = 'a'; ch <= 'z'; ch++){
                    mp.emplace(ch, lang[i]);
                    ++i;
            }
            string ans = "";
            for(i = 0; i < sen.length(); i++){
                ch = tolower(sen[i], locale());
                if(mp.find(ch) != mp.end()){ // if char is present in the dict
                    if(isupper(sen[i])){
                        ans.push_back(toupper(mp.at(ch), locale()));
                    }else{
                        ans.push_back(mp.at(sen[i]));
                    }
                }
                else if(sen[i] == '_'){
                    ans.push_back(' ');
                }else{
                    ans.push_back(sen[i]);
                }
            }
            cout << ans << endl;

    }
    return 0;
}

