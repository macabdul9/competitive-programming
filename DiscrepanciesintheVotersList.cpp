#include<bits/stdc++.h>
#define endl  "\n";

using namespace std;

int main(){

    unsigned int N1, N2, N3, tmp;
    cin >> N1 >> N2 >> N3;
    set<unsigned int> list, result;
    for(unsigned int i = 0; i < N1; i++){
        cin >> tmp;
        list.insert(tmp);
    }
    for(unsigned int i = 0; i< N1 + N2 ; i++){
        cin >> tmp;
        if(list.find(tmp) != list.end())
                result.insert(tmp);
        else
                list.insert(tmp);
    }
    set<unsigned int>:: iterator itr;
    for(itr = result.begin(); itr != result.end(); itr++)
            cout << *itr << endl;
    cout << endl;
    return 0;
}
