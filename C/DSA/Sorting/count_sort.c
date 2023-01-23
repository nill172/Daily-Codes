#include<stdio.h>
#include<stdlib.h>

void display(int* a, int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int findmax(int* a, int n){
    int max = a[0];
    int i;
    for(i=1; i<n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}

void countsort(int* a, int n){
    int max = findmax(a, n);
    int* count = (int*)malloc((max+1) * sizeof(int));
    int i, j=0;
    for(i=0; i<=max; i++){
        count[i] = 0; 
    }
    for(i=0; i<n; i++){
        count[a[i]] = count[a[i]] + 1;
    }
    // display(count, max+1);
    for(i=0; i<=max; i++){
        while(count[i] != 0){
            a[j] = i;
            --count[i];
            ++j;
        }
    }
}

int main(){
    printf("Enter the size of array: ");
    int n;
    scanf("%d",&n);
    int* a = (int*)malloc(n*sizeof(int));
    int i;
    for(i=0; i<n; i++){
        printf("Enter the value of element no.%d:  ",i+1);
        scanf("%d",&a[i]);
    }
    display(a, n);
    countsort(a, n);
    display(a, n);
    return 0;
}