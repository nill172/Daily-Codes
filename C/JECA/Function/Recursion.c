#include<stdio.h>
//Recurtion is used to add a range of numvers togather
int sum(int a);

int main()
{
    printf("The addtion of 1 to 20 is: %d", sum(20));
    return 0;
}
int sum(int a)
{
    if(a>0)
    {
        return a + sum(a-1); //This return function continuously adding the agrument a and a-1, until it's 0.
    }
    else
    {
        return 0;
    }
}