#include<stdio.h>
#include<stdlib.h>
typedef struct queue{
    int data;
    struct queue *next, *prev;
}s;
s* head = NULL;
s* rear = NULL;
int display(s* h, s* r){
    if(h == NULL){
        printf("\nThe Queue is empty.\n");
        return 0;
    }
    s* p = h;
    int i = 1;
    while(p != NULL){
        printf("%d[%d]  ",p->data,i);
        p = p->prev;
        i++;
    }
}

s* enqueue(s* h, s* r){
    s* p = (s*)malloc(sizeof(s));
    printf("Enter the value: ");
    scanf("%d",&p->data);
    p->prev = NULL;
    if(h == NULL && r == NULL){
        p->next = NULL;
        head = p;
        rear = p;
        return 0;
    }
    p->next = r;
    r->prev = p;
    // r = p;
    rear = p;
}

s* dequeue(s* h, s* r){
    if(h == NULL){
        printf("\nThe Queue is empty.\n");
        return NULL;
    }
    printf("\t%d is completed from queue list.\n",h->data);
    if(h == r){
        head = NULL;
        rear = NULL;
        return 0;
    }
    h = h->prev;
    h->next = NULL;
    head = h;
}

int main(){
    while(1){
        printf("\n---Queue Oporation---\n1. Display\n2. Enqueue\n3. Dequeue\n4. Exit\n");
        printf("Enter the oporation: ");
        int o;
        scanf("%d",&o);
        switch(o){
            case 1:
            display(head, rear);
            break;

            case 2:
            enqueue(head, rear);
            break;

            case 3:
            dequeue(head, rear);
            break;

            case 4:
            printf("\nOporation Completed!\n");
            return 0;

            default:
            printf("\nSyntex Error!\n");
            break;
        }
    }
}