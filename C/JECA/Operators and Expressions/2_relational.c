#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the 1st number: ");
    scanf("%d",&a);
    printf("Enter the 2nd number: ");
    scanf("%d",&b);
    /*
    < 	 is less than
    <=	is less than or equal to
    > 	is greater than
    >=	is greater than or equal to
    ==	is equal to
    !=	is not equal to
    */
   if(a < b){
    printf("\n%d is less than %d.",a,b);
   }else{
    printf("\n%d is not less than %d.",a,b);
   }

   if(a<=b){
    printf("\n%d is less than or equal to %d.",a,b);
   }else{
    printf("\n%d is no less than or equal to %d.",a,b);
   }

   if(a>b){
    printf("\n%d is grater than %d.",a,b);
   }else{
    printf("\n%d is not greater than %d.",a,b);
   }

   if(a>=b){
    printf("\n%d is greater than or equal to %d.",a,b);
   }else{
    printf("\n%d is not greater than or equal to %d.",a,b);
   }

   if(a==b){
    printf("\n%d is equal to %d.",a,b);
   }else{
    printf("\n%d is not equal to %d.",a,b);
   }

   if(a!=b){
    printf("\n%d is not equal to %d.",a,b);
   }else{
    printf("\n%d is equal to %d.",a,b);
   }
    
    return 0;
}