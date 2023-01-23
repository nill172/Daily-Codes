#include <stdio.h>
int main()
{
    int roll = 1;
    char *p;
    p = &roll;
    printf("The roll is: %c\n",*p);
    printf("The address of the veriable 'roll' is: %x",p);
    return 0;
}