#include <stdio.h>
int main()
{
    int a, b, c;
    long long int e;
    char ch;
    printf("\nEnter the 1st number: ");
    if (scanf(" %d", &a) != 1)
    {
        printf("\nSyntex Error");
    }
    else
    {
        printf("Enter the oporation sign (+, -, *, /, %): ");
        scanf(" %c", &ch);
        // ch = getche();
        printf("Enter the 2nd number: ");
        if (scanf(" %d", &b) != 1)
        {
            printf("\nSyntex Error");
        }
        else
        {
            /*  +    	 Addition or unary plus
                –	Subtraction or unary minus
                *	Multiplication
                /	Division
                %     	Modulo division */

            if (ch == '+')
            {
                c = a + b;
                 printf("\nThe result is %d", c);
            }
            else if (ch == '-')
            {
                c = a - b;
                 printf("\nThe result is %d", c);
            }
            else if (ch == '*')
            {
                c = a * b;
                 printf("\nThe result is %d", c);
            }
            else if (ch == '/')
            {
                c = a / b;
                e = a % b;
                if (e != 0)
                {
                    e = (e * 10000000) / b;
                    printf("\nThe result is %d.%d", c, e);
                }
                else
                {
                     printf("\nThe result is %d", c);
                }
                
            }
            else if (ch == '%')
            {
                c = a % b;
                printf("\nThe result is %d", c);
            }
            else
            {
                printf("\nSyntex Error");
            }
        }
    }
    return 0;
}