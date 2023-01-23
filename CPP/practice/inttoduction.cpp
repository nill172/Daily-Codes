#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<"Enter your name: ";
    char name[50];
    cin>>name;
    // cout<<setw(20);
    cout<<"Your name is: "<<setw(10)<<name<<endl;
    cout<<"Welcome to C++"<<endl;
    return 0;
}