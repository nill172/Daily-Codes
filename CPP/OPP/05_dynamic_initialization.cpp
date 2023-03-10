#include<iostream>
#include<string>
using namespace std;
class student {
    int roll;
    string name;
public:
    void display(){
        cout<<"The roll no. "<<roll<<" and the name "<<name<<endl;
    }
    student() {}
    student(int r) {
        roll = r;
        cout << "Enter the name: ";
        cin >> name;
    }
    student(string s) {
        name = s;
        cout << "Enter the roll: ";
        cin >> roll;
    }
    student(student &obj){  //* This is a copy constractor
        roll = obj.roll;    //! Even if this copy constractor is not created, the cpp run this as default
        name = obj.name;
    }
};
int main(){
    student a("nill");
    student b(2);
    student c("nilu");
    student d(b);
    a.display();
    b.display();
    c.display();
    d.display();
}
