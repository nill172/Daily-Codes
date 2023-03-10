#include<iostream>
using namespace std;
class base1{

};
class base2{

};
class direved1 : public base2, public base1{

};
class direved2 : public base2, virtual base1{

};
int main(){

}