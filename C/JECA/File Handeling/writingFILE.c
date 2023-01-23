#include<stdio.h>
int main(){
    FILE* fptr;
    char line[999];
    fptr = fopen("new.txt", "w");
    printf("Type the line you wanna write:\n");
    gets(line);
    fputs(line, fptr);
    fclose(fptr);
    return 0;
}