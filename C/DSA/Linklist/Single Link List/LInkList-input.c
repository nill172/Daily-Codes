#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}str;

int main(){
    int n, i, j, x;
    printf("Enter the number of elements in linklist: ");
    scanf("%d",&n);
    str* char a[]={'b', 'c', 'd'};
    
    for (i=0; i<4; i++){
        x = a[i];
        str* x = (str*)malloc(sizeof(str));
        printf("Enter the number: ");
        scanf("%d",&x->data);
        j = a[i+1];
        str* j = (str*)malloc(sizeof(str));
        x->link = j;
        j->link = NULL;

    }

    for (i=0; i<n; i++){
        a[i]=x;
        while(x->link != NULL){
        printf("The element: %d", x->data);
        j= a[i+1];
        x->link = j;
        }
    }
    

    return 0;
}