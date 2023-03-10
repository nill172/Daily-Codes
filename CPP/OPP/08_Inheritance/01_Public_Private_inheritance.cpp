#include<iostream>
#include<string>
using namespace std;

class employee{             //! base class;
    float salary;
    
    public:
    int id;
    employee() {}
    employee(int n){
        id = n;
        salary = 34.0;
    }
}; 

//*todo:  Private atributes of base class can not be inharite 

class programmer : employee{        //! Private inharitace
    public:                         //* Public atributes of base class become private
    string coding_language = "cpp";
    programmer(int idinput){
        id = idinput;
    }
    void show(){
        cout<<id<<endl;
    }
};
class manager : public employee{    //! Public inhaeritance
    public:                         //* Public atributes of base class become public
    manager(int idinput){
        id = idinput;
    }
};

int main(){
    employee nill(1), rahul(2);
    cout<<nill.id<<endl;
    programmer sayan(3);
    sayan.show();
    manager pritom(4);
    cout<<pritom.id<<endl;
    return 0;
}