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

void inorder_predecessior_successor(str*);
int inorder_predecessior(str*, str*, int);
int inorder_successor(str*, str*, int);

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
	
/*         5
	      / \
	     4   10
	    /    /\
	   2    7  12
	  /\   /\   \
	 1 3  6  8   15 
*/
	inorder_predecessior_successor(a);
	
	return 0;
}

void inorder_predecessior_successor(str* a){
	printf("Enter node: ");
	int n;
	scanf("%d",&n);
	printf("The inorder predecessior of node %d is: %d.\n", n, inorder_predecessior(a, a, n));
	printf("The inorder successor of node %d is: %d.\n", n, inorder_successor(a, a, n));
}

int inorder_predecessior(str* a, str* pre, int n){
	str* root = a;
	if(a != NULL){
		if(a->data == n){
		//printf("match\n");
			if(a->left != NULL){
				a = a->left;
				while(a->right){
					a = a->right;
				}
				return a->data;
			}else{
				return pre->data;
			}	
		}else if(a->data > n){
		//printf("Left\n");
			pre = a;
			inorder_predecessior(a->left, pre, n);
		}else if(a->data < n){
		//printf("Right\n");
			pre = a;
			inorder_predecessior(a->right, pre, n);
		}
	}
}

int inorder_successor(str* a, str* sus, int n){
	if(a != NULL){
		if(a->data == n){
		//printf("match\n");
			if(a->right != NULL){
				a = a->right;
				while(a->left){
					a = a->left;
				}
				return a->data;
			}else{
				return sus->data;
			}
		}else if(a->data > n){
		//printf("Left\n");
			sus = a;
			inorder_successor(a->left, sus, n);
		}else if(a->data < n){
		//printf("Right\n");
			sus = a;
			inorder_successor(a->right, sus, n);
		}
	}
}












