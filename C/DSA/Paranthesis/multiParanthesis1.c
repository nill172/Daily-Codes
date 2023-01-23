#include<stdio.h>
#include<stdlib.h>
int h = -1;

void display(char* exe){
    int i;
    for (i=0; exe[i] != '\0'; i++){
        printf("%c",exe[i]);
    }
    printf("\n");
}

void push(char* stack, char c){
    h++;
    stack[h] = c;
}

int pop(char* stack, char c){
    if(h == -1){
        return 0;
    }
    char b = stack[h];
    h--;
    if((b=='(' && c!=')') || (b=='{' && c!='}') || (b=='[' && c!=']')){
        return 0;
    }
    return 1;
}

int paranthesis(char* exe){
    char* stack = (char*)malloc(50*sizeof(char));
    int i, j;
    for (i=0; exe[i] != '\0'; i++){
        if((exe[i] == '(') || (exe[i] == '{') || (exe[i] == '[')){
            push(stack, exe[i]);
        }else if((exe[i] == ')') || (exe[i] == '}') || (exe[i] == ']')){
            if(pop(stack, exe[i]) == 0){
                return 0;
            }
        }
    }
    if(h != -1){
        return 0;
    }
}

int main(){
    char* exe = "[4*{47-(12/3)}*5]";
    display(exe);
    if(paranthesis(exe) == 0){
        printf("Paranthesis is not balanced.");
    }else{
        printf("Paranthesis is balanced.");
    }
}
