#include <stdio.h>
int main(){
    int n = 3;
    int* ptr;
    ptr = (int*) malloc(n *  sizeof(int));
    if (ptr == NULL){
        printf("The memory cannnot be allowcated.");
        return 0;
    }
    printf("The allowcated memory addresses are: \n");
    for (int i = 0; i < n; i++){
        printf("%d\n",*(ptr+1));
    }
    //! Now reallowcate some more memory
    //* Let's increase the memory from 3 to 5
    n = 5;
    ptr = realloc(ptr, n * sizeof(int));
    printf("The increased allowcated memory addresses are: \n");
    for (int i = 0; i < n; i++){
        printf("%d\n",*(ptr+1));
    }
    free(ptr);
    return 0;
}