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
		inorder(s->left);
		printf(" %d",s->data);
		inorder(s->right);
	}
}

void postorder(str* s){
	if(s != NULL){
		postorder(s->left);
		postorder(s->right);
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
	
	str* b = creatnode(4);
	a->left = b;
	str* c = creatnode(10);
	a->right = c;
	
	str* d = creatnode(2);
	b->left = d;
	
	str* f = creatnode(7);
	c->left = f;
	str* g = creatnode(12);
	c->right = g;
	
	str* h = creatnode(1);
	d->left = h;
	str* i = creatnode(3);
	d->right = i;
	
	str* j = creatnode(6);
	f->left = j;
	str* k = creatnode(8);
	f->right = k;
	
	str* l = creatnode(15);
	g->right = l;
	
	/*
	       5
	      / \
	     4   10
	    /    /\
	   2    7  12
	  /\   /\   \
	 1 3  6  8   15 
	  
	   
	*/
	printf("Preorder Traversal:  ");
	preorder(a);
	printf("\n");
	
	printf("Inorder Traversal:   ");
	inorder(a);
	printf("\n");
	
	printf("Postorder Traversal: ");
	postorder(a);
	printf("\n");
	
	return 0;
}