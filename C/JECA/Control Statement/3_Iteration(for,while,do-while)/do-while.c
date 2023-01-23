#include<stdio.h>
int main(){
    int count;
    printf("Enter the count number: ");
    scanf("%d", &count);

    do{
        printf("\nYour countdown is %d",count);
        count = --count; //--count is the same as count - 1;
    }while(count >= 0);
    return 0;
}