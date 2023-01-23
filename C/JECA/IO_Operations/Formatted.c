#include <stdio.h>
/*Formatted I/O Functions
printf()
scanf()
sprintf()
sscanf()*/
int main()
{
    /*int a=5;
    printf("Enter a number: "); //printf("Text you want to display");
    scanf("%d", &a); //scanf("Format Specifier", &variables);
    printf("The entered number is: %d", a);//printf("Text and Format Specifier",variables);
    */
    //Now we are gonna use sprintf() and sscanf()
    //These funcrion is mainly used for string type variables
    char str[50];
    int a = 4, b;

    sprintf(str, "I take the value of a is %d", a);
    sscanf(str, "I take the value of a is %d", &b);//here I transfer the value of a to b bye writting the same string and adding &b
    sprintf(str, "Now the value of b is: %d", b);
    printf("%s",str);


    return 0;
}
