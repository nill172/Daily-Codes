#include<stdio.h>
// All the fuction for file handeling
// No.	Function	Description
// 1	fopen()	    opens new or existing file
// 2	fprintf()	write data into the file
// 3	fscanf()	reads data from the file
// 4	fputc() 	writes a character into the file
// 5	fgetc()	    reads a character from file
// 6	fclose()	closes the file
// 7	fseek()	    sets the file pointer to given position
// 8	fputw() 	writes an integer to file
// 9	fgetw()	    reads an integer from file
// 10	ftell()	    returns current position
// 11	rewind()	sets the file pointer to the beginning of the file

// All the modes we can use after fopen() function
// Mode	Description
// r	opens a text file in read mode
// w	opens a text file in write mode
// a	opens a text file in append mode
// r+	opens a text file in read and write mode    and it replace the data from the begening
// w+	opens a text file in read and write mode    and it erase the whole data form the file and write the new file
// a+	opens a text file in read and write mode    and it adding the new data at the end of the previous data
// rb	opens a binary file in read mode
// wb	opens a binary file in write mode
// ab	opens a binary file in append mode
// rb+	opens a binary file in read and write mode
// wb+	opens a binary file in read and write mode
// ab+	opens a binary file in read and write mode

// void filewrite();
// void fileread();
void fileappand();

int main(){
    // filewrite();
    // fileread();
    fileappand();
    return 0;
}

// void filewrite(){
//     FILE *ptr = NULL;
//     char str[50];
//     gets(str);
//     ptr = fopen("new.txt","w");
//     fprintf(ptr, "%s", str);
//     fclose(ptr);
// }

// void fileread(){
//     FILE *ptr =-0 NULL;
//     char str[100];
//     ptr = fopen("new.txt","r");
//     // fscanf(ptr, "%s", str);  This will only print 1st word with no space.
//     fgets(str, 100, ptr);
//     // fgets(str, 100, ptr);    We can write it twice for reading the 2nd line.
//     printf("The string from the text file: ");
//     puts(str);
//     fclose(ptr);
// }

void fileappand(){
    FILE *ptr = NULL;
    char str[50] = "I am 22 years old.";
    ptr = fopen("new.txt","a");
    fprintf(ptr, "\n%s", str);
    fclose(ptr);
}