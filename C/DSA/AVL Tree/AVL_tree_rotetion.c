#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data, hight;
    struct node *left, *right;
}str;

void display(str* a){
    if(a!=NULL){
        display(a->left);
        printf(" %d(%d) ",a->data, a->hight);
        display(a->right);
        printf("|");
    }
}

str* creat(int n){
    str* a = (str*)malloc(sizeof(str));
    a->data = n;
    a->hight = 1;
    a->left = a->right = NULL;
}

int max(int i, int j){
    if(i>j){
        return i;
    }else{
        return j;
    }
}

int geth(str* a){
    if(a==NULL){
        return 0;
    }
    return a->hight;
}

int balancefactor(str* a){
    if(a==NULL){
        return 0;
    }
    return geth(a->right) - geth(a->left); 
}

str* right_rotate(str* a){
    str* b = a->left;
    str* c = b->right;
    b->right = a;
    a->left = c;
    a->hight = 1+ max(geth(a->left), geth(a->right));
    b->hight = 1+ max(geth(b->left), geth(b->right));
    return b;
}

str* left_rotate(str* a){
    str* b = a->right;
    str* c = b->left;
    b->left = a;
    a->right = c;
    a->hight = 1+ max(geth(a->left), geth(a->right));
    b->hight = 1+ max(geth(b->left), geth(b->right));
    return b;
}

str* insirtion(str* a, int n){
    if(a==NULL){
        return creat(n);
    }
    if(a->data > n){
        a->left = insirtion(a->left, n);
    }else if(a->data < n){
        a->right = insirtion(a->right, n);
    }else if(a->data == n){
        printf("The value is already in the tree.\n");
    }
    a->hight = 1 + max(geth(a->left), geth(a->right));
    int bf = balancefactor(a);
    if(bf<-1 && a->left->data > n){
        return right_rotate(a);
    }else if(bf<-1 && a->left->data < n){
        a->left = left_rotate(a->left);
        return right_rotate(a);
    }else if(bf>1 && a->right->data < n){
        return left_rotate(a);
    }else if(bf>1 && a->right->data > n){
        a->right = right_rotate(a->right);
        return left_rotate(a);
    }
    return a;
}

str* deletion(str* a, int n){
    str* b = NULL;
    if(a == NULL){
        printf("The value wasn't founded.\n");
    }
    if(a->data > n){
        a->left = deletion(a->left, n);
    }else if(a->data < n){
        a->right = deletion(a->right, n);
    }else if(a->data == n){
        if(a->left==NULL){
            return a->right;
        }else if(a->right ==NULL){
            return a->left;
        }else{
            b = a->left;
            while(b->right != NULL){
                b = b->right;
            }
            a->data = b->data;
            a->left = deletion(a->left, b->data);
        }
    }
    a->hight = 1 + max(geth(a->left), geth(a->right));
    int bf = balancefactor(a);
    if(bf<-1){
        if(a->left->left == NULL){
            a->left = left_rotate(a->left);
        }
        return right_rotate(a);
    }else if(bf > 1){
        if(a->right->right == NULL){
            a->right = right_rotate(a->right);
        }
        return left_rotate(a);
    }
    return a;
}

int main(){
    str* root = NULL;
    int oporation, n;
    while(1){
        printf("\n---Oporations---\n1. Insirtion\n2. Deletion\n3. Exit\nEnter your choice: ");
        scanf("%d",&oporation);
        switch(oporation){
            case 1:
            printf("Enter the value for insirtion: ");
            scanf("%d",&n);
            root = insirtion(root,n);
            break;
            case 2:
            printf("Enter the value for deletion: ");
            scanf("%d",&n);
            root = deletion(root,n);
            break;
            case 3:
            return 0;
            default:
            break;
        }
        display(root);
    }
}