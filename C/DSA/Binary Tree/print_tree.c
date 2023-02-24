//* Printing tree using nos recursiv way
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* left, *right;
}str;

typedef struct stack{
    struct node* s;
    struct stack* next;
}stc;

str* creatnode(int);
void inorder(str*);
void push(stc**, str*);
str* pop(stc** );

int main(){
    /*      5
           / \
          3   7
        / \    \
       2   4    9
    */
    str* root = creatnode(5);
    root->left = creatnode(3);
    root->right = creatnode(7);
    root->left->left = creatnode(2);
    root->left->right = creatnode(4);
    root->right->right = creatnode(9);

    inorder(root);
    return 0;
}

str* creatnode(int n){
    str* s = (str*)malloc(sizeof(str));
    s->data = n;
    s->left = s->right = NULL;
    return s;
}

void inorder(str* root){
    str* current = root;
    stc* s = NULL;
    int done = 0;
    while(done == 0){
        if(current != NULL){
            push(&s, current);
            current = current->left;
        }else{
            if(s != NULL){
                current = pop(&s);
                // if(current->right != NULL){
                //     push(&s, current);
                //     // current = current->right;
                // }
                printf("%d ",current->data);
                current = current->right;
            }else{
                done = 1;
            }
        }
    }
}

void push(stc** top, str* current){
    stc* new = (stc*)malloc(sizeof(stc));
    new->s = current;
    new->next = *top;
    *top = new;
}

str* pop(stc** top){
    stc* t;
    str* tmp;
    t = *top;
    tmp = t->s;
    *top = t->next;
    return tmp;
}