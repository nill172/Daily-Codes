#include<iostream>
using namespace std;
template<class tem = int >         //! Here we create a template
                                   //! And set the default data type of the template as "int"
class array{
        tem* data;          //! Here we use the template in the class
        int size;
    public:
        array(int n){           //! Here we creating the array using template data type
            this->size = n;     //! So we can create any datatype array using this format
            this->data = new tem[size];
            cout<<"Enter the elements: "<<endl;
            for(int i = 0; i< n; i++){
                cin>>this->data[i];
            }
        }
        void show(){
            cout<<"Displaying the array elements: "<<endl;
            for(int i = 0; i<this->size; i++){
                cout<<this->data[i]<<" ";
            }
            cout<<endl;
        }
        
};
int main(){

//* class<template_datatype> class_veriable(); 

    array<char> arra(4);    //! Using this formate we can specify which type of teplate data type we want
    arra.show();
    array<float> arr(3);    //! Now we create two array of "char" and "float" data type using same class
    arr.show();

    array<> ar(2);       //! As we set default datatype as "int", so if we give noting, it will set to "int"
    ar.show();
}