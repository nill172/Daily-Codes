#include<stdio.h>
typedef struct student{
    char name[50];
    int RollNo;
    float result;
}std;

int main(){
    std a={"Nilanjan Debnath", 315, 8.05};
    printf("%s got %0.2f cgpa and his assinged roll no is %d.",a.name, a.result, a.RollNo);
    return 0;
}