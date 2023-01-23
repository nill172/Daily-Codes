#include<stdio.h>
int main(){while(1){
    int a, b, c, d;
    char ch;
    printf("Enter the 1st number: ");
    if(scanf("%d",&a) != 1){
        printf("ERROR NUMBER INPUT");
        break;
    }
    printf("Enter the 2nd number: ");
    if(scanf("%d",&b) != 1){
        printf("ERROR NUMBER INPUT");
        break;
    }
    printf("Enter the oporation character(between: + - * /): ");
    scanf(" %c",&ch);

    if(ch == '+'){
        goto adition; //here we using goto function to skip all codes between goto and the mentioned lebel. So it's direct jump to the mentioned lebel.
    }else if(ch == '-'){
        goto subtraction;
    }else if(ch == '*'){
        goto multiplication;
    }else if(ch =='/'){
        goto division;
    }else{
        goto error;
    }

    adition:
    c = a + b;
    printf("\nThe addintion of two numbers is: %d",c);
    break;

    subtraction: //this is a lebel
    c = a-b;
    printf("\nThe subtraction between two number is: %d",c);
    break;

    multiplication: // this is a lebel
    c = a*b;
    printf("\nThe multiplication of two numbers is: %d",c);
    break;

    division: //this is a lebel
    c = a/b;
    printf("\nThe division of two numbers is: %d",c);
    break;

    error: // this is a lebel
    printf("\nERROR CHERACTER INPUT");
    break;

    }
    return 0;
}