#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
    struct node* prev;

}str;

void show(str* p){
    printf("\n---Display---\n");
    int i = 1;
    while(p->next != NULL){
        printf("The element no.%d: %d\n", i, p->data);
        p = p->next;
        i++;
    }
    printf("The element no.%d: %d\n", i, p->data);
    
    printf("\n---Display In Reverse---\n");
    str* ptr = p;
    while(ptr->prev != NULL){
        printf("The element no.%d: %d\n",i, ptr->data);
        ptr = ptr->prev;
        i--;
    }
    printf("The element no.%d: %d\n",i, ptr->data);
}

str* insirtion(str* h){
    str* p = h;
    str* ptr = (str*)malloc(sizeof(str));
    printf("Enter the element: ");
    scanf("%d",&ptr->data);
    
    //! Insirtion to the front
//     p->prev = ptr;
//     ptr->next = p;
//     ptr->prev = NULL;
//     return ptr;

    //! Insirtion at the end
    while(p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->prev = p;
    ptr->next = NULL;
    return h;
}

str* insirtion_index(str* h){
    str* p = h;
    str* ptr = (str*)malloc(sizeof(str));
    int n, i = 1;
    printf("Enter the position: ");
    scanf("%d",&n);
    printf("Enter the element: ");
    scanf("%d",&ptr->data);
    while(i<n-1){
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->prev = p;

    p = ptr->next;
    p->prev = ptr;
    return h;
}

int main() {
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

    h->next = h1;
    h1->next = h2;
    h2->next = h3;
    h3->next = h4;
    h4->next = NULL;

    h->prev = NULL;
    h1->prev = h;
    h2->prev = h1;
    h3->prev = h2;
    h4->prev = h3;

    show(h);
    // show_rev(h);
    // h = insirtion(h);
    h = insirtion_index(h);
    show(h);

    return 0;
}