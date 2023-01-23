#include<stdio.h>
#include<stdlib.h>
typedef struct stack{
    int data;
    struct stack* next;
}s;
s* st = NULL;

s* peek(s* head){
    s* h = head;
    if(h == NULL){
        printf("\nThe stack is empty!\n");
        return 0;
    }
    int i = 1;
    while(h != NULL){
        printf("%d[%d]  ",h->data, i);
        h = h->next;
        i++;
    }
}

s* push(s* head){
    s* h = head;
    s* p = (s*)malloc(sizeof(s));
    printf("Enter the element: ");
    scanf("%d",&p->data);
    printf("\t%d is pushed into the stack.\n",p->data);
    p->next = h;
    st = p;
}

s* pop(s* head){
    s* h = head;
    if(h == NULL){
        printf("\nStack Underflow\n");
        return 0;
    }
    printf("\t%d is poped out from stack.\n",h->data);
    h = h->next;
    st = h;
}

s* top_bottom(s* head){
    s* h = head;
    printf("The top element fo the stack is %d.\n",h->data);
    while(h->next != NULL){
        h = h->next;
    }
    printf("The bottom element of the stack is %d.\n",h->data);
}

int main(){
    while(1){
        printf("\n---Stuck Oporation---\n1. Peek\n2. Push\n3. Pop\n4. View Top & Bottom\n5. Exit\nEnter the oporation: ");
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
            printf("\nOporation Completed!");
            return 0;

            default:
            printf("\nSyntex Error!");
            break;
        }
    }
}
