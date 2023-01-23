#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	int data, hight;
	struct node *right, *left;
}str;

int nodecount = 0;
int* arr;

str* newnode(int n){
	str* s = (str*)malloc(sizeof(str));
	s->data = n;
	s->hight = 1;
	s->left = s->right = NULL;
	nodecount++;
	return s;
}

int max(int a, int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}

int hight(str* s) {
	if (s == NULL) {
		return 0;
	}else {
		return s->hight;
	}
}

str* addnode(str* s, int n){
	if(s == NULL){
		return newnode(n);
	}
	if(s->data > n){
		s->left = addnode(s->left, n);
	}else if(s->data < n){
		s->right = addnode(s->right, n);
	}else if(s->data == n){
		printf("The node is already exist.\n");
		return s;
	}
	s->hight = 1 + max(hight(s->left), hight(s->right));
}
int x = 1;
int inorder(str* s, int* arr){
	if(s != NULL){
		inorder(s->left, arr);
		int h = s->hight-1;
		printf(" %d[%d]", s->data, s->hight);
		*(arr + h*nodecount + x) = s->data;
		x++;
		inorder(s->right, arr);
	}
}

int main(){
	str *root = NULL;
	root = addnode(root,4);
	root = addnode(root,2);
	root = addnode(root,6);
	root = addnode(root,1);
	root = addnode(root,3);
	root = addnode(root,5);
	root = addnode(root,7);
	root = addnode(root,9);
	root = addnode(root,8);
	root = addnode(root,10);
	
	int i = nodecount;
	int j = root->hight;
	arr = (int*)malloc((i*j)*sizeof(int));
	
	for(i= root->hight -1 ; i >= 0; i--){
		for(j=1; j <= nodecount; j++){
			*(arr + i*nodecount + j) = 0;
		}
	}

	inorder(root, arr);
	printf("\n");

	// for(i= root->hight; i >= 0; i--){
	// 	for(j=1; j <= nodecount; j++){
	// 		// *(arr + i*nodecount + j);
	// 		printf(" %d", *(arr + i*nodecount + j));
	// 	}
	// 	printf("\n");
	// }

	for(i=root->hight-1; i >= 0; i--){
		for(j=1; j <= nodecount; j++){
			if(*(arr + i*nodecount + j) == 0){
				printf(" ");
				continue;
			}
			printf(" %d", *(arr + i*nodecount + j));
		}
		printf("\n");
	}

	printf("\nHello");
	// free(arr);

	return 0;
}
