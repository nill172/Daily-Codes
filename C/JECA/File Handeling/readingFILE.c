#include<stdio.h>
int main(){
    FILE* fptr;
    char line[999];
    fptr = fopen("new.txt","r");
    if(fptr != NULL){
        while(fgets(line, 999, fptr)){
            // puts(line);   // This pusts funtion make a line gap in output between every line.
            printf("%s",line);
        }
    }else{
        printf("The file isn't exist.");
    }
    fclose(fptr);
    return 0;
}