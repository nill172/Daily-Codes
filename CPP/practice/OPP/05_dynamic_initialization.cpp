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
}
int main(){
    student a(nill);
    student b(2);
    student c(nilu);
    a.display();
    b.display();
    c.display();
}
