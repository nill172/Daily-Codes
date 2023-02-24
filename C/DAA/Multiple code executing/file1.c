#include<stdio.h>

extern int add(int, int);  //* by using the extern we taking that function from externaal file
int multiply(int, int);
int choice();
int input();

int main(){
	int a = input();
	int b = input();
	int(*f)(int, int);
	int x = choice();
	f = x == 0 ? add : multiply;

	printf("The %s of %d and %d is %d\n",x==0?"Addition":"Multiplication", a, b, f(a,b));

	// printf("The sum: %d\n", add(5, 6));
	// printf("The multiply: %d\n", multiply(5, 6));
}
