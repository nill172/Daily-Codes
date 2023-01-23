#include<stdio.h>
#include<stdlib.h>
int head = -1;
void display(char *exe){
    int i;
    printf("\n");
    for(i = 0; exe[i] != '\0'; i++){
        printf("%c",exe[i]);
    }
    printf("\n");
}

int push(char* stack, char paranthesis){
    head ++;
    stack[head] = paranthesis;
}

int pop(char* stack){
    head --;
}

int paranthesis(char* exe){
    char *stack = (char*)malloc(10*sizeof(char));
    int i;
    for(i=0; exe[i]!='\0'; i++){
        if(exe[i] == '('){
            push(stack,'(');
        }
        if(exe[i] == ')'){
            if(head == -1){

                return 1;
            }
            pop(stack);
        }
    }
    if(head != -1){
        return 1;
    }
}

int main(){
    
    char *exe = "((((((a*b)+(c/d)+(5*2)*4)-3)+7)))";
    display(exe);

    
    if(paranthesis(exe) == 1){
        printf("Paranthesis Unbalanced!\n");
    }else{
        printf("Paranthesis Balanced!\n");
    }
}