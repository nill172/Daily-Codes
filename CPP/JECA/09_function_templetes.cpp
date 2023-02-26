#include<iostream>
using namespace std;
//! Instate of creating funcion overloading, we use this function template
//* By creating that we take any type of numerical input and get the output
template<class t1, class t2>
float avarage(t1 a, t2 b){
    return (a+b)/2.0;
}
//* Make a swap fuction using fuction templete, where any two type fo variable can be swapped
template<class t3, class t4>
void swapp(t3 &a, t4 &b){
    t3 tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int a = 5;
    int b = 50;
    float c = 25.5;
    cout<<"Avarage of two intiger numbers "<<a<<" and "<<b<<" is "<<avarage(a,b)<<endl;
    cout<<"Avarage of intiger number "<<b<<" and float number "<<c<<" is "<<avarage(b,c)<<endl;
    cout<<"The swap value of "<<a<<" and "<<c<<" is ";
    swapp(a, c);
    cout<<a<<" and "<<c<<endl;
    //* Now float c is type casted as int and stored in a. Same for value of a.
}