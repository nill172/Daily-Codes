#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("\nEnter the number: ");
    scanf("%d",&a);
    /*
    z = ++a;    a= a+1  z=a     Here both are incremented
    z = a++;    z=a     a= a+1  Here only 'a' is incremented and 'z' is the same value as previous 'a' value
    */

    b = a++;
    printf("\nAfter the oporation: b = a++;\nThe value of 'a' is %d.\nAnd the value of 'b' is %d. ",a,b);
    
    c = ++b;
    printf("\n\nAfter the oporation: c = ++b;\nThe value of 'b' is %d.\nAnd the value of 'c' is %d. ",b,c);
    
    d = a--;
    printf("\n\nAfter the oporation: d = a--;\nThe value of 'a' is %d.\nAnd the value of 'd' is %d. ",a,d);
    
    e = --d;
    printf("\n\nAfter the oporation: e = --d;\nThe value of 'd' is %d.\nAnd the value of 'e' is %d. ",d,e);

    return 0;
}