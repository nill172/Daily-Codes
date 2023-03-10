#include<iostream>
using namespace std;
class base1{
protected:
    int data1;
public:
    void setdata1(){
        data1 = 5;
    }
};
class base2{
protected:
    int data2;
public:
    void setdata2(){
        data2 = 10;
    }
};
class derived : public base1, public base2{
public:
    void show(){
        cout<<data1<<endl<<data2<<endl;
    }
};
int main(){
    derived dir;
    dir.setdata1();
    dir.setdata2();
    dir.show();
    return 0;
}