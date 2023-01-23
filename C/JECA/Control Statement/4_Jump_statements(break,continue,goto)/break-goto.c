#include<stdio.h>
//Printing all input numbers except negative numbers and the loop will end when 0(zero) is entered.
int main(){
    while(1) //We use while(1) for creating a contious loop, in while(1) '1' means truth. So as long its truth its going to repeats this code
    {
        int num;
        printf("\nEnter your number: ");
        scanf("%d",&num);
        if(num == 0){
            printf("You entered zero and the loop is ended\n");
            break; //Here we use break; where if the condition made then this code will terminated, unless it will condinue in while loop.
        }
        if(num < 0){
            printf("You must entered negative number and it's going to skip.\n");
            continue; //Here we use continue; where if the condition made then this code will skipped that time and check again this code. Untill it the condition aren't same as in the continue code.
        }
        printf("Here is your number %d\n",num);
    }
    return 0;
}