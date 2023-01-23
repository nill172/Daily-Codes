#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *left, *right;
}s;

void display(s* a){
    if(a != NULL){
        display(a->left);
        printf(" %d ",a->data);
        display(a->right);
        printf("|");
    }
}

s* creatnode(int n){
    s* a = (s*)malloc(sizeof(s));
    a->data = n;
    a->left = a->right = NULL;
}

s* insirt(s* root, int n){
    s* a = root;
    if(a == NULL){
        a = creatnode(n);
        return a;
    }
    if(a->data > n){
        a->left = insirt(a->left, n);
    }else if(a->data < n){
        a->right = insirt(a->right, n);
    }else{
        printf("\nThe number is already in the binary tree.\n");
        return a;
    }
}

s* delet(s* root, int n){
    s* a = root;
    s* b = NULL;
    if(a == NULL){
        printf("\nThe number isn't in the binary tree.\n");
        return a;
    }
    if( a->data > n){
        a->left = delet(a->left, n);
    }else if( a->data < n){
        a->right = delet(a->right, n);
    }else if(a->data == n){
        if(a->left == NULL){
            return a->right;
        }else if(a->right == NULL){
            return a->left;
        }else{
            b = a->left;
            while(b->right != NULL){
                b = b->right;
            }
            a->data = b->data;
            a->left = delet(a->left, b->data);
        }
    }
}

int main(){
    s* root = NULL;
    int o, n;
    while(1){
        printf("\nOporations on Binary Tree\n1. Display\n2. Insirt\n3. Delet\n4. Exit\n");
        scanf("%d",&o);
        switch(o){
            case 1:
            if(root==NULL){
                printf("\nThe binary tree is empty!\n");
                break;
            }
            display(root);
            break;

            case 2:
            printf("\nEnter the number for insirt: ");
            scanf("%d",&n);
            root = insirt(root, n);
            break;

            case 3:
            printf("\nEnter the number for delet: ");
            scanf("%d",&n);
            root = delet(root, n);
            break;

            case 4:
            printf("\nExit!\n");
            return 0;

            default:
            printf("\nSyntex error!\n");
            break;
        }
    }
}