#include<stdio.h>

void display(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void selection_sort(int a[], int n){
    int i;
    for(i=0; i<n-1; i++){
        int m = i;
        int j;
        for(j=i+1; j<n; j++){
            // printf("%d, %d  ",a[m], a[j]);
            if(a[m] > a[j]){
                m = j;
            }
            // display(a, n);
        }
        int k = a[i];
        a[i] = a[m];
        a[m] = k;
    }
}

int main(){
    printf("Enter the size of array: ");
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0; i<n; i++){
        printf("Enter the element no.%d:  ",i+1);
        scanf("%d",&a[i]);
    }
    display(a, n);
    selection_sort(a, n);
    // display(a, n);
    return 0;
}