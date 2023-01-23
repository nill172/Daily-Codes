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

int c;
void search(str*);
void find(str*, int);

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
	search(a);
	
	return 0;
}

void search(str* a){
	while(1){
		printf("Enter the node you want search: ");
		int n;
		c = 0;
		scanf("%d",&n);
		find(a, n);
		if(c == 0){
			printf("The node isn't founded!\n");
		}
	}
}

void find(str* a, int n){
	if(a != NULL){
		
		if(a->data == n){
			printf("The node is founded!\n");
			c++;
		}else{
			find(a->left, n);
			find(a->right, n);
		}
	}
}



