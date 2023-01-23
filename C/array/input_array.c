#include <stdio.h>
int main()
{
    int a[5][3];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Enter the value a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The output array is: \n");
    for(int i=0; i<5; i++)
    {
        printf("\n");
        for(int j=0; j<3; j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    return 0;

}