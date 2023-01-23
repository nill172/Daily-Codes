#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    int size;
    int top;
    int* array;
}str;

int isempty(str* s){
    if(s->top == - 1){
        printf("The stack is empty.\n");
        return 1;
    }else{
        return 0;
    }
}

int isfull(str* s){
    if(s->top == s->size-1){
        printf("The stack is full\n");
        return 1;
    }else{
        return 0;
    }
}

void push(str* s){
    if(isfull(s)){
        printf("Stack overflow.\n");
    }else{
        printf("Enter the element: ");
        int n;
        scanf("%d",&n);
        s->top++;
        s->array[s->top] = n;
    }
}

void pop(str* s){
    if(isempty(s)){
        printf("Stack underflow.\n");
    }else{
        printf("The element %d is poped out.",s->array[s->top]);
        s->top --;
    }
}

int peek(str* s){
    if(s->top == -1){
        printf("Stack is empty.\n");
        return 0;
    }
    int i, index;
    for (i=0; i<= s->top; i++){
        index = s->top - i;
        printf("The of element of positio %d => %d\n", i+1, s->array[index]);
    }
}

int stack_top_bottom(str* s){
    if(s->top == -1){
        printf("Stack is empty.\n");
        return 0;
    }
    printf("The top element of the stuck is : %d\n", s->array[s->top]);
    printf("The bottom element of the stuck is : %d\n", s->array[0]);
}

int main(){
    str* s = (str*)malloc(sizeof(str));
    s->size = 10;
    s->top = -1;
    s->array = (int*)malloc(s->size*sizeof(int));

    while(1){
        printf("\n---Oporation---\n1. Push\n2. Pop\n3. Peek\n4. Stack top & bottom\n5. Exit\n");
        int op;
        scanf("%d",&op);
        switch(op){
            case 1:
            push(s);
            break;

            case 2:
            pop(s);
            break;

            case 3:
            peek(s);
            break;

            case 4:
            stack_top_bottom(s);
            break;

            case 5:
            return 0;

            default:
            printf("Syntex Error");
            break;
        }
    }
}