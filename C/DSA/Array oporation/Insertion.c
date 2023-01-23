//*! Inserion in loop

#include<stdio.h>

//! Traversal
void display(int arr[], int size)
{
    for (int i=0; i < size; i++){
        printf("\t%d",arr[i]);
    }
    printf("\n");

}

//! Insertion
int insertion(int arr[], int size, int capacity, int position, int element)
{
    if (position>= size){
        arr[position-1]=element;
    }else{
        for (int i = size-1; i >= position; i--){
            arr[i+1] = arr[i];
        }
        arr[position]= element;
        return 1;
    }
}

int main()
{
    int arr[10] = {10, 20, 30, 50};
    int capacity = 10;
    int size  = 4;
    printf("The predefined array list is: ");
    display(arr, size);

    //* Here we start insertion
    int element, position;

    while(capacity > size)
    {
        printf("\nEnter posistion(1-10) and the number ");
        scanf("%d %d", &position, &element);
        insertion(arr, size, capacity, position, element);
        size += 1;
        printf("\nInserstion successful!\n");
        printf("\nThe new array list is: ");
        display(arr, size);
    }

        return 0;
}