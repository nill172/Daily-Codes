#include <stdio.h>
int main()
{
    char line[100];
    FILE *nill = fopen("new.txt","r");

    fgets(line,100,nill);
    printf("%s",line);

    fclose(nill);
    return 0;
}