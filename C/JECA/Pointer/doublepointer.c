#include<stdio.h>
int main(){
    int a = 3;
    int *p;
    int **dp;
    p = &a;
    dp = &p;
    
    printf("\n*p = %d",*p);
    printf("\np = %d",p);
    printf("\n*dp = %d",*dp);
    printf("\ndp = %d", dp);
    
    return 0;
}