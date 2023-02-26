#include<iostream>
using namespace std;

//* Volume of cube
int volume(int a){
    return (a*a*a);
}
//* Volume of Cuboid
int volume(int a, int b, int h){
    return (a*b*h);
}
//* Volume of cylinder
float volume(int r, int h){
    return (3.14*r*r*h);
}
//! There is three type of function with same name. Every one works with their similer one
int main(){
    cout<<"The volume of Cube with side 9 = "<<volume(9)<<endl;
    cout<<"The volume of cuboid withe sides 9, 6 and hight 3 = "<<volume(9, 6, 3)<<endl;
    cout<<"The volume of cylinder with redious 3 and hight 6 = "<<volume(3, 6)<<endl;
    return 0;
}