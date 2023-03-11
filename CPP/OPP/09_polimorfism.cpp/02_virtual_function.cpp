#include<iostream>
using namespace std;
class base{
    public:
        virtual void show(){               //! Here we make the virtual function
            cout<<"This is base class"<<endl;
        }
};
class derived : public base{
    public:
        void show(){
            cout<<"This is derived class"<<endl;
        }
};
int main(){
    base* ptr;
    base b;
    derived d;
    ptr = &d;
    ptr->show();    //* while we use vertual function in base class then derived class function will run 
}