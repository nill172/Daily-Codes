
#include <stdio.h>
int main()
{
    float f = 25.99786;
    double d = 2000.87; // double is a long fload number
    printf("The value of foat is: %.3f\n",f); // In %.3f, there .3 is for how many number the the point we want to print 
    printf("The value of double is: %lf\n",d);
    printf("The size of the float number in my computer is: %ld\n",sizeof(f)); // here is %ld beacuse the size wil be in integer number
    printf("The size of the double number in my computer is: %ld\n",sizeof(d));
//storing alphabats as charecter type number
    char alphabat ='N';
    printf("The first letter of my name is: %c\n",alphabat);
    char name[] = "Nilanjan Debnath"; // that's a string type input
    printf("My name is %s\n", name); //for the sring data type for printing we have to write %s
    printf("The size of string value in my computer %d", sizeof(name));


    return 0; 
}