#include<stdio.h>

int array1D();
int array2D();

int main(){
    printf("\n");
    array1D();
    printf("\n");
    array2D();
    printf("\n");
    return 0;
}

int array1D(){
    int marks[3] = {2,63,23};
    /*Or you can write it as
    int marks[3];
    marks[0]=2;
    marks[1]=63;
    marks[2]=23;
    */
    
    for(int i=0; i<3; i++){
        printf("\t%d",marks[i]);
    }
    return 0;
}
int array2D(){
    int a[2][5] ={{6,3,2,6,2},{2,56,63,20,79}};
    for(int i=0; i<2; i++){
        printf("\n");
        for(int j=0; j<5; j++){
            printf("\t%d",a[i][j]);
        }
    }
    return 0;
}

