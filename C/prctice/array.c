#include <stdio.h>
int main()
{
    int marks[5];
    
    marks[0] = 65;
    marks[1] = 46;
    marks[2] = 78;
    marks[3] = 62;
    marks[4] = 75;
    for(int i=0;i<5;i++)
    printf("The marks of the student no.%d is = %d\n",i+1, marks[i]);
    return 0;
}