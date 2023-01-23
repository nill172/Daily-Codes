#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *left, 
    struct node *right;
}s;

void display(s* a){
    if(a != NULL){
        display(a->left);
        printf("%d ",a->data);
        display(a->right);
    }
}

s* creatnode(int n){
    s* a = (s*)malloc(sizeof(s));
    a->data = n;
    a->left = NULL;
    a->right = NULL;
    return a;
}
int insirtion(s*a, int n){
    s* new = creatnode(n);
    if(a == NULL){
        a = new;
        return 1;
    }
    s* prev = NULL;
    while(a != NULL){
        prev = a;
        if(a->data == n){
            printf("Element is already in the list.");
            return 0;
        }else if(a->data > n){
            a = a->left;
        }else{
            a = a->right;
        }
    }
    
    if(prev->data > n){
        prev->left = new;
    }else{
        prev->right = new;
    }
}

int main(){
    s* root = (s*)malloc(sizeof(s));
    root = NULL;
    
    printf("%d ",root->data);
    insirtion(root, 5);
    printf("%d ",root->left->data);
    // display(r);

}