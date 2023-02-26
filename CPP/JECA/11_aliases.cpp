#include<iostream>
using namespace std;
int main(){
    typedef int integer_typedef;
    using interger_using = int;
    //! Now the both integer_typedef and integer_using refers to int
    integer_typedef a = 10;
    interger_using b = 20;
    int c = a + b;
    cout<<c;
}