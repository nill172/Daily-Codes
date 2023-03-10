#include<iostream>
#include<string>
using namespace std;
class student{
protected:
    int roll;
    string name;
public:
    void setdata(int, string);
};
void student :: setdata(int r, string n){
    roll = r;
    name = n;
}
class exam : public student{
protected:
    int totalsubject;
    int *marks;
public:
    void setmarks(int);
};
void exam :: setmarks(int n){
    totalsubject = n;
    marks = new int[n];
    int i;
    for(i=0; i<n; i++){
        cout<<"Marks of subject no."<<i+1<<": ";
        cin>>marks[i];
    }
}
class result : public exam{
protected:
    float persentage;
public:
    void showresult();
};
void result :: showresult(){
    int i;
    int total = 0;
    for (i=0; i<totalsubject; i++){
        total = total + marks[i];
    }
    persentage = (1.0 * total)/totalsubject;
    cout<<"The result is : "<<persentage<<"%"<<endl;
}
int main(){
    result nila;
    nila.setdata(5, "Nilanjan");
    nila.setmarks(4);
    nila.showresult();
    return 0;
}