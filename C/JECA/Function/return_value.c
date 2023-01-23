#include<stdio.h>

int nilan(int x, int y);//declaration

//description
int nilan(int x, int y) //here we getting parameters as x,y.
{
    return x + y; //Here return value isn't 0. Here x + y is storing to nilan() function.
}
int main()
{
   printf("The output = %d",nilan(5,3)); // Here we setting value of arguments as 5,3.
    return 0;
}