#include <stdio.h>
int write();
int append();
int read();
int main()
{   
    write();
    append();
    read();
    return 0;
}
int write()
{
    //Write in a new file
    /*FILE *new = fopen("new.txt","w");

    fprintf(new,"Nilanjan Debnath, Physics\nDebashis Adhikari, Physics\nBibek Halder, Physics\n");

    fclose(new);*/
    return 0;
}
int append()
{   //additional writing in new file
    /*FILE *new = fopen("new.txt","a");

    fprintf(new,"Satadru, Physics\nRahul Naskar,  Physics\nAmit Halder, Geography\n");

    fclose(new);*/
    return 0;
}
int read()
{   //read the file
    char line[100];
    FILE *nill = fopen("new.txt","r");

    fgets(line,100,nill);
    fgets(line,100,nill);//for writing this code twice, it will print the second line

    printf(" %s ", line );

    fclose(nill);
    return 0;
}