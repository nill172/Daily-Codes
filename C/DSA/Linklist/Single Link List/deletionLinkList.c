#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* link;
}str;

int show(str* ptr){
    printf("\n---Display---\n");
    int i = 1;
    while (ptr != NULL){
        printf("The element no.%d: %d\n", i, ptr->data);
        ptr = ptr->link;
        i++;
    }
    // printf("Size: %d\n",i-1);
    return i-1;
}

str* deletion_atfirst(str* h){
    // printf("1st");
    str* ptr = h;
    h = h->link;
    free(ptr);

    return h;
}

str* deletion_between(str* h, int i, int n){
    // printf("Between");
    str *p = h, *q;
    // printf("i = %d\n",i);
    int a=1;
    while(a<i-1){
        p = p->link;
        a++;
    }
    // printf("Position: %d of %d\n",a,i);
    // printf("Element: %d\n",p->data);
    q = p->link;
    p->link = q->link;
    free(q);

    return h;
}

str* deletion_atend(str* h, int i){
    // printf("End\n");
    str* p = h;
    int j = 1;
    while(j<i-1){
        p = p->link;
        j++;
    }
    p->link = NULL;
    return h;
}

str* deletion(str* h, int n){
    str* ptr = (str*)malloc(sizeof(str));
    str* p = h;
    int i=1 , j;
    printf("\nEnter the element: ");
    scanf("%d",&j);
    while(p->data != j && p->link != NULL){
        p = p->link;
        i++;
    }
    if(p->data == j){
        printf("No.%d position of total elements %d\n", i, n);
        if(i==1){
            h = deletion_atfirst(h);
        }else if(i>1 && i<n){
            h = deletion_between(h, i, n);
        }else if (i == n){
            h = deletion_atend(h,i);
    }
    }else{
        printf("\nThe element isn't in the list.");
        return 0;
    }

}

int main(){
    str* h1 = (str*)malloc(sizeof(str));
    str* h2 = (str*)malloc(sizeof(str));
    str* h3 = (str*)malloc(sizeof(str));
    str* h4 = (str*)malloc(sizeof(str));
    str* h5 = (str*)malloc(sizeof(str));

    h1->data = 1;
    h2->data = 2;
    h3->data = 3;
    h4->data = 4;
    h5->data = 5;

    h1->link = h2;
    h2->link = h3;
    h3->link = h4;
    h4->link = h5;
    h5->link = NULL;

    int n;
    while(h1 != 0){
        n = show(h1);
        h1 = deletion(h1, n);
    }
}