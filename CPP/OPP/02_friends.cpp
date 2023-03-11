#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class student{
    private: 
        string name;
        int roll;
        int marks;
        static int count;

    //! Friend functions
    friend void delet(student*);
    friend void display(student*);

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
void display(student* stu){
    int i;
    for(i=0; i<stu[i].count; i++){
        stu[i].show();
    }
}

void delet(student* edit){
    int i, r;
    cout<<"Enter the roll number ";
    cin>>r;
    for(i=0; i<edit[i].count; i++){
        if(r == edit[i].roll){
            break;
        }
    }

    for(i; i<edit[i].count - 1; i++){
        edit[i] = edit[i+1];
    }
    edit[i].count--;
}

int main(){
    int i, n = 3;
    student *class10;
    class10 = new student[n];
    for(i=0; i<n; i++){
        class10[i].entry();
    }
    display(class10);
    delet(class10);
    display(class10);
}

