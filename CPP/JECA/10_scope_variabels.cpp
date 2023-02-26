#include<iostream>
using namespace std;
int global_variable;

int square(int formal_perameter){
    return (formal_perameter * formal_perameter);
}
int main(){
    int local_variable = 5;
    global_variable = square(local_variable); //* Here local_variable is actual_perameter
    cout<<global_variable;
}