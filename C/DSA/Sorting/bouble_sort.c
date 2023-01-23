#include<stdio.h>
#include<stdlib.h>


void display(int *a, int n){
    int i;
    for (i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int sort(int *a, int n){
    while(n > 1){
        int i;
        for(i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                int k = a[i];
                a[i] = a[i+1];
                a[i+1] = k;
            }
        }
        n--;
    }
}

int main(){
    printf("Enter array size: ");
    int size;
    scanf("%d",&size);
    int* a = (int*)malloc(size* sizeof(int ));
    int i;
    for(i=0; i<size; i++){
        printf("Enter the value no.%d: ",i+1 );
        scanf("%d",&a[i]);
    }
    display(a, size);
    sort(a, size);
    display(a, size);
    return 0;
}
