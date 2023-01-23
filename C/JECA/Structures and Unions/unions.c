#include<stdio.h>
#include<string.h>

// union is same as struct but is size allocation is small. So the biggest variable size will the union's total size. So we can get one data once.
union student{
    char name[50];
    int roll;
    float marks;
}a,b;
int main(){
    strcpy(a.name, "Nilanjan Debnath");
    printf("The name of the student is ");
    puts(a.name);
    a.roll = 315;
    printf("The roll number is %d.",a.roll);
    a.marks= 8.05;
    printf("\nThe marks is %0.2f.",a.marks);

    // As you see we can get output after setting the value.
    // But if we try to get all output at once, then only last value will be same but others will be corrept;
    printf("\n%s's result %f and his roll number is %d",a.name, a.marks, a.roll);

    return 0;
}