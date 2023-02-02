#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age < 1 || age > 150){
        cout<<"Invalid input";
    }else if(age >= 18 ){
        cout<<"You are elegeble for vote.";
    }else if(age == 17){
        cout<<"You can vote next year."<<endl<<"You can prepare docoments for voter card.";
    }else{
        cout<<"You have to wait for "<<(18-age)<<" years to attant the vote";
    }
    return 0;
}