#include<stdio.h>
int main(){
    FILE* fptr;
    char appand[99];
    fptr = fopen("new.txt", "a");
    printf("Type what you are wanna add to the text file\n");
    gets(appand);
    fputs(" ", fptr);
    fputs(appand, fptr);
    fclose(fptr);


    return 0;
}