#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    switch(marks/10)
    {
        case 10 :
            printf("Your grade is AA");
            break;
        case 9 :
            printf("Your grade is A+");
            break;
        case 8 :
            printf("Your grade is A");
            break;
        case 7 :
            printf("Your grade is B+");
            break;
        case 6 :
            printf("Your grade is B");
            break;
        case 5:
            printf("Your grade is C+");
            break;
        case 4 :
            printf("Your grade is C");
            break;
        default :
            printf("You've failed.");
            break;
        

    }


    return 0;
}