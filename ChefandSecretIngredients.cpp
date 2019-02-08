/*
 * @author    : macab (macab@debian)
 * @file      : ChefandSecretIngredients
 * @created   : Thursday Feb 07, 2019 15:45:47 IST
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
typedef long long int ll;
typedef unsigned int uint;
using namespace std;
/*
 * source: https://www.codechef.com/FEB19B/problems/CHEFING
 */

int main(){
    /*code goes here */
    int T, N, result;
    string str;
    bool flag;
    cin >> T;
    while(T > 0){
        cin >> N;
        int arr[N][26] = {0};
        for(uint i = 0; i <  N; i++){
            cin >> str;
            for(uint j = 0 ; j < str.length(); j++){
                // cout << str[j] << "  ascii code  " << int(str[j]) << " location  = " << i << " " <<int(str[j]) - int('a') << endl;
                arr[i][int(str[j]) - int('a')] = 1;
            }
        }
        /*
        for(char ch = 'a'; ch <= 'z'; ch++)
                cout << ch << " ";
        cout << endl;
        for(uint i = 0; i < N; i++){
            for(uint j = 0; j < 26; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        */
        for(uint i = 0; i < 25; i++){
            flag = true;
            for(uint j = 0; j < N; j++){
                //cout << arr[j][i] << " ";
                if(arr[j][i] != 1)
                        flag = false;
            }
            if(flag)
                ++result;
            //cout <<  " result =  " << result << endl;
        }
        cout << result << endl;
        result = 0;

        T--;
    }

    return 0;
}

