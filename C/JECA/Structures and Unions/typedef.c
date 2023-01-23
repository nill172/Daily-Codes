#include<stdio.h>

//We use it like this to change the big function name in short form
// typedef <existing_name> <alias_name>  
// Like:  typedef unsigned int unt;     So when we create a unsigned int we have to write unt <variable_name>
//* Also like: typedef int* pnt;         Se when we set a int pointer we don't have to weite int* a; We can write pnt a;

typedef struct student{
    char name[50];
    int RollNo;
    float result;
}std;               // As you see, we transform struct student to std;
                    // So when we set a struct varible we can simply write std exchage of struct student.

int main(){
    std a={"Nilanjan Debnath", 315, 8.05};
    printf("%s got %0.2f cgpa and his assinged roll no is %d.",a.name, a.result, a.RollNo);
    return 0;
}