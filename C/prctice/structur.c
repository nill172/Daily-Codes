#include <stdio.h>
struct classmate
    {
        char name[50];
        long long int roll_no;
        float scpa;
    };
void main()
{
    //struct classmate sata,amit, debo, bibek, jyti, rahul;
    
    struct classmate sata={"SATADRUSOVAN SARKAR",193532210116,7.167};
    struct classmate amit={"AMIT KUMAR SAW", 193532210118, 6.545};
    


    printf("scpa of satadru: %.3f\n",sata.scpa);
    printf("Full name of satadru: %s\n",sata.name);
}