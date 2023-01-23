#include<stdio.h>
int main(){
    int a = 10;
    int *p;  // That is a pointer.
    p = &a;  // assining the value of a.

    //The address of a veriable is in this pointer
    printf("The value of pointer and address of a is: %d", p);
    //And the value of *p
    printf("\nThe value of a variable is: %d", *p);
    
    return 0;
}