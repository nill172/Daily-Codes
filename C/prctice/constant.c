#include <stdio.h>
int main()
{
    const int x = 8;
    // x = 10; here we cann't change the value of this constant integer
    printf("The constant value is: %d",x);
    return 0;
}