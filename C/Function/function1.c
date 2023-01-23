#include <stdio.h>
int addition();
int substraction();
int multiplication();
int division();
int modulus();

int main()
{
    //difining function
    int result1 = addition();
    printf("The addition of two numbers is: %d\n", result1);
    int result2 = substraction();
    printf("The subtraction of two numbers is: %d\n", result2);
    int result3 = multiplication();
    printf("The addition of two numbers is: %d\n", result3);
    int result4 = division();
    printf("The divition of two numbers is: %d\n", result4);
    int result5 = modulus();
    printf("The modulus of two numbers is: %d\n", result5);
    return 0;
}
int addition()
{
    int x, y;
    printf("The two numbers for addition are: ");
    scanf("%d %d", &x,&y);
    return x + y;
}
int substraction()
{
    int x, y;
    printf("The two numbers substraction are : ");
    scanf("%d %d", &x,&y);
    return x-y;
}
int multiplication()
{
    int x,y;
    printf("The two numbers for multiplication are: ");
    scanf("%d %d", &x,&y);
    return x*y;
}
int division()
{
    int x,y;
    printf("The two numbers for divition are: ");
    scanf("%d %d", &x,&y);
    return x/y;
}
int modulus()
{
    int x, y;
    printf("The two numbers for mudulus are: ");
    scanf("%d%d",&x,&y);
    return x%y;
}