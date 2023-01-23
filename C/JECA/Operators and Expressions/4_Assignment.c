#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    /*
    compound assignment
    +=      a+=b    a=a+b
    -=      a-=b    a=a-b
    *=      a*=b    a=a*b
    /=      a/=b    a=a/b
    %=		a%=b    a=a%b
    */
   a+=b;
   printf("\nA+B = %d",a);
   a-=b;
   printf("\nA-B = %d",a);
   a*=b;
   printf("\nA*B = %d",a);
   a/=b;
   printf("\nA/B = %d",a);
   a%=b;
   printf("\nA%%B = %d",a);

   return 0;
}