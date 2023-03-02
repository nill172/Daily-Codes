#include<iostream>
using namespace std;
class sum{
    int a;
    int b;
    public:
    sum(int, int);
    int result();
};
sum :: sum(int x, int y){  //* Perameterise constractor
    a = x;
    b = y;
};
int sum::result(){
    return a+b;
}
int main(){
    sum a(2, 6);  //* Implicit call
    cout<<a.result()<<endl;

    sum b = sum(3, 8); //* Explicit call
    cout<<b.result()<<endl;
}