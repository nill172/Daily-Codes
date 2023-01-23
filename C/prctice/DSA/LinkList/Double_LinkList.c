#include<stdio.h>
#include<stdlib.h>
typedef struct link{
    int data;
    struct link *prev, *next;
}s;
int c = 0;

int display(s* head){
    // printf("\nSize = %d\n",c);
    s* h = head;
    if(h == NULL){
        printf("The List is empty!\n");
        c = 0;
        return 0;
    }
    int i = 1;
    while(h->next != NULL){
        printf("%d[%d]  ", h->data, i);
        i++;
        h = h->next;
    }
    printf("%d[%d]  ", h->data, i);
    printf("\n");
    while(h != NULL){
        printf("%d[%d]  ", h->data, i);
        i--;
        h = h->prev;
    }
}

s* insirtion(s* head){
    s* h = head;
    s* p = (s*)malloc(sizeof(s));
    printf("Enter the element: ");
    scanf("%d",&p->data);
    if(h == NULL){
        p->prev = NULL;
        p->next = NULL;
        c = 1;
        return p;
    }
    while(1){
        printf("Enter the position: ");
        int n, i;
        scanf("%d",&n);
        while(n<1 || n > c+1){
            printf("\nInvalid Position!\n");
            break;
        }
        while(n==1){
            p->prev = NULL;
            p->next = h;
            h->prev = p;
            ++c;
            return p;
        }
        while(n == c+1){
            while(h->next != NULL){
                h = h->next;
            }
            h->next = p;
            p->prev = h;
            p->next = NULL;
            ++c;
            return head;
        }
        while(n>1 && n<c+1){
            for(i=1; i<n-1; i++){
                h = h->next;
            }
            p->prev = h;
            p->next = h->next;
            h->next = p;
            h = p->next;
            h->prev = p;
            ++c;
            return head;
        }
    }
}

s* deletion(s* head){
    s* h = head;
    if (h == NULL){
        printf("\nThe list is empty. Deletion cann't be performed.\n");
        c = 0;
        return NULL;
    }
    if(h->next == NULL && h->prev == NULL){
        printf("%d is removed.",h->data);
        c = 0;
        return NULL;
    }
    while(1){
        printf("Enter the position: ");
        int n, i;
        scanf("%d",&n);
        while(n<1 || n>c){
            printf("\nInvalid Position!\n");
            break;
        }
        while(n==1){
            printf("%d is removed.",h->data);
            h = h->next;
            h->prev = NULL;
            --c;
            return h;
        }
        while(n==c){
            for(i=1; i < n-1; i++){
                h = h->next;
            }
            s* p = h->next;
            printf("%d is removed.",p->data);
            h->next = NULL;
            --c;
            return head;
        }
        while(n>1 && n<c){
            for(i=1; i<n-1; i++){
                h = h->next;
            }
            s* p;
            p = h->next;
            printf("%d is removed.",p->data);
            p = p->next;
            h->next = p;
            p->prev = h;
            --c;
            return head;
        }
    }
}

s* replace(s* head){
    s* h = head;
    printf("Enter the position: ");
    int n, i;
    scanf("%d",&n);
    if(n<1 && n>c){
        printf("\nInvalid Position!\n");
        return head;
    }
    for(i=1; i<n; i++){
        h = h->next;
    }
    printf("Enter the element: ");
    scanf("%d",&h->data);
    return head;
}

int main(){
    s* head = NULL;
    while(1){
        printf("\n\n---Oporations---\n1. Display\n2. Insirtion\n3. Deletion\n4. Replace\n5. Exit\nEnter the oporation: ");
        int o;
        scanf("%d",&o);
        switch(o){
            case 1:
            display(head);
            break;

            case 2:
            head = insirtion(head);
            break;

            case 3:
            head = deletion(head);
            break;

            case 4:
            head = replace(head);
            break;

            case 5:
            printf("\nOporation Completed!\n");
            return 0;
            break;

            default:
            printf("\nSyntex Error!\n");
            break;
        }
    }
}