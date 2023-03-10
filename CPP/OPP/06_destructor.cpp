#include<iostream>
using namespace std;
class number{
    int n;
    static int count;
    public:
    number(){
        count ++;
        n = count;
        cout<<"Constuctor called for "<<n<<endl;
    }
    ~number(){
        count--;
        cout<<"Destructor called for "<<n<<endl;
    }
};
int number :: count;
/* 
    * Every paranthesis "{}" create a block
    * After the block is finised "}" 
    * Every constructors are called in this block is destructarcted 
*/

int main(){
    cout<<"start"<<endl;
    cout<<"creating 1st object: "<<endl;
    number a;
    {
        cout<<"Enter into the block"<<endl;
        cout<<"Creating 2nd and 3rd object."<<endl;
        number b, c;
        cout<<"Exiting the block."<<endl;
    }
    cout<<"Finished"<<endl;
}