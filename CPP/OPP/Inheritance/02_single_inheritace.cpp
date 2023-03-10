#include<iostream>
using namespace std;
class base {
    int data1;
public:
    int data2;
    base() {}
    void setdata(){
        data1 = 10;
        data2 = 20;
    }
    int getdata1() {
        return data1;
    }
    int getdata2() {
        return data2;
    }
};
class derived : public base {
    int data3;
public:
    void process(){
        data3 = data2 * getdata1();
    }
    void display(){
        cout<<"data1: "<<getdata1()<<endl;
        cout<<"data2: "<<data2<<endl;
        cout<<"data3: "<<data3<<endl;
    }
};

class pderived : base{
    int data3;
public:
    void process(){
        setdata();
        data3 = data2 * getdata1();
    }
    void display(){
        cout<<"data1: "<<getdata1()<<endl;
        cout<<"data2: "<<data2<<endl;
        cout<<"data3: "<<data3<<endl;
    }
};

int main() {
    derived dir;
    dir.setdata();
    dir.process();
    dir.display();
    
    cout<<endl;

    pderived pdir;
    pdir.process();
    pdir.display();

    return 0;
}