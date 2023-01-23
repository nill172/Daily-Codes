#include <stdio.h>  // the header file for printf() & scanf()
#include <limits.h> // the header file for finding range
int main()
{
    int x;
    x = 10;
    printf("The integer number is: %d\n",x); //we use \n to creat new line in output
    printf("The size of integer number is: %d\n",sizeof(x)); //sixeof this code is used for finding how mane bits is taken by this integer number in my computer
    printf("The max range of int number: %d\n",INT_MAX);
    printf("The min range of int number: %d\n",INT_MIN);
    printf("The max range of long int number: %ld\n",INT_MAX); // for the long integer value we use %ld like -2147483648 to 2147483647 
    printf("The min range of long int number: %ld\n",INT_MIN); // for findin range you have to #include <limuts.h>
    return 0;
}