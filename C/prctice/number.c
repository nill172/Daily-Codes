#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Guess the correct number game
int main()
{
    int comNum, userNum;
    
    
    srand(time(NULL));
    
    
    printf("Let's see can you guess the number!! \n");

    
    while(1)
    {
        comNum = rand() % 10;
        printf("\nEnter the number 0-9 : ");
        scanf("%d", &userNum);
        int a = (int)userNum;

        if (comNum == userNum)
        {
            printf("Yes, you guessed it right.");
            break;
        }
        else
        {
            printf("No, you guessed it wrong. ");
            printf("\nThe number was %d\n",comNum);
            
        }
    }

    return 0;
}
