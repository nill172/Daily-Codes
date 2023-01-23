#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data, level;
	struct node *right, *left;
}str;

void inorder(str*);
str* newnode(int);
str* insirtnode(str*, int);

int main(){
	str* root = NULL;
	root = insirtnode(root, 5);
	root = insirtnode(root, 3);
	root = insirtnode(root, 7);
	root = insirtnode(root, 2);
	root = insirtnode(root, 4);
	root = insirtnode(root, 6);
	root = insirtnode(root, 9);
	root = insirtnode(root, 1);
	root = insirtnode(root, 8);
	root = insirtnode(root, 10);
	
	
	inorder(root);
	printf("\n");
	return 0;
}

str* newnode(int n){
	str* tmp = (str*)malloc(sizeof(str));
	tmp->data = n;
	tmp->level = 1;
	tmp->right = tmp->left = NULL;
	return tmp;
}

str* insirtnode(str* root, int n){
	if(root == NULL){
		return newnode(n);
	}
	if(root->data > n){
		root->left = insirtnode(root->left, n);
	}else if(root->data < n){
		root->right = insirtnode(root->right, n);
	}else{
		printf("The node is already in the tree.\n");
		return root;
	}
}

void inorder(str* root){
	if(root != NULL){
		inorder(root->left);
		printf(" %d", root->data);
		inorder(root->right);
	}
}























