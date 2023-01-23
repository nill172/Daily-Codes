#include<stdio.h>
#include<string.h> // We have to use this header to use string functions
/*
strlen(string_name)	                returns the length of string name.
strcpy(destination, source)	        copies the contents of source string to destination string.
strcat(first_string, second_string)	concats or joins first string with second string. The result of the string is stored in first string.
strcmp(first_string, second_string)	compares the first string with second string. If both strings are same, it returns 0.
strrev(string)	                    returns reverse string.
strlwr(string)	                    returns string characters in lowercase.
strupr(string)	                    returns string characters in uppercase.
*/ 
int strstring();
int main(){
    char str1[25];
    char str2[25];
    printf("Enter the 1st string: "); gets(str1);
    printf("Enter the 2nd string: "); gets(str2);

    //strlen()
    printf("Length of two string is %d and %d",strlen(str1),strlen(str2));

    //strcpy(sring no 1, string no 2); thats copy the 1st string to 2nd sting
    printf("\n");
    char strcopy[strlen(str1)];
    strcpy(strcopy, str1);
    puts(strcopy);
    printf("%d",strlen(strcopy));
    printf("\n");

    //strcat(string no 1, string no 2); that's add two string and stor value to string no 1.
    strcat(strcopy, str2);
    puts(strcopy);

    //strcmp(string no 1, string no 2); that's showing the strings are samee or not.
    // If both sting are same it's give us '0' (zero) as output
    printf("%d",strcmp(str1, str2));
    printf("\n");

    //strrev() 
    printf("%s", strrev(strcopy));
    printf("\n");

    //strlwr(string); and strupr(string)
    printf("%s\n%s",strlwr(str1), strupr(str2));
    
    strstring();

    return 0;
}
int strstring(){
    //finding words in the string
    char str1[100];
    char str2[25];
    printf("Eneter the 1st string: ");
    gets(str1);
    printf("Enter the word, that want to see: ");
    gets(str2);
    char *str3;
    str3 = strstr(str1, str2);
    //puts(str3);
    printf("%s", str3);
    return 0;

}