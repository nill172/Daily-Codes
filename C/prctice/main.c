#include<stdio.h>
int main(){
    int a = 1, b= 2, x;
    printf("a= %d\nb=%d\n",a, b);
    int *c = &a;
    int *d = &b;
    x = a;
    a = b;
    b = x;
    printf("a= %d\nb=%d\n",a, b);
}