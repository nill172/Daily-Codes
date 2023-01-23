#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *left, *right;
}s;

s* creatnode(int n){
    s* a = (s*)malloc(sizeof(s));
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

int insirtion(s* a, int n){
    s* prev = NULL;
    while(a != NULL){
        prev = a;
        if(a->data == n){
            printf("\nThe data is already exist in binary tree.");
            return 0;
        }else if(a->data > n){
            a = a->left;
        }else{
            a = a->right;
        }
    }
    s* new = creatnode(n);
    if(prev->data > n){
        prev->left = new;
    }else{
        prev->right = new;
    }
}

int main(){
    int o, n;
    printf("The Binary tree is empty now!\nEnter the 1st element of the Binary Tree: ");
    scanf("%d", &n);
    s* root = creatnode(n);
    while(1){
        printf("\n---Oporation---\n1. Insirtion\n2. Display\n3. Exit\nEnter the oporation: ");
        scanf("%d",&o);
        switch(o){
            case 1:
            printf("\nEnter the value: ");
            scanf("%d",&n);
            insirtion(root, n);
            break;

            case 2:
            if(root == NULL){
                printf("\nThe Binary Tree is empty.");
            }
            display(root);
            break;

            case 3:
            return 0;

            default:
            printf("\nSyntex error!\n");
            break;
        }
    }
}