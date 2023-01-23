#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    int top;
    char* a;
}str;

void display(char* exe){
    int i;
    for(i=0; exe[i] != '\0'; i++){
        printf("%c",exe[i]);
    }
}


void push_a(str* arr, char n){
    int i = ++arr->top;
    arr->a[i] = n;
    // printf("%c is pushed arr[%d]\n",n, i);
}

void pop(str* s, str* arr){
    char n = s->a[s->top];
    // printf("%c is poped s[%d]\n",n, s->top);
    s->top --;
    // printf("And s->top decresed to %d\n", s->top);
    push_a(arr, n);
}

int priority(char n){
    if(n == '+' || n == '-'){
        return 1;
    }
    if(n== '*' || n== '/'){
        return 2;
    }
    return 0;
}

void push_s(str* s, char n, str* arr){
    while(priority(n) <= priority(s->a[s->top])){
        pop(s, arr);
    }
    int i = ++s->top;
    s->a[i] = n;
    // printf("%c is pushed s[%d]\n",n, i);
}

void postfix(char* exe){
    str* s = (str*)malloc(sizeof(str));
    str* arr = (str*)malloc(sizeof(str));
    s->top = -1;
    arr->top = -1;
    s->a = (char*)malloc(50*sizeof(char));
    arr->a = (char*)malloc(100*sizeof(char));
    int i;
    for(i=0; exe[i] != '\0'; i++){
        printf("%c",exe[i]);
        if((exe[i] == '+') || (exe[i] == '-') || (exe[i] == '*') || (exe[i] == '/')){
            push_s(s, exe[i], arr);
        }else{
            push_a(arr, exe[i]);
        }
    }
    while(s->top != -1){
        pop(s, arr);
    }
    printf("\n");
    arr->a[arr->top + 1] = '\0';
    display(arr->a);
}

int main(){
    char* exe = "a+b/c+e/f*2*a*b";
    printf("\n");
    postfix(exe);
}