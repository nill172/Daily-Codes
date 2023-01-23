#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    /*
    &&      meaning logical     AND

    ||      meaning logical     OR

    !       meaning logical     NOT
    */
   if((a<b)&&(a!=b)){
    printf("\n%d is less than and not equal to %d.",a,b);
   }
   if((a>b)||(a==b)){
    printf("\n%d is greater than or equal to %d.",a,b);
   }
   if(!(a!=b)){
    printf("\n%d is equal to %d.",a,b);
   }




   return 0;
}