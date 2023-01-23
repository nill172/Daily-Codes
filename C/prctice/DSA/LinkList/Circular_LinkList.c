#include<stdio.h>
#include<stdlib.h>
typedef struct link{
    int data;
    struct link* link;
}s;
int c = 0;
int show(s* head){
    printf("\nsize = %d\n", c);
    s* h = head;
    while(h == NULL){
        printf("The list is empty!\n");
        c = 0;
        return 0;
    }
    int i = 1;
    do{
        printf("%d[%d]  ", h->data, i);
        i++;
        h = h->link;
    }while(h != head);
}

s* insirtion(s* head){
    s* h = head;
    s* p = (s*)malloc(sizeof(s));
    printf("Enter the element: ");
    scanf("%d",&p->data);
    while(h == NULL){
        p->link = p;
        c = 1;
        return p;
    }
    while(1){
        printf("\nEnter the position of insirtion: ");
        int n;
        scanf("%d",&n);
        while(n<1 || n > c+1){
            printf("\nInvalid Positon!\n");
            break;
        }
        while(n == 1){
            p->link = h;
            do{
                h = h->link;
            }while(h->link != head);
            h->link = p;
            ++c;
            return p;
        }
        while(n>1 && n<=c+1){
            int i;
            for(i =1; i< n-1; i++){
                h = h->link;
            }
            p->link = h->link;
            h->link = p;
            ++c;
            return head;
        }
    }
    
}

s* deletion(s* head){
    s* h = head;
    while(h==NULL){
        printf("\nThe List is empty. Deletion cannot be done.\n");
        return NULL;
    }
    while(h->link == head){
        printf("%d is removed.\n",h->data);
        c = 0;
        return NULL;
    }
    while(1){
        printf("\nEnter the position for deletion: ");
        int n;
        scanf("%d",&n);
        while(1 > n || n > c){
            printf("\nInvalid Position!\n");
            break;
        }
        while(n == 1){
            printf("%d is removed.\n",h->data);
            s* p = h->link;
            do{
                h = h->link;
            }while(h->link != head);
            h->link = p;
            --c;
            return p;
        }
        while(1<n && n<=c){
            int i;
            for(i=1; i<n-1; i++){
                h = h->link;
            }
            s* p = h->link;
            printf("%d is removed.\n",p->data);
            h->link = p->link;
            --c;
            return head;
        }
    }
    
}

s* replace(s* head){
    s* h = head;
    printf("Enter the positio of replacing: ");
    int n, i;
    scanf("%d",&n);
    for(i = 1; i < n; i++){
        h = h->link;
    }
    printf("Enter the element value: ");
    scanf("%d",&h->data);
    return head;
}

int main(){
    s* head = NULL;
    while(1){
        printf("\n---Oporation---\n1. Display\n2. Insirtion\n3. Deletion\n4. Replace\n5. Exit\nEnter the you choice: ");
        int o;
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
            printf("\nOporation Completed!\n");
            return 0;

            default:
            printf("\nSyntex Error!\n");
        }
    }
}