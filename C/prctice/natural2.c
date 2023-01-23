#include <stdio.h>
int main()
{
    int m,n,i;
    printf("Enter the lower limit: ");
    scanf("%d",&m);
    printf("Enter the upper limit: ");
    scanf("%d",&n);
    
    printf("The naturals numbers between %d and %d are: \n",m,n);

    for(i=m; i<=n; i++)
    printf("%d\t",i);
    return 0; 
}