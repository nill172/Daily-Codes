#include<iostream>
using namespace std;
int main(){
    int a, b;
    char c;
    float d;
    cout<<"Enter the 1st Number: ";
    cin>>a;
    cout<<"Enter the oporation sign ( + -  * / % ): ";
    cin>>c;
    cout<<"Enter the 2nd Number: ";
    cin>>b;
    switch(c){
        case '+':
        d = a+b;
        break;

        case '-':
        d = a-b;
        break;

        case '*':
        d = a*b;
        break;

        case '/':
        d = a/b;
        break;

        case '%':
        d = a%b;
        break;

        default:
        cout<<"Syntex error!"<<endl;
    }
    cout<<endl<<"The result: "<<d;
    return 0;
}