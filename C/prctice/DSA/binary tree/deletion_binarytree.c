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
void display(s* a){
    if(a != NULL){
        display(a->left);
        printf(" %d ",a->data);
        display(a->right);
        printf("|");
    }
}

s* delet(s* root, int n){
    s* a = root;
    s* b = NULL;
    if(a != NULL){
        if(n < a->data){
            a->left = delet(a->left, n);
        }else if(n > a->data){
            a->right = delet(a->right, n);
        }else if(n == a->data){
            if(a->left == NULL && a->right == NULL){
                return NULL;
            }else if(a->left == NULL){
                return a->right;
            }else if(a->right == NULL){
                return a->left;
            }else{
                b = a;
                a = a->left;
                while(a->right != NULL){
                    a = a->right;
                }
                b->data = a->data;
                b->left = delet(b->left, b->data);
            }
        }
    }else{
        printf("Value isn't found.\n");
    }
}

int main(){
    s* root = creat(10);
    s* a = creat(5);
    s* b = creat(15);
    s* a1 = creat(2);
    s* a2 = creat(7);
    s* b1 = creat(12);
    s* b2 = creat(17);

    s* a1a = creat(1);
    s* a1b = creat(3);
    s* a2a = creat(6);
    s* a2b = creat(9);
    s* b1a = creat(11);
    s* b1b = creat(13);
    s* b2a = creat(16);
    s* b2b = creat(19);

    root->left = a;
    root->right = b;
    a->left = a1;
    a->right = a2;
    a1->left = a1a;
    a1->right = a1b;
    a2->left = a2a;
    a2->right = a2b;
    b->left = b1;
    b->right = b2;
    b1->left = b1a;
    b1->right = b1b;
    b2->left = b2a;
    b2->right = b2b;

    display(root);
    printf("\n");

    root = delet(root, 7);
    display(root);
}