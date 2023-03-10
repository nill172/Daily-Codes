#include<iostream>
using namespace std;
class base1{
    public:
        int data = 10;
};
class base2{
    public:
        int data = 20;
};
class derived : public base1, public base2{
    public:
        // int data = 30;               //* when derived class have its own value, then primaryly it will show its own value
        // int data = base2 :: data;    //* When both base value have same member
        int data = base1 :: data;       //* Then we have to specify using scopresolution oporator, which base's member its going to use
};
int main(){
    derived a;
    cout<<a.data;
}