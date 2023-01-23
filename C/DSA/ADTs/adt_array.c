#include<stdio.h>
#include<stdlib.h>
int i;

struct arr{
    int msize;
    int usize;
    int *ptr;
};

void creat(struct arr *a, int maximumsize, int usedsize){
    a->msize = maximumsize;
    a->usize = usedsize;
    a->ptr = (int*)malloc(a->msize * sizeof(int));

    for (i=0; i<a->usize; i++){
        printf("Enter the value of element no.%d: ",i+1);
        scanf("%d",&a->ptr[i]);
    }
}

void show (struct arr *b){
    printf("The array is: ");
    for (i=0; i<b->usize; i++){
        printf("%d ", b->ptr[i]);
    }
}

int main(){
    struct arr ar;
    int m = 10;
    int u = 5;
    creat(&ar, m, u);
    show(&ar);
    // for (i=0; i<u; i++){
    //     printf(" %d", ar.ptr[i]);
    // }
    return 0;
}