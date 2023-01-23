#include<stdio.h>
int main()
{
    int a=4;
    printf("\nEnter a number: ");
    scanf("%d",&a);
    /*if(a>=5){
        printf("Your number is more than or equal to 5.");
    }else{
        printf("Your number is less than 5.");
    }*/

    //We can write this using conditional oporatior
    //char condition[50];
    ( a >= 5 ) ? printf("\nYour number is more than or equal to 5.") : printf("\nYour number is less than 5.");
    return 0;
}