#include<stdio.h>
int main(){
    int age;
    printf("Ener your age: ");
    scanf("%d",&age);

    if(age>=18){
        printf("You are elegeble for vote.");
    }else if(age==17){
        printf("You have to wait only one year for vote.");
    }else{
        printf("You have to wait for %d years to be elegeble for vote.",(18-age));
    }
    return 0;
}