#include<stdio.h>
int main(){
    //The common string we use are this type, that is predefied.
    char str1[] = "\tNilanjan";
    puts(str1);
    
    //Now we get the string from the user.
    char str2[25];//Here we have to write the size of string. That is must be same size of input size of bigger.
    printf("Enter the 2nd string: ");
    gets(str2);
    printf("The inputed string is: ");
    puts(str2);

    //We can print any letter by determining the position of the letter in the string
    printf("The 1st letter of the 2nd string is %c",str2[0]);
    return 0;
}