#include<stdio.h>
#include<stdlib.h>
typedef struct queue{
    int size;
    int* a;
}s;
int inQueue = 0, h = -1, r = -1;

int display(s* q){
    printf("\ninQueue = %d\n",inQueue);
    if(inQueue == 0){
        printf("Queue list is empty!\n");
        return 0;
    }
    int i=1, n=h;
    while(n != r){
        printf("%d[%d]  ",q->a[n], i);
        n = (n+1)%q->size;
        ++i;
    }
    printf("%d[%d]  ",q->a[n], i);
}

int enqueue(s* q){
    if(q->size == inQueue){
        printf("\nQueue is full!\n");
        return 0;
    }
    printf("Enter the value: ");
    int n;
    scanf("%d",&n);
    if(r == -1){
        r = h = 0;
        q->a[0] = n;
        inQueue = 1;
        return 0;
    }
    r = (r+1)%q->size;
    q->a[r] = n;
    // printf("r = %d",r);
    ++inQueue;
}

int dequeue(s* q){
    if(inQueue == 0){
        printf("\nThe Queue is empty!\n");
        return 0;
    }
    printf("\t%d Queue is copleted!\n",q->a[h]);
    h = (h+1)%q->size;
    // printf("\nh = %d",h);
    -- inQueue;
}

int main(){
    s* q = (s*)malloc(sizeof(s));
    printf("Enter the size of Queue: ");
    scanf("%d",&q->size);
    q->a = (int*)malloc(q->size * sizeof(int));
    while(1){
        printf("\n---Queue Oporations---\n1. Display\n2. Enqueue\n3. Dequeue\n4. Exit\nEnter the oporation: ");
        int o;
        scanf("%d",&o);
        switch(o){
            case 1:
            display(q);
            break;

            case 2:
            enqueue(q);
            break;

            case 3:
            dequeue(q);
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