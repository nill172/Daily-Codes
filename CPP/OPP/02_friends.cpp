#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class student{
    friend void delet(student* edit);
    string name;
    int roll;
    int marks;
    static int count;
    public:
        void entry();
        void show();
};
int student :: count;
void student :: entry(){
    cout<<"Enter the name, roll and mark: ";
    cin>>setw(10)>>name>>roll>>marks;
    count++;
}
void student :: show(){
    cout<<setw(3)<<roll<<setw(10)<<name<<setw(5)<<marks<<endl;
}
void delet(student* edit){
    int i, r;
    cout<<"Enter the roll number ";
    cin>>r;
    while(r != edit[i].roll){
        i++;
    }
    delete edit[i];
    edit[i] = nullptr;
    for(i; i<edit[i].count; i++){
        edit[i] = edit[i+1];
    }
    edit[i+1].count--;
}

int main(){
    int i, n = 3;
    student *class10;
    for(i=0; i<n; i++){
        class10[i] = new student(i);
    }
    for(i=0; i<n; i++){
        class10[i].entry();
    }
    for(i=0; i<n; i++){
        class10[i].show();
    }
    delet(class10);
    
}

