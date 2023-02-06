#include<iostream>
#include<string>
using namespace std;

int main() {
    // string a = "Nilanjan";
    // cout << a << endl;
    // cout << "Size of string: "<<a.size()<<endl;

    // string firstName1 = "Nilanjan";
    // string lastName1 = "Debnath";
    // string fullName1 = firstName1 + " " + lastName1;
    // cout << fullName1 << endl;
    // cout << "Size of string: "<<fullName1.length()<<endl;

    // string firstName = "John ";
    // string lastName = "Doe";
    // string fullName = firstName.append(lastName);
    // cout << fullName;

    // //! input string from user
    string myname;
    // cout<<"Enter your name: "<<endl;
    // cin>>myname;  //* if input has any space then it's going to print only the part before space is given
    // cout<<"Your name is"<<myname<<endl;

    //! so for space input we use getline(), where we take the whole as input
    cout<<"Enter your full name again: "<<endl;
    getline(cin, myname);
    cout<<"Your full name is: "<<myname;

    //* There are some other other oporations like push_back(), pop_back()
}