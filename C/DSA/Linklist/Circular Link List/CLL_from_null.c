#include<stdio.h>
#include<stdlib.h>

typedef struct link{
    int data;
    struct link* ptr;
}s;

int main(){
    s* head;
    head->ptr = head;
    
}