#include<iostream>
using namespace std;
class base1{
    protected:
        int data1;
    public:
        base1(int a){
            data1 = a;
            cout<<"Base1 is called"<<endl;
        }
};
class base2{
    protected:
        int data2;
    public:
        base2(int a){
            data2 = a;
            cout<<"Base2 is called"<<endl;
        }
};
//! When all base classes are normal base classes, then according to their position in direved line they will be call (while calling costractor)
class direved1 : public base2, public base1{
    protected:
        int data3;
    public:
        direved1(int a, int b, int c) : base1(a), base2(b){     //* Positioning in this line have no effect on call 
            data3 = c;
            cout<<"direved1 is called"<<endl;
        }
};
//! When there is a virtual base class, it will be called first regardless of the position
class direved2 : public base2, virtual base1{
    protected:
        int data4;
    public:
        direved2(int a, int b, int c) : base1(a), base2(b){
            data4 = c;
            cout<<"direved2 is called"<<endl;
        }
};
int main(){
    direved1(1,2,3);
    direved2(4,5,6);
    return 0;
}