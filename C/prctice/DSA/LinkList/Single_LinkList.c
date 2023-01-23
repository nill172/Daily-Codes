#include<stdio.h>
#include<stdlib.h>
typedef struct link{
    int data;
    struct link* l;
}s;

int c = 0;

int show(s* head){
    printf("\n---Display---\n");
    s* h = head;
    if(h == NULL){
        printf("The link list is empty!\n");
        c = 0;
        return 0;
    }
    int i = 1;
    while(h != NULL){
        printf("%d[%d]  ", h->data, i);
        i++;
        h = h->l;
    }
}

s* insirtion(s* head){
    s* h = head;
    s* p = (s*)malloc(sizeof(s));
    printf("Enter the value: ");
    scanf("%d",&p->data);
    if(h == NULL){
        p->l = NULL;
        c = c + 1;
        return p;
    }
    while(1){
        printf("Enter the position for insirtion: ");
        int n;
        scanf("%d",&n);
        while(n < 1 || n > c+1){
            printf("\nInvalid Positon!\n");
            break;
        }
        while(n == 1){
            p->l = h;
            c = c+1;
            return p;
        }
        while(n > 1 && n <= c+1){
            int i;
            s* ptr = h ;
            ptr = ptr->l;
            for( i = 1; i < n-1; i++){
                h = h->l;
                ptr = ptr->l;
            }
            h->l = p;
            p->l = ptr;
            c = c +1;
            return head;
        }
    }
}

s* deletion(s* head){
    s* h = head;
    s* p = (s*)malloc(sizeof(s));
    if(h == NULL){
        printf("The link list is empty!\n");
        return 0;
    }
    if(h->l == NULL){
        printf("%d is removed.", h->data);
        c = c - 1;
        return NULL;
    }
    while(1){
        printf("Enter the positon for deletion: ");
        int n;
        scanf("%d",&n);
        while(n<1 || n > c){
            printf("Invalid Position!");
            break;
        }
        while(n == 1){
            printf("%d is romoved.\n", h->data);
            h = h->l;
            c = c-1;
            return h;
        }
        while(n>1 && n <= c){
            int i;
            for( i = 1; i < n-1; i++){
                h = h->l;
            }
            s* ptr = h->l;
            printf("%d is removed.\n", ptr->data);
            h->l = ptr->l;
            c = c-1;
            return head;
        }
    }
}

s* replace(s* head){
    s* h = head;
    printf("Enter position: ");
    int n, i;
    scanf("%d",&n);
    for( i=1; i<n; i++){
        h = h->l;
    }
    printf("Enter the value: ");
    scanf("%d",&h->data);
    return head;
}

int main(){
    s* head = NULL;
    int o;
    while(1){
        printf("\n---OPORATION---\n1. Display\n2. Insert\n3. Delet\n4. Replace\n5. Exit\nEnter the oporation: ");
        scanf("%d",&o);
        switch(o){
            case 1:
            show(head);
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
            printf("\nOporations Completed!\n\n");
            return 0;
            break;
            
            default:
            printf("\nSyntex Error!\n");
            break;
        }
    }

}