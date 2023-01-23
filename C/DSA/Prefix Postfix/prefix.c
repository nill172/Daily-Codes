#include<stdio.h>
#include<stdlib.h>
typedef struct array{
    int top, rear;
    char* a;
}str;

void display(char* a, int n){
    int i;
    for (i=n; a[i] != '\0'; i++){
        printf("%c",a[i]);
    }
    printf("\n");
}

void pop(str* stack, str* exe){
    exe->top --;
    char n = exe->a[exe->top] = stack->a[stack->rear];
    printf("%c is poped from stack[%d] and pushed exe[%d]\n",n,stack->rear, exe->top);
    stack->rear --;
}

int priority(char n){
    // printf("n= %c\n",n);
    if((n == '+') || (n == '-')){
        return 1;
    }else if((n == '*') || (n == '/')){
        return 2;
    }else{
        return 0;
    }
}

void push(str* stack, str* exe, char n){
    if((n=='+') || (n=='-') || (n=='*') || (n=='/')){
        int i = ++stack->rear;
        stack->a[i] = n;
        if(i != 0){
            if(priority(n) <= priority(stack->a[i-1])){
                int j = --exe->top;
                exe->a[j] = n;
            }else{
                int k = ++exe->rear;
                exe->a[k] = exe->a[k-1];
                exe->a[k-1] = n;
            }
        }else{
            int k = ++exe->rear;
            exe->a[k] = exe->a[k-1];
            exe->a[k-1] = n;
        }
    }else{
        exe->rear ++;
        exe->a[exe->rear] = n;
    }
}

void prefix(char* arr){
    str* stack = (str*)malloc(sizeof(str));
    str* exe = (str*)malloc(sizeof(str));
    stack->top = 0;
    exe->top =  0;
    stack->rear = -1;
    exe->rear =  -1;
    stack->a = (char*)malloc(20*sizeof(char));
    exe->a = (char*)malloc(100*sizeof(char));
    int i;
    for(i=0; arr[i] != '\0'; i++){
        printf("%c",arr[i]);
        push(stack, exe, arr[i]);
    }
    printf("\n");
    exe->a[exe->rear + 1] = '\0';
    display(exe->a, exe->top);
}

int main(){
    char* arr = "a*b+c/d+5*2*4-3+7";
    prefix(arr);
}