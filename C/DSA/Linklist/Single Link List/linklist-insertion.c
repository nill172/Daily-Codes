#include<stdio.h>
#include<stdlib.h>
int n;
typedef struct node{
    int data;
    struct node *link;
}str;


str* linklistinsertion(str* h){
    str* ptr = (str*)malloc(sizeof(str));
    str* p = h;
    printf("Enter the element: ");
    scanf("%d",&ptr->data);
    /* //! Front element insertion
    ptr->link = p;
    return ptr;*/

    //! End element insertion

    if(p != NULL){
        while(p->link != NULL){
            p = p->link;
        }
        p->link = ptr;
        ptr->link = NULL;
    }else{
        p = ptr;
        ptr->link = NULL;
    }
    return h;
}

int show(str* h){
    if (h==NULL){
        printf("The list is empty.\n");
        return 0;
    }else{
        while(h != NULL){
            printf(" %d", h->data);
            h = h->link;
        }
        printf("\n");
    }
}

int main(){
    str* h = (str*)malloc(sizeof(str));
    h->data = 0;
    h->link = NULL;
    // str* p = h;
    // p = NULL;
    int oporation;
    while(1){
    printf("\n---Oporation---\n1. Display\n2. Insertion\n3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&oporation);
    switch(oporation){
        case 1:
        printf("\n---Display---\n");
        show(h);
        break;

        case 2:
        printf("\n---Insertion---\n");
        h = linklistinsertion(h);
        break;

        case 3:
        printf("\n---Oporation Completed---");
        return 1;
        break;

        default:
        printf("*Syntex Error*");
        break;
    }}
    
    
    
}