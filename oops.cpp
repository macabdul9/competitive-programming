#include<bits/stdc++.h>
using namespace std;

class Student {
    //private members
    public:
    string name;
    int rollNo;
    void show();
};
void Student::show(){
    //cout << "I am show method" << endl;
    string name;
    cout << "enter student name\n";
    cin >> name;
    this->name = name;
}
int main(){
    Student  s1;
    s1.name = "Abdul Waheed";
    s1.rollNo = 001;
    s1.show();
    Student  s2;
    s2.name  = "Sarim Bhai";
    s2.rollNo = 401;
    cout << "Object - 1 :" << s1.rollNo << "\t"<< s1.name << endl << "Object - 2 : " << s2.name<< "\t" << s2.rollNo << endl;

    return 0;
}
