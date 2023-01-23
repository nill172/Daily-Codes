#include<stdio.h>
int i;

void show(int a[], int n){
    for (i=0; i<n; i++){
        printf("(%d) ==> %d\n",i+1, a[i]);
    }
}

void addition(int a[], int n){
    int x, y;
    printf("Enter the number: ");
    scanf("%d", &x);
    printf("Enter the position: ");
    scanf("%d", &y);
    for(i=n; i>=y-1; i--){
        a[i+1] = a[i];
    }
    a[y-1] = x;
}

void deletion(int a[], int n){
    int x, y, z;
    printf("What do you want delete by?\n1. Number\n2. Position\n");
    printf("Enter your choice: ");
    scanf("%d", &z);
    switch(z){
        case 1:
        printf("Enter the number: ");
        scanf("%d",&x);
        for (i=0; i<n; i++){
            while(a[i] == x){
                printf("\n%d", i+1);
                for (i; i<n; i++){
                    a[i] = a[i+1];
                }
            }
        }
        break;

        case 2:
        printf("Enter the position: ");
        scanf("%d", &y);
        for (i=y-1; i<n; i++){
            a[i] = a[i+1];
        }
        break;

        default:
        printf("Syntex Error");
        break;
    }
}

void replace(int a[], int n){
    int x, y;
    printf("Enter the position: ");
    scanf("%d", &y);
    printf("Enter the number: ");
    scanf("%d", &x);
    a[y-1] = x;
}

int oporation(int a[], int n){
    int choice;
    while(1){
        printf("\n-----Oporations-----\n1. Addition\n2. Deletion\n3. Replace\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("\n-----Addition-----\n");
            addition(a,n);
            ++n;
            break;

            case 2:
            printf("\n-----Deletion-----\n");
            deletion(a,n);
            --n;
            break;

            case 3:
            printf("\n-----Replace-----\n");
            replace(a, n);
            break;

            case 4:
            printf("\n-----Display-----\n");
            show(a, n);
            break;

            case 5:
            printf("-----Oporation Completed-----");
            return 0;
            break;
        }
    }
}

int main(){
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");
    for (i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    show(a, n);
    oporation(a,n);
}