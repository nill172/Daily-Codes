#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    printf("Enter a string(santence): ");
    gets(string);
    char word[10];
    printf("Enter the word: ");
    gets(word);
    char *find;
    find = strstr(string, word);
    char rpls[10];
    printf("Enter the replacement word: ");
    gets(rpls);
    if(find){
        strcpy(find, rpls);
        printf("%s",string);
    }else{
        printf("The word not founded.");
    }
    return 0;
}