#include<stdio.h>
int main(){

    int marks;
    printf("Enter your mark from last exam: ");
    scanf("%d", &marks);

    switch(marks){
        case 100:
        printf("You got the perfect score and you got A++ grade.");
        break;

        case 90 ... 99: //Here low_value '...' (triple dot) high_value for mentioning the range.
        printf("You got A+ grade.");
        break;

        case 75 ... 89:
        printf("You got A grade.");
        break;

        case 50 ... 74:
        printf("You got B grade.");
        break;

        case 25 ... 49:
        printf("You got C grade.");
        break;

        default:
        printf("You are in D grade.");
        break;
    }




    return 0;
}