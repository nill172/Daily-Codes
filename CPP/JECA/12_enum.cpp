#include<iostream>
using namespace std;
int main(){
    enum food{rice, bread, sweets};
    //! by usnig enum, we storing the food name in numaric form
    //* here rice = 0, bread = 1, sweets = 2
    food mychoice = rice;
    food yourchoice = sweets;
    cout<<mychoice<<endl<<yourchoice;
    //* As we get the numaric form output, we can tell the actual food name
}