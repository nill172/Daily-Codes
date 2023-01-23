#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *left, *right;
}s;

void creatnode(s* a, int n){
    a->data = n;
    a->left = NULL;
    a->right = NULL;
}

void display(s* a){
    if(a != NULL){
        display(a->left);
        printf("%d ",a->data);
        display(a->right);
    }
}

s* searching(s* a, int n){
    if(a == NULL){
        return NULL;
    }
    if(a->data == n){
        return a;
    }else if(a->data > n){
        searching(a->left, n);
    }else{
        searching(a->right, n);
    }
}

int main(){
    s* root = (s*)malloc(sizeof(s));
    s* l = (s*)malloc(sizeof(s));
    s* r = (s*)malloc(sizeof(s));
    s* ll = (s*)malloc(sizeof(s));
    s* lr = (s*)malloc(sizeof(s));
    s* rl = (s*)malloc(sizeof(s));
    s* rr = (s*)malloc(sizeof(s));

    creatnode(root, 4);
    creatnode(l, 2);
    creatnode(r, 6);
    creatnode(ll, 1);
    creatnode(lr, 3);
    creatnode(rl, 5);
    creatnode(rr, 7);

    root->left = l;
    root->right = r;
    l->left = ll;
    l->right = lr;
    r->left = rl;
    r->right = rr;

    display(root);
    s* str = searching(root, 7);
    if(str != NULL){
        printf("\nFounded: %d",str->data);
    }else{
        printf("\nThe data isn't found.");
    }
}