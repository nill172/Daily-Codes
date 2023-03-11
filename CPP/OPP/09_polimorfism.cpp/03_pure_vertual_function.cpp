#include<iostream>
using namespace std;
class base{
    protected:
        int data;
    public:
        base(){}
        base(int data){
            this->data = data;
        }
        virtual void display() = 0;
};
class derived1 : public base{
    protected:
        int data1;
    public:
        derived1(int a, int b) : base(a){
            data1 = b;
        }
        void display(){
            cout<<"The base data is "<<data<<endl
                <<"The derived1 data is "<<data1<<endl;
        }
};
class derived2 : public base{
    protected:
        int data1;
    public:
        derived2(int a, int b) : base(a){
            data1 = b;
        }
        void display(){
            cout<<"The base data is "<<data<<endl
                <<"The derived2 data is "<<data1<<endl;
        }
};
int main(){
    base* ptr[2];
    derived1 d1(3, 4);
    derived2 d2(5, 6);
    
    ptr[0] = &d1;
    ptr[1] = &d2;
    ptr[0]->display();
    ptr[1]->display();
}