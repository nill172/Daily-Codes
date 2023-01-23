#include<stdio.h>

void nilan(char name[], int age);

void nilan(char name[], int age)     //Here name is parameter
{
    printf("Hello %s, your age %d.\n", name,age);
}
int main()
{
    nilan("Nilanjan",21);      // Here all the names I put are arguments
    nilan("Nilotpal",26);      //I am calling nilan() funtion with different arguments
    nilan("Sasanka",54);
    nilan("Tanushree",43);
    return 0;
}
