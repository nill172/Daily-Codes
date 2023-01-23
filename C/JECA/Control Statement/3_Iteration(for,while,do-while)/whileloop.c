#include<stdio.h>
int main(){
    int count;
    printf("Enter the count number: ");
    scanf("%d", &count);

    while(count >= 0){
        printf("\nThe coundown is %d", count);
        count = count-1;    //you can use --count;

    }
    return 0;
}