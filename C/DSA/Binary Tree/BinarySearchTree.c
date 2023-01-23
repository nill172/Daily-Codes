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

int check(s* a){
    static s* prev = NULL;
    if(prev != NULL){
        printf("prev = %d\n",prev->data);
    }
    if(a != NULL){
        printf("\troot = %d\n",a->data);
        if(!check(a->left)){
            return 0;
        }
        if (prev != NULL){
            printf("%d %d\n",prev->data, a->data);
        }
        if(prev != NULL && a->data <= prev->data){
            return 0;
        }
        prev = a;
        return check(a->right);
    }else{
        return 1;
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
    printf("\n");
    if(check(root) == 1){
        printf("This is Binary Search Tree!");
    }else{
        printf("This isn't Binary Search Tree!");
    }
    // printf("%d",check(root));
}