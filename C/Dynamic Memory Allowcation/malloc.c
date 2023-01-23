#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, n = 3;
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));

    if ( ptr == NULL){
        printf("The memory can not be allowcated.");
        return 0;
    }

    printf("Enter the numbers \n");
    for(i=0; i<n; i++){
        scanf("%d", (ptr+i));
    }
    printf("The numbers are \n");
    for(i=0; i<n; i++){
        printf("%d ", *(ptr+i));
    }
    free(ptr);
    return 0;
}