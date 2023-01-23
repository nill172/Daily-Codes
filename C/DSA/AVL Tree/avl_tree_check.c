#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data, hight;
    struct node *left, *right;
}str;

void display(str* a){
    if(a != NULL){
        display(a->left);
        printf(" %d(%d) ",a->data,a->hight);
        display(a->right);
        printf("|");
    }
    // printf("\n");
}

str* creat(int n){
    str* a = (str*)malloc(sizeof(str));
    a->data = n;
    a->hight = 1;
    a->left = a->right = NULL;
}

int gethight(str* a){
    if(a==NULL){
        return 0;
    }
    return a->hight;
}

int max(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

str* insirtion(str* a, int n){
    if(a == NULL){
        return creat(n);
    }
    if(a->data > n){
        a->left = insirtion(a->left, n);
    }else if(a->data < n){
        a->right = insirtion(a->right, n);
    }else{
        printf("The data is already in the tree.\n");
        return a;
    }
    a->hight = 1 + max(gethight(a->left), gethight(a->right));
}

int check(str* a){
    if(a==NULL){
        return 0;
    }
    return gethight(a->left) - gethight(a->right);
}

int main(){
    str* root = NULL;
    int oporation, n, h;
    while(1){
        printf("1. AVL Tree check\n2. Insirtion\n3. Exit\nEnter the choice: ");
        scanf("%d",&oporation);
        switch(oporation){
            case 1:
            h = check(root);
            if(h<=1){
                printf("The tree is balanced!\n");
            }else{
                printf("The tree is not balanced!\n");
            }
            break;

            case 2:
            printf("\nEnter the value: ");
            scanf("%d",&n);
            root = insirtion(root, n);
            display(root);
            printf("\n");
            break;

            case 3:
            return 0;

            default:
            printf("Syntex Error");
            break;
        }
    }
}