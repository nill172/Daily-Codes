#include<stdio.h>
void display(int a[], int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d " ,a[i]);
    }
    printf("\n");
}

void insirtion_sort(int a[], int n){
    int i;
    for(i=1; i<n; i++){
        int j;
        for(j=i-1; j >= 0; j--){
            if(a[j+1]<a[j]){
                int k = a[j+1];
                a[j+1] = a[j];
                a[j] = k;
            }
        }
    }
}

int main(){
    printf("Enter the size of array: ");
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0; i<n; i++){
        printf("Enter the element no.%d: ",i+1);
        scanf("%d",&a[i]);
    }
    display(a, n);
    insirtion_sort(a, n);
    display(a, n);
    return 0;

}