#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* link;
}str;

void show(str* h){
    str* p = h;
    int i=1;
    printf("\n---Display---\n");
    do{
        printf("The elment no.%d: %d\n", i, p->data);
        p = p->link;
        i++;
    }while(p != h);
}

str* insirtionindex(str* h){
    str* p = h;
    str* ptr = (str*)malloc(sizeof(str));
    printf("\nEnter the element: ");
    scanf("%d",&ptr->data);
    printf("\nEnter the position: ");
    int i = 1, n;
    scanf("%d", &n);
    while(i<n-1){
        p = p->link;
        i++;
    }
    printf("i = %d",i);
    ptr->link = p->link;
    p->link = ptr;
    return h;
}

str* insirtion(str* h){
    str* p = h;
    str* ptr = (str*)malloc(sizeof(str));
    printf("Enter the element: ");
    scanf("%d",&ptr->data);

    while(p->link != h){
        p = p->link; 
    }
    p->link = ptr;
    ptr->link = h;
    //! Insirtion to the head
    // return ptr;
    //! Insirtion at the end
    return h;


}

int main(){
    str* h = (str*)malloc(sizeof(str));
    str* h1 = (str*)malloc(sizeof(str));
    str* h2 = (str*)malloc(sizeof(str));
    str* h3 = (str*)malloc(sizeof(str));
    str* h4 = (str*)malloc(sizeof(str));

    h->data = 0;
    h1->data = 1;
    h2->data = 2;
    h3->data = 3;
    h4->data = 4;

    h->link = h1;
    h1->link = h2;
    h2->link = h3;
    h3->link = h4;
    h4->link = h;

    show(h);
    // h = insirtion(h);
    // show(h);
    h = insirtionindex(h);
    show(h);
    return 0;
}