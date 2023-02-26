#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct classroom{
    int roll;
    char name[30];
    int marks;
}cls,*clr;

int main(){
    int n = 5;
    clr arr = (clr)malloc(n * sizeof(cls));
    arr[0] = {21,"Nilanjan", 75};
    printf("Name: %s",arr[0].name);
    return 0;
}
