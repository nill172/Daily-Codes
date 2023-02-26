#include<stdio.h>
#include<stdlib.h>
int main(){
    int n = 5;
    int* ptr;
    ptr = (int*) malloc(n * sizeof(int));

    if ( ptr == NULL){
        printf("The memory can not be allowcated.");
        return 0;
    }

    printf("Enter the numbers \n");
    for (int i = 0; i < n; i++){
        scanf("%d\n", ptr + 1);
    }
    printf("The numbers are \n");
    for (int i = 0; i < n; i++){
        printf("%d \n", *(ptr+1));
    }
    free(ptr);
    return 0;
}