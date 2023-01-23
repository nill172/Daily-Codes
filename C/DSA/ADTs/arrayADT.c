#include<stdio.h>
#include<stdlib.h>
int i;

struct array{
    int total_size;
    int used_size;
    int* ptr;
}arr;

void creat(struct array *a, int tsize, int usize){
    //*! You can write any way you want
    // (*a).total_size = tsize

    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int*)malloc(tsize * sizeof(int));

    for (i=0; i<usize; i++){
        printf("Enter the elemen no.%d: ", i+1);
        scanf("%d", &(a->ptr)[i]);
    }
}

void show(struct array *a){
    printf("The array is: ");
    for (i=0; i<a->used_size; i++){
        printf("%d ", (a->ptr)[i]);
    }
}

int main(){
    int n, m;
    printf("Maximum size of the array: ");
    scanf("%d", &m);
    printf("The number of elemens going to input: ");
    scanf("%d",&n);
    creat(&arr, m, n);
    show(&arr);
    return 0;
}