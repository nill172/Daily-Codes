#include<stdio.h>

void display(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int partition(int a[], int min, int max){
    int p = a[min];
    int i = min + 1;
    int j = max;
    int k;
    do{
        printf("p = %d, i = %d, j = %d  ",p,i,j);
        while(p>=a[i]){
            i++;
        }
        while(p<a[j]){
            j--;
        }
        // printf("i= %d, j= %d   ",i,j);
        if(i<j){
            k = a[i];
            a[i] = a[j];
            a[j] = k;
        }
    }while(i<j);
    printf("\n");
    k = a[min];
    a[min] = a[j];
    a[j] = k;
    return j;
}

void quick_sort(int a[], int min, int max){
    int p;
    if(min < max){
        p = partition(a, min, max);
        quick_sort(a, min, p-1);
        quick_sort(a, p+1, max);
    }
}

int main(){
    printf("Enter the size of array: ");
    int n;
    scanf("%d",&n);
    int a[n];
    // int a[7] = {3, 5, 7, 2, 6, 1, 4};
    int i;
    for(i=0; i<n; i++){
        printf("Enter the element no.%d: ",i+1);
        scanf("%d",&a[i]);
    }
    display(a, n);
    quick_sort(a, 0, n-1);
    display(a, n);
}