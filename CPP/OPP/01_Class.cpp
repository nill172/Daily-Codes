#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<string>
using namespace std;
class student{
    private:
        int room;
        string name;
        int count = 0;
        static int counter;  //* Static variable
    public:
        void set_info(void);
        void get_info(void);
        static void set_count(void);  //* Static function (declaration)
};

void student :: set_count(){  //* Static function defination
            counter++;
        }

int student :: counter;

void student :: set_info(){
    cout<<"Enter the name and room number ";
    cin>>name>>room;
    set_count();   //* one class function calling another class function
    count = counter;
}
void student :: get_info(){
    cout<<setw(3)<<count<<setw(10)<<name<<setw(4)<<room<<"."<<endl;
}

int main(){
    int n = 2;
    // student *class8 = new student[n];  //* Creating array of class and allowcating memory
    student class8[n];
    int i;
    for (i=0; i<n; i++){
        class8[i].set_info();
    }
    cout<<" No "<<"   Name  "<<" Room"<<endl;
    for (i=0; i<n; i++){
        class8[i].get_info();
    }
    // delete[] class8;  //* deleting the allow cating memory space
}