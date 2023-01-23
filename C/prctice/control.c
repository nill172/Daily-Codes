#include <stdio.h>
int main()
{
    int age;
    printf("Enter you age: ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("You are aligible for vote.");
    }
    else
    {
        printf("You have to wait for %d years for vote.",18-age);
    }
    return 0;
}