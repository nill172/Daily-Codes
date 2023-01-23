#include <stdio.h>
#include <conio.h> // This header for getch(), getche() and putch()
/*unformatted operators
getch()
putch()
getche()
getchar()
putchar()
gets()
puts()*/
int main()
{
    char ch;
    char str[50];

    //getch()
    printf("Enter the character:");
    ch = getch();//Reads the character
    printf("\n%c", ch);//not display

    //putch()
    printf("\nEnter the character: ");
    ch = getch();
    printf("\nThe character is: ");
    putch(ch);

    //getche()
    printf("\nEnter the character:");
    ch = getche();// Reads the character 
    printf("\n%c", ch);//displays immediately

    //getchar()
    printf("\nEnter the character: ");
    getchar();//Reads the character 
    printf("%c", ch);//Displays the characters after press ENTER 

    //putchar()
    printf("\nEnter the character: ");
    ch = getchar();
    printf("\nEntered character is: ");
    putchar(ch);// It's the same as getchar(), but here we use putchar() exchange of printf()

    //gets()  This function allows us to write space-separated texts or strings.
    printf("\nEnter some texts: ");
    gets(str); //Reads the texts or string
    printf("\nYour entered texts: %s", str);

    //puts()
    printf("\nEnter some texts: ");
    gets(str);
    printf("\nYour entered texts: ");
    puts(str);

    return 0;
}