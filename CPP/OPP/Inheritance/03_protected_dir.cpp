#include<iostream>
using namespace std;

class base{
private:
    int a = 10;
protected:      //! Protected is a private data that can be inharite
    int b = 15;
public:
    void getdata(){
        cout<<a<<" "<<b<<endl;
    }
}; 
/*
!     Member        Public dir       Private dir     Protected dir
*     Private       Not inherited    Not inherited   Not inherited
*     Protected     Protected        Privete         Protected
*     Public        Public           Private         Protected
*/
class privatedir : private base{
public:
    void showdata(){
        getdata();
    }
};
class protecteddir : protected base{
public:
    void showdata(){
        getdata();
    }
};
class publicdir : public base{
};
int main(){
    base bas;
    privatedir pri;
    protecteddir pro;
    publicdir pub;

    bas.getdata();
    pri.showdata();
    pro.showdata();
    pub.getdata();

    return 0;
}