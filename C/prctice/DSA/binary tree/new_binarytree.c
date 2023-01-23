#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* left;
	struct node* right;
}str;

void preorder(str* s){
	if(s != NULL){
		printf(" %d",s->data);
		preorder(s->left);
		preorder(s->right);
	}
}

void inorder(str* s){
	if(s != NULL){
		preorder(s->left);
		printf(" %d",s->data);
		preorder(s->right);
	}
}

void postorder(str* s){
	if(s != NULL){
		preorder(s->left);
		preorder(s->right);
		printf(" %d",s->data);
	}
}

str* creatnode(int data){
	str* s = (str*)malloc(sizeof(str));
	s->data = data;
	s->left = NULL;
	s->right = NULL;
	return s;
}

int main(){
	str* a = creatnode(5);
	str* b = creatnode(3);
	str* c = creatnode(7);
	str* d = creatnode(2);
	str* e = creatnode(4);
	str* f = creatnode(10);
	
	a->left = b;
	a->right = c;
	b->left = d;
	b->right = e;
	c->right = f;
	/*
	      5
	     / \
	    3   7
	   / \   \
	  2   4   10
	   
	*/
	
	preorder(a);
	printf("\n");
	inorder(a);
	printf("\n");
	postorder(a);
	printf("\n");
	
	return 0;
}