//https://www.codechef.com/problems/TLG#
#include<iostream>
#include<string>
#include<map>
#include<iterator>

#define endl "\n"
#define endt "\t"
#define ll long long
using namespace std;

int main(){
    int round, winner;

    ll a = 0, b = 0,s1, s2, lead;
    lead = 0;
    winner = 0;
    //map to create a dict of cumulative socre
    //map<int, int> list;
    //map<int, int>::iterator itr;
    cin >> round;
    for(int i = 0; i < round; i++){
        cin >> s1 >> s2;
        a += s1;
        b += s2;
        //list.insert(pair<int, int>(s1 - s2, 1))? s1 > s2:list.insert(pair<int, int>(s2-s1, 2));
        //if(s1 > s2)
          //      list.insert(pair<int, int>(s1- s2, 1));
        //else if ( s2 > s1 )
         //       list.insert(pair<int, int>(s2 - s1, 2));
        if(a  > b and lead < a - b){
            lead = a - b;
            winner = 1;
        }else if(b > a and lead < b - a ){
                lead = b - a;
                winner = 2;

        }
    }
    cout << winner <<" " << lead ;
    //lets print the cumulative table
    //for(itr = list.begin(); itr != list.end(); itr++)
      //      cout << itr->second << " "<< itr->first << endl << endl;
    //auto winner = list.rbegin();
    //cout << winner->second << " "<< winner->first << endl;
    return 0;
}
