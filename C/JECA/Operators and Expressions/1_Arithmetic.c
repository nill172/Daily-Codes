#include <stdio.h>
int main()
//Arithmetic Operations
{
    int a, b, c;
    char ch;
    /*
    +   Addition or unary plus
    –	Subtraction or unary minus
    *	Multiplication
    /	Division
    %	Modulo division
    */
   printf("Enter the 1st number: ");
   scanf("%d", &a);
   printf("Enter the 2nd number: ");
   scanf("%d", &b);
   c = a + b;
   printf("\nThe addition of two number is: %d", c);
   c = a - b;
   printf("\nThe subraction of two numver is: %d", c);
   c = a * b;
   printf("\nThe multiplication of two number is: %d", c);
   c = a / b;
   printf("\nThe division of two number is: %d", c);
   c = a % b;
   printf("\nThe modulo division of two number is: %d", c);
    return 0;
}