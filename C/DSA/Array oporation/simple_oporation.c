#include<stdio.h>
int i;

void inputvalue(int a[], int n){
    for (i=0; i<n; i++){
        printf("Enter the element no.%d: ", i+1);
        scanf("%d", &a[i]);
    }
}

void show(int a[], int n){
    printf("The array: ");
    for (i=0; i<n; i++){
        printf(" %d", a[i]);
    }
    printf("\n");
}

void adition(int a[], int n){
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    a[n]=x;
}

void deletion(int a[], int n){
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    for(i=0; i<n; i++){
        if(a[i]==x){
            printf("\n%d",i);
            a[i]=a[n-1];
        }
    }
}

int  oporation(int a[], int n){
    int condition;
    
    while (1)
    {
        printf("\nEnter 1 for aditon.\nEnter 2 for deletion.\nEnter 3 for display.\nEnter 4 for exit.\n");
        printf("Enter your choice: ");
        scanf("%d",&condition);

        switch (condition)
        {
        case 1:
        {
            adition(a, n);
            ++n;
            break;
        }

        case 2:
        {
            deletion(a, n);
            --n;
            break;
        }

        case 3:
        {
            show(a, n);
            break;
        }

        case 4:
        {
            printf("---------Oporation Completed---------");
            return 0;
            break;
        }
        default:
        {
            printf("Syntex error");
        }
        }
    }
}

int main(){
    int n, a[5];
    printf("Numbers of elements in the array: ");
    scanf("%d", &n);
    inputvalue(a, n);
    show(a, n);
    oporation(a, n);
    return 0;
}