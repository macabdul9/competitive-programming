#include<bits/stdc++.h>
using namespace std;

int main(){
    //vector<int> v;
    //v.push_back(10);
    //v.push_back(20);
    //v.push_back(30);
    //cout << v[2] << endl;
    //int b = 2 , c = 3, d = 2 , e = 3;
    //double a =  (double)b/c;
    //double f  = (double)d/e;
    //if( a == f)
    //    cout << a << " " << f << " " << boolalpha << true << endl;

    //int n;
    //cin >> n;
    //string s;
    //while(n > 0){
        //getline(cin, s);
        //cin>> s;
        //cout << s << endl;
       // n--;
    //}

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    //string s = "mine not";
    //string name;
    //name.push_back('\0');
    //int find = s.find(" not");
    //cout << find << endl << name.length()<< endl;

    int n , k, result;
    cin >> n >> k;
    result = n / k;
    cout << result << endl;
    int count = 0;
    for(int i = k; i <= n; i += k)
            count ++;
    cout << count << endl;
    return 0;
}
