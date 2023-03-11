#include<iostream>
using namespace std;
class base{
    public:
        void show(){
            cout<<"This is base class"<<endl;
        }
};
class derived : public base{
    public:
        void show(){
            cout<<"This is derived class"<<endl;
        }
        void test(){
            cout<<"This is deriver class, test"<<endl;
        }
};
int main(){
    base* ptr;      //* Create a base class pointer
    base b; 
    derived d;
    ptr = &d;       //* Pointing the base pointer to derived class
    ptr->show();    //* Now we can call only the inherited member using base pointer
                    //* This will call base class show() member
    // ptr->test;   //* The new member of the derived class can not be call using base pointer
    derived* pt;
    pt = &d;        //* By creating derived class pointer
    pt->show();     //* It will derived class show() member
    pt->test();     //* Now we can call new member of derived class to base class

}