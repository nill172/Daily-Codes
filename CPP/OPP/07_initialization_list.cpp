#include<iostream>
using namespace std;
class test{
    private:
    int a;
    int b;
    public:
        test(int i, int j) : a(i), b( a + j){       //* Initailizing value in constractor
            cout<<"Constrctor Executed"<<endl;
            cout<<"The value of a and b is "<<a<<", "<<b<<endl;
        }
};
int main(){
    test n(3, 5);
    return 0;
}