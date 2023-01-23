#include <stdio.h>
int main()
{
    int class;
    int marks;
    printf("Enter your class: ");
    scanf("%d", &class);
    printf("Entar your marks: ");
    scanf("%d",&marks);
    if(marks<=100 && marks >= 75)
    {
        printf("You've passed the exam with grade:  A. \nYou're in class-%d now.",class+1);

    }
    else if(marks<=74 && marks>=50)
    {
        printf("You've passed the exam with grade:  B. \nYou're in class-%d now.",class+1);
    }
    else if(marks<=49 && marks>=25)
    {
        printf("You've passed the exam with grade:  C. \nYou're in class-%d now.",class+1);
    }
    else
    {
        printf("You've failed the exam.\nYou will remain in class %d.",class);
    }
    return 0;
}