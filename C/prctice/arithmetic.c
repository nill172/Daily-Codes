// * ? ! This is a arithmetic operation
#include <stdio.h>
int main()
{
    int x, y;
    printf("The 1st number is: ");
    scanf("%d",&x);
    printf("The 2nd number is: ");
    scanf("%d",&y);
    
    int addition = x + y;
    int substraction = x - y;
    int multiplication = x * y;
    int division = x / y;
    int modulus = x % y;

    printf("The addition is: %d\n", addition);
    printf("The substraction is: %d\n", substraction);
    printf("The multiplication is: %d\n", multiplication);
    printf("The division is: %d\n", division);
    printf("The modulus is: %d\n", modulus);

    return 0;
}