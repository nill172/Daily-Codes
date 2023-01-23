#include <stdio.h>
int main()
{
    int Num; // Here 'int' is data type and 'Num' is the veriable
    long long int largeNum; //Here is also same, first blue words stads for data type and last word is the veriable
    float floatNum;
    double long_floatNum;
    char characters;
    char string[50];

    //Here we inputing the value;
    Num = 45;
    floatNum = 93.5;
    long_floatNum = 5669941.2148863;
    characters = '$';  //characters shoud be in ''
    
    /*for printing or using scanf funcion
     * int -- %d
     * long int -- %ld
     * long long int -- %lld
     * float -- %f
     * double -- %lf
     * char -- %c
     * string -- %s
     */
    // We can also input the value from outside;
    printf("Enter your name: ");
    scanf("%[^\n]s",&string); //for add space into string write '%[^\n]s' exchage of '%s'
    printf("Enter your phone number: ");
    scanf("%lld",&largeNum);

    //Here we printing the predefined value and other inputs
    printf("\nYour name is %s. \nYour phone number is %lld. \n\n",string,largeNum);
    printf("And here is predefined value-\nThe number is %d. \nThe float Number is %.3f.\nThe large float number is %lf.\nThe special character is %c",Num,floatNum,long_floatNum,characters);
    //for limiting the how many number after the point you want to print you have to use %.(your_choice)f
    return 0;
}