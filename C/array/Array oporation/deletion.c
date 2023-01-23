#include<stdio.h>

void display(int arr[], int size){
    printf("Showing the array: ");
    for (int i=0; i < size; i++){
        printf(" %d",arr[i]);
    }
    printf("\n");
}

int deletion(int arr[], int size, int position){
    for (int i = position-1; i < size-1; i++){
        arr[i] = arr[i+1];
    }
    return 0;
}

int main(){
    int arr[10]={14,8,58,67,58};
    int size = 5;
    int capacity =10;

    display(arr, size);

    int position;
    printf("What positon element you want to remove: ");
    scanf("%d", &position);
    deletion(arr, size, position);
    size -=1;
    display(arr, size);
    return 0;

}