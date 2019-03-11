/*
 * @author    : macab (macab@debian)
 * @file      : ChefgotRecipes
 * @created   : Wednesday Mar 06, 2019 12:05:30 IST
*/
#include<bits/stdc++.h>
#define endl 		         "\n"
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

string removeduplicate(string s){
    set<char> ls;
    loop(i, 0, s.length())
        ls.insert(s[i]);
    string ans;
    for(auto x: ls)
            ans += x;
    ls.clear();
    return ans;
}

ull countgoodmeala(vector<string> &dishes){
    if(dishes.size() < 2) return 0;

    ull count = 0;
    string vowels = "aeiou" ;
    vector<string> compiled_dishes;
    string not_present;

    loop(i, 0, dishes.size()){


        for(int k = 0; k < vowels.length(); k++){
            if(dishes[i].find(vowels[k]) == string::npos){
                not_present.push_back(vowels[k]);
            }
        }

        loopr(j, compiled_dishes.size() - 1 , 0){
                bool b = true;
                for(int l = 0; l < not_present.length(); l++){
                    if(compiled_dishes[j].find(not_present[l]) == string::npos){
                            b = false;
                            break;
                    }
                }
                if(b){
                    count++;
                }

        }
        compiled_dishes.push_back(dishes[i]);
        not_present.clear();

    }

    compiled_dishes.clear();
    return count;

}

unsigned int not_present(unsigned int n)
{
   // Find number of bits in the given integer
   int number_of_bits = floor(log2(n))+1;

   // XOR the given integer with poe(2,
   // number_of_bits-1 and print the result
   return ((1 << number_of_bits) - 1) ^ n;
}

int countgoodmeal(vector<string> &dishes){
    if(dishes.size() < 2) return 0;

    string vowels = "aeiou";  // LSB --> a, MSB -->B

    vector<vector<int>> compiled_dishes;

    int present, not_present;
    vector<int> sample;
    for(int i = 0 ; i < 5; i++)
            compiled_dishes.push_back(sample);

    ull count = 0;
    const int goodmeal = 31;

    for(int i = 0; i < dishes.size(); i++){
        // if a dish (with no duplicate chars) has length 5 it means it has all five vowels hence it can make good with any other dish
        string current_dish = dishes[i];
        // if(current_dish.length() == 5){
        //     count = count + dishes.size() - 1;
        //     continue;
        // }
        present = not_present = 0;

        for(int k = 0; k < vowels.length(); k++){
            if(current_dish.find(vowels[k]) != string::npos){
                present += pow(2, k);
            }
        }
        //not_present = 31 - present;
        //cout << present << " " << not_present << endl;
        int orop, valid_length;

        for(int l = 0; l < 5; l++){

        	valid_length = l + 1 + current_dish.length();

            if(valid_length >= 5){
                for(int m = 0; m < compiled_dishes[l].size(); m++){
                	orop =  present | compiled_dishes[l][m];
                    //cout << present << " OR " << compiled_dishes[i][j] << " = " << orop << endl;
                    if(orop == goodmeal){
                        count++;
                    }
                }
            }
        }

        compiled_dishes[current_dish.length() - 1].push_back(present);

        // for(int i = 0; i < 4; i++){
        //     for(int j = 0; j < compiled_dishes[i].size(); j++){
        //         cout << compiled_dishes[i][j] << " ";
        //     }
        //     cout << endl;
        // }

    }
    compiled_dishes.clear();
    return count;

}

int main(){
    ios::sync_with_stdio(0);
    int t,n;
    string str;
    vector<string> dishes;
    cin >> t;
    while(t-- > 0){
        cin >> n;
        loop(i, 0, n){
            cin >> str;
            dishes.push_back(removeduplicate(str));
        }
        cout << countgoodmeala(dishes) << " " << countgoodmeal(dishes) << endl;
        dishes.clear();
    }

    return 0;
}

