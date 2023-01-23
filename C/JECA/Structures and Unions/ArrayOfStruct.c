#include<stdio.h>
#include<string.h>

typedef struct student{
    char name[50];
    int roll;
    float marks;
}std;
int main(){
    char dummy;
    std a,b,c;
    std student[] = {a,b,c};

    for (int i = 0; i<sizeof(student)/sizeof(student[0]); i++){
        printf("Enter the No.%d student's  name: ",i+1);
        // scanf("%s",student[i].name);
        gets( student[i].name);
        // scanf("%c",&dummy);  
        printf("Enter the No.%d student's  roll: ",i+1);
        scanf(" %d",&student[i].roll);
        printf("Enter the No.%d student's  cgpa: ",i+1);
        scanf(" %f",&student[i].marks);
    }

    for (int i = 0; i<sizeof(student)/sizeof(student[0]); i++){
        printf("\n\t%-10s\t%d\t%0.2f",student[i].name, student[i].roll, student[i].marks);
    }
    
    return 0;
}