#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* link;
}str;

void show(str* ptr){
    while(ptr != NULL){
        printf("The element: %d\n", ptr->data);
        ptr = ptr->link;
    }
}
//! Insirtion at the front
// str* insirtion_atfront(str* h){
//     str* ptr = (str*)malloc(sizeof(str));
//     printf("Enter the element: ");
//     scanf("%d", &ptr->data);
//     ptr->link = h;
//     return ptr;
// }

//! Insirtion at the end
// str* insirtion_atlast(str* h){
//     str* ptr = (str*)malloc(sizeof(str));
//     printf("Enter the element: ");
//     scanf("%d",&ptr->data);
//     str* p = h;
//     while(p->link != NULL){
//         p = p->link;
//     }
//     p->link = ptr;
//     ptr->link = NULL;
//     return h;
// }

//! Insirtion at the index
// str* insirtion_atindex(str* h){
//     int i=1, index;
//     str* ptr = (str*)malloc(sizeof(str));
//     str* p = h;
//     printf("Enter the index position: ");
//     scanf("%d",&index);
//     printf("Enter the element: ");
//     scanf("%d",&ptr->data);
//     while(i != index-1){
//         p = p->link;
//         i++;
//     }
//     ptr->link = p->link;
//     p->link = ptr;
//     return h;
// }

//! Insirtion at the node
str* insirtion_atnode(str* h, str* node){
    str* ptr = (str*)malloc(sizeof(str));
    str* p = h;
    printf("Enter the element: ");
    scanf("%d",&ptr->data);

    //* It insert the value after the node
    ptr->link = node->link;
    node->link = ptr;

    //* It insert the value to the node
    // while(p->link != node){
    //     p = p->link;
    // }
    // ptr->link = p->link;
    // p->link = ptr;
    return h;
}

int main(){
    str* h1 = (str*)malloc(sizeof(str));
    str* h2 = (str*)malloc(sizeof(str));
    str* h3 = (str*)malloc(sizeof(str));
    str* h4 = (str*)malloc(sizeof(str));

    h1->data = 1;
    h2->data = 2;
    h3->data = 3;
    h4->data = 4;

    h1->link = h2;
    h2->link = h3;
    h3->link = h4;
    h4->link = NULL;

    show(h1);
    while(1){
    // h1 = insirtion_atfront(h1);
    // h1 = insirtion_atlast(h1);
    // h1 = insirtion_atindex(h1);
    h1 = insirtion_atnode(h1, h3);
    show(h1);
    }

}