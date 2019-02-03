#include<iostream>
#include<string>
#include<algorithm>
#define endl "\n"

using namespace std;

int main(){
    int T, found;
    cin >> T;
    //constraint 1
    if(T > 50)
	    return;
    string s, special;
    special = "1234567890`~!@#$%&*()_+\[{|}]';:/?>.<,";
    while(T > 0){
        getline(cin, s);
        while (s.length()==0 )
            getline(cin, s);
        //constraint 2
        if(s.length() > 100)
                continue;
        /// constraint 3
        // make sure that there is not upper case and special char
         // Loop over each letter and change it to lowercase
        for (string::iterator i = user_input.begin(); i < user_input.end(); i++){
            if(*i != tolower(*i) or );
        }
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        found =  s.find(" not ");
        if(found != -1)
                cout <<"Real Fancy"<< endl;
        else
                cout << "regularly fancy"<< endl;

        T--;
    }
    return 0;
}
