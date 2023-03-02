#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
    complex(int, int);
    void show();
};
complex::complex(int x = 0, int y = 0){ //* Setting the default value as 0;
    a = x;
    b = y;
}
void complex::show(){
    cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
}
int main(){
    complex a(3,6);
    a.show();
    complex b(8);
    b.show();
    complex c;
    c.show();
}