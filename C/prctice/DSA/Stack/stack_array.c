#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    int size, top;
    int* a;
}s;

int peek(s* st){
    if(st->top == -1){
        printf("\nStack is empty!\n");
        return 0;
    }
    int i, n = st->top;
    for(i=n; i>=0; i--){
        printf("%d[%d]  ",st->a[i], (n-i+1));
    }
    printf("\n");
}

int push(s* st){
    if(st->top == (st->size - 1)){
        printf("\nStack Overflow\n");
        return 0;
    }
    ++st->top;
    printf("Enter the element: ");
    scanf("%d",&st->a[st->top]);
    printf("\t%d is pushed in stack.\n",st->a[st->top]);
    return 1;
}

int pop(s* st){
    if(st->top == -1){
        printf("\nStack Underflow\n");
        return 0;
    }
    printf("\t%d is poped out from the stack.\n", st->a[st->top]);
    --st->top;
    return 1;
}

int top_bottom(s* st){
    if(st->top == -1){
        printf("\nThe stuck is Empty!\n");
        return 0;
    }
    if(st->top == 0){
        printf("The top & bottom, both Element of the stuck is: %d.\n", st->a[0]);
        return -1;
    }
    printf("The top Element of the stuck is: %d.\n",st->a[st->top]);
    printf("The bottom Element of the stuck is: %d.\n", st->a[0]);
    return 1;
}

int main(){
    s* st = (s*)malloc(sizeof(s));
    st->top = -1;
    printf("Enter size of the stack: ");
    scanf("%d",&st->size);
    st->a = (int*)malloc(st->size * sizeof(int));
    while(1){
        printf("\n---Stack Oporation---\n1. Peek\n2. Push\n3. Pop\n4. View Top & Bottm\n5. Exit\nEnter the oporation: ");
        int o;
        scanf("%d",&o);
        switch(o){
            case 1:
            peek(st);
            break;

            case 2:
            push(st);
            break;

            case 3:
            pop(st);
            break;

            case 4:
            top_bottom(st);
            break;

            case 5:
            printf("\nOporation Completed!\n");
            return 0;

            default:
            printf("\nSyntex Error!\n");
            break;
        }
    }
}