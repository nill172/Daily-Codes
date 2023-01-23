#include<stdio.h>

int array1D();
int array2D();

int main()
{
    array1D();
    array2D();
    return 0;
}

int array1D(){
    int array[5], i;
    for(i=0; i<5; i++){
        printf("Enter the value of a[%d] ",i);
        scanf("\n%d",&array[i]);
    }
    printf("The array you inputed is:");
    for(i=0; i<5; i++){
        
        printf(" %d",array[i]);
    }
    printf("\n\n");
    return 0;
}

int array2D(){
    int a[5][3], i,j;
    for(i=0; i<5; i++){
        for(j=0; j<3; j++){
            printf("Enter the value of a[%d][%d] ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Array is ");
    for(i=0; i<5; i++){
        printf("\n");
        for(j=0; j<3; j++){
            printf("\t%d",a[i][j] );
        }
    }
    return 0;
}