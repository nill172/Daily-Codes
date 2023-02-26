#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<string>
using namespace std;
class student{
    private:
        int room;
        string name;
    public:
        void set_info(void);
        void get_info(void);
};
void student :: set_info(){
    cout<<"Enter the name and room number ";
    cin>>name>>room;
}
void student :: get_info(){
    cout<<setw(10)<<name<<setw(4)<<room<<"."<<endl;
}

int main(){
    student *class8 = new student[10];
    int i;
    for (i=0; i<10; i++){
        class8[i].set_info();
    }
    cout<<"   Name   "<<"  Room"<<endl;
    for (i=0; i<10; i++){
        class8[i].get_info();
    }
    delete[] class8;
}