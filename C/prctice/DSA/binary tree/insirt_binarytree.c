#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *left, *right;
}s;

s* creat(int n){
    s* a = (s*)malloc(sizeof(s));
    a->data = n;
    a->left = a->right = NULL;
}

s* insirt(s* root, int n){
    if(root== NULL){
        s* a = creat(n);
        return a;
    }
    if(n < root->data){
        root->left = insirt(root->left, n);
    }else if(n > root->data){
        root->right = insirt(root->right, n);
    }else if(n == root->data){
        printf("Data is already exist.\n");
        return root;
    }
}

void display(s* root){
    if(root != NULL){
        display(root->left);
        printf(" %d ",root->data);
        display(root->right);
        printf("|");
    }
}

int main(){
    s* root = NULL;
    int o, n;
    while(1){
        printf("\n1. Display\n2. insirt\n3. Exit\nEnter the oporation: ");
        scanf("%d",&o);
        switch(o){
            case 1:
            if(root == NULL){
                printf("The binary tree has no value.\n");
                break;
            }
            display(root);
            break;

            case 2:
            printf("Enter the value: ");
            scanf("%d",&n);
            root = insirt(root, n);
            break;

            case 3:
            return 0;

            default:
            printf("Syntex error!\n");
            break;
        }
    }

}