#include<stdio.h>
#include<string.h>

struct classmate{
    char name[25];
    long long int phno;
    float cgpa;
}a,b; //These are the veriable of the structure

int main(){
    
    //We set valures like this, one by one.
    strcpy(a.name, "Satadru");
    a.phno = 7478617534;
    a.cgpa = 7.167;
    //And print all of them like this.
    printf("\n%s's phone no is %lld. And his cgpa is %0.3f.",a.name, a.phno, a.cgpa);
    
    //Or we can set all the value at once like this.
    struct classmate b = {"Debasish", 6396344790, 7.036};
    //And also print them individualy
    printf("\n%s",b.name);
    printf("'s phone no is %lld.", b.phno);
    printf("And his cgpa is %0.3f.",b.cgpa);

    //We can set the variable here also.
    struct classmate c;

    //And we can get the value of the variable like this
    printf("\nEnter the name of classmate: ");
    gets(c.name);
    printf("The name of the classmate is: ");
    puts(c.name);
    
    return 0;
}