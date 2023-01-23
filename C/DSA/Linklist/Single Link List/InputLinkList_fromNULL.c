#include <stdio.h>
#include<stdlib.h>
typedef struct node{
   int data;
   struct node* link;
}str;

int show(str* ptr){
   printf("\n---Display---\n");
   int i = 1;
   if (ptr != NULL)
   {
      while (ptr != NULL)
      {
         printf("The element no.%d: %d\n", i, ptr->data);
         ptr = ptr->link;
         i++;
      }
   }
   else
   {
      printf("\nThe list is empty.");
   }
}

str* insirtionlinklist(str* h){
   str* ptr = (str*)malloc(sizeof(str));
   str* p = h;
   printf("\nEnter the element: ");
   scanf("%d",&ptr->data);
   ptr->link = NULL;
   if(p != NULL){
      while(p->link != NULL){
        p = p->link;
      }
      p->link = ptr;
      return h;

   }else{
      return ptr;
   }
}

int main() {
   str* head = NULL;
   while(1){
      show(head);
      head = insirtionlinklist(head);
   }
   return 0;
}