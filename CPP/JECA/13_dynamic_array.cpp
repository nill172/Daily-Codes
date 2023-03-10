#include<iostream>
using namespace std;

int main(){
    int *marks;
    int subjects = 4;
    // cout<<"Enter the total subject: ";
    // cin>>subjects;
    marks = new int(subjects);
    int i;
    int total = 0;
    cout<<"The marks of "<<endl;
    for(i=0; i<subjects; i++){
        cout<<"Subject no."<<i+1<<" => ";
        cin>>marks[i];
        total += marks[i];
    }
    cout<<"The result total number is => "<<total<<endl;
    cout<<"Avarage: "<<1.0*total/subjects<<endl;
}