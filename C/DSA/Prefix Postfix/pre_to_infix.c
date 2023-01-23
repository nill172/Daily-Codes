#include<stdio.h>
#include<stdlib.h>
typedef struct array {
    int top;
    char* a;
}str;
int bcount = 0;

void display(char* arr, int h) {
    int i;
    for (i = h; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}

void push(str* s, char c) {
    int i = ++s->top;
    s->a[i] = c;
}

void pre_to_infix(char* arr) {
    str* stack = (str*)malloc(sizeof(str));
    str* exe = (str*)malloc(sizeof(str));
    stack->top = exe->top = -1;
    stack->a = (char*)malloc(50 * sizeof(char));
    exe->a = (char*)malloc(100 * sizeof(char));
    int i, h = 0;
    for (i = 0; arr[i] != '\0'; i++) {
        if ((arr[i] == '+') || (arr[i] == '-') || (arr[i] == '*') || (arr[i] == '/')) {
            // if(stack->top != -1){
            // }
            push(exe, '(');
            bcount++;
            push(stack, arr[i]);
        }else{
            push(exe, arr[i]);
            if (stack->top != -1) {
                // exe->a[exe->top +1] = '\0';
                // display(exe->a);
                // (exe->a[exe->top - 1] == '+') || (exe->a[exe->top - 1] == '-') || (exe->a[exe->top - 1] == '*') || (exe->a[exe->top - 1] == '/')
                if ((exe->a[exe->top - 1] == '+') || (exe->a[exe->top - 1] == '-') || (exe->a[exe->top - 1] == '*') || (exe->a[exe->top - 1] == '/')) {
                    push(exe, ')');
                    bcount--;
                }
                push(exe, stack->a[stack->top]);
                stack->top--;
                if ((arr[i + 1] == '+') || (arr[i + 1] == '-') || (arr[i + 1] == '*') || (arr[i + 1] == '/')) {
                    h++;
                    bcount--;
                }
            }
        }
    }
    while (bcount != 0) {
        push(exe, ')');
        bcount--;
    }
    exe->a[exe->top + 1] = '\0';
    display(exe->a, h);
}

int main() {
    char arr[100];
    printf("Prefix Expression: ");
    gets(arr);
    pre_to_infix(arr);
}
