#include <stdio.h>
int main()
{
    int a, b, d, r; // a = 1st num, b = 2nd num, d = result of the opration 
    long long int e = 0;
    char c;   // c = sign for operation example = +,-,*,/,%
    printf("Enter the first number: ");
    if (scanf(" %d", &a) != 1){printf("\nERROR");}else{
    printf("Choose the oparation(+,-,*,/,%): ");
    scanf(" %c", &c);
    printf("Enter the second number: ");
    if(scanf(" %d", &b) != 1){printf("\nERROR");}else{
    
    
    
    switch(c)
    {
        case '+':
            d = a + b;
            break;
        case '-':
            d = a - b;
            break;
        case '*':
            d = a * b;
            break;
        case '/':
            d = a / b;
            e = a % b;
            if (e != 0)
                {
                    e = (e * 10000000) / b;
                    
                }
            break;
        case '%':
            d = a % b;
            break;
        default:
            printf("ERROR \n");
            break;
        
    }
    printf("The oparation: %d %c %d = %d.%d\n",a,c,b,d,e);
    }}
    return 0;
}