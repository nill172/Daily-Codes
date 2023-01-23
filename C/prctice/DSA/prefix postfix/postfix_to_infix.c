#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct str{
    int size, top;
    char* a;
}s;

void display(char arr[]){
    int i;
    for(i=0; arr[i] != '\0'; i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}

s* creat(int n){
    s* str = (s*)malloc(sizeof(s));
    str->top = -1;
    str->a = (char*)malloc(n * sizeof(char));
    return str;
}

int oporatorsign(char c){
    if((c== '+')||(c== '-')||(c== '*')||(c== '/')){
        return 1;
    }
    return 0;
}

s* push(s* str, char c){
    str->top ++;
    str->a[str->top] = c;
}

char pop(s* str){
    char c = str->a[str->top];
    str->top --;
    return c;
}

char post_to_infix(char arr[]){
    s* sign = creat(20);
    s* exe = creat(50);
    int i, count = 0;
    for(i=strlen(arr)-1; i >= 0; i--){
        if(oporatorsign(arr[i])){
            // push(exe, ')');
            // count++;
            push(sign, arr[i]);
        }else{
            push(exe, arr[i]);
            // if(oporatorsign(exe->a[exe->top-1])){
            //     push(exe, '(');
            //     count--;
            // }
            push(exe, pop(sign));
        }
        
    }
    // while(count != 0){
    //         push(exe, '(');
    //         count--;
    //     }
    exe->a[exe->top] = '\0';
    display(strrev(exe->a));
}

int main(){
    char exe[] = "abc/+ef/2*a*b*+";
    display(exe);
    post_to_infix(exe);
}