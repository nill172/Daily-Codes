#include<stdio.h>
#include<conio.h>
int main(){
    FILE* fp;
    char name[9], oporation, line, read[99], write[99], appand[99];
    printf("Enter the file name you wanna write into: ");
    gets(name);
    fp = fopen(name, "w");
    fclose(fp);

    printf("\nWhat you want to do with your file?\nFor read press 'r'\nFor write from the start 'w'\nFor add writing to file 'a'\n");
    scanf("%c",&oporation);

    switch(oporation){
        case 'r':
        fp = fopen(name, "r");
        while(fgets(read, 99, fp)){
            printf("%s", read);
        }
        break;

        case 'w':
        fp = fopen(name, "w");
        printf("Type here what you wanna write: \n");
        gets( write);
        fputs(write, fp);
        break;

        case 'a':
        fp = fopen(name, "a");
        printf("Do you wanna add new line (y/n) ");
        scanf("%c",&line);
        switch(line){
            case 'y':
            fputs("\n", fp);
            case 'n':
            fputs(" ", fp);
            default:
            printf("You entered the wrong character.");
            break;
        }
        printf("write here what you wanna add: \n");
        gets(appand);
        fputs(appand, fp);
        break;

        default:
        printf("You entered the wrong character.");

    }

    fclose(fp);
    return 0;
}