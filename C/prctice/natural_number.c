#include<stdio.h>
int main()
{
    int i,m,n;
    printf("Enter the lower limit: ");
    scanf("%d",&m);
    printf("Enter the upper limit: ");
    scanf("%d",&n);
    printf("Printing the number %d to %d\n",m,n);
    printf("These are the numbers: \n");

    for(int i=m;i<=n; i++)
    printf("%d\t", i);


    return 0;
}
