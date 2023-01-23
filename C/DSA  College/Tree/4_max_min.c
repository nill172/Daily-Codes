#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
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

int max(str*);
int min(str*);

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
	printf("The maximum node is: %d\n",max(a));
	printf("The minimum node is: %d\n", min(a));
	
	return 0;
}

int max(str* a){
	int M, lM, rM;
	if(a != NULL){
		M = a->data;
		lM = max(a->left);
		rM = max(a->right);
		if( lM > M){
			M = lM;
		}
		if( rM > M ){
			M = rM;
		}
		return M;
	}else{
		return INT_MIN;
	}
}

int min(str* a){
	int m, rm, lm;
	if( a != NULL){
		m = a->data;
		lm = min(a->left);
		rm = min(a->right);
		if( lm < m){
			m = lm;
		}
		if(rm < m){
			m = rm;
		}
		return m;
	}else{
		return INT_MAX;
	}
}

























