#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* left;
	struct node* right;
}str;

str* creatnode(int data){
	str* s = (str*)malloc(sizeof(str));
	s->data = data;
	s->left = NULL;
	s->right = NULL;
	return s;
}

int count = 0;

void leafs(str* s){
	if(s != NULL){
		leafs(s->left);
		leafs(s->right);
		if(s->left == NULL && s->right == NULL){
			printf(" %d",s->data);
			count++;
		}
	}
	
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
	
	printf("The leaf notes are: ");
	leafs(a);
	printf("\n");
	printf("The total leaf notes = %d",count);
	printf("\n");
	
	return 0;
}
