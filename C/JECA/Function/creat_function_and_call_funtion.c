#include<stdio.h>

//Function Decleration
void nilan();

//Function Definition
void nilan()    // That's a created function.
{
    printf("\nHello World");
}

//main method
int main()
{
    nilan();    //We create the funtion here with this sturcture function();
    nilan();//Call the function
    nilan();    //We can call it more than twice. How many times we call it, it will execute that times.
    return 0;
}