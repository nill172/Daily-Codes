#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
}str;

void showlinklist(str* ptr){
    while(ptr != NULL){
        printf("The element: %d\n", ptr->data);
        ptr = ptr->link;
    }
}

int main(){
    // typedef str* stp;
    // spt a, b, c, d, e;

    //! Memory allowcation
    str* a = (str*)malloc(sizeof(str));
    str* b = (str*)malloc(sizeof(str));
    str* c = (str*)malloc(sizeof(str));
    str* d = (str*)malloc(sizeof(str));
    str* e = (str*)malloc(sizeof(str));

    a->data = 10;
    a->link = b;

    b->data = 23;
    b->link = c;

    c->data = 25;
    c->link = d;

    d->data = 36;
    d->link = e;

    e->data = 40;
    e->link = NULL;

    showlinklist(a);

    return 0;
}