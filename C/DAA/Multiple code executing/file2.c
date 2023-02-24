//!  Let's take it as oporation c file
//!  Where we create the oporation function
#include<stdio.h>
int x;
int input(){
	printf("Enter the value: ");
	scanf("%d",&x);
	return x;
}
int choice(){
	printf("Enter 0 for sum\nEnter 1 for multiply\n");
	scanf("%d",&x);
	return x;
}
int add(int a, int b){
	return a+b;
}
int multiply(int a, int b){
	return a*b;
}
