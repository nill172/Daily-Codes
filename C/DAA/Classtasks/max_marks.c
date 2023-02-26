#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{
    char name[20];
    int roll;
    int marks;
}std,*stdp;

typedef struct returnvalue{
    stdp* students;
    int count;
}ret;

ret return_list(stdp arr, int n){
    ret list;
    int maxmarks = 0;
    list.count = 0;
    int i;
    //! finding max marks
    for (i=0; i<n; i++){
        if(arr[i].marks > maxmarks){
            maxmarks = arr[i].marks;
            list.count = 1;
        }else if(arr[i].marks == maxmarks){
            list.count++;
        }
        printf("max marks = %d and count %d\n",maxmarks, list.count);
    }
    list.students = (stdp*)malloc(list.count*sizeof(stdp));
    int j = 0;
    //! sotring the max marks obtained students' pointer
    for(i=0; i<n; i++){
        if(arr[i].marks == maxmarks){
            list.students[j] = &arr[i];
            j++;
        }
    }
    return list;
}

int main(){
    int n = 5;
    stdp arr = (stdp)malloc(n*sizeof(std));
    strcpy(arr[0].name, "Rahul");
    arr[0].roll = 1;
    arr[0].marks = 80;
    strcpy(arr[1].name, "Sayan");
    arr[1].roll = 2;
    arr[1].marks = 80;
    strcpy(arr[2].name, "Sudip");
    arr[2].roll = 3;
    arr[2].marks = 90;

    // arr[0] = {"Rahul", 1, 90};
    // arr[1] = {"Sudip", 2, 85};
    // arr[2] = {"Debasish", 3, 72};
    // arr[3] = {"Sayan", 4, 85};
    // arr[4] = {"Amit", 5, 90};

    int i;
    for(i=0; i<n; i++){
        printf("The no.%d, %s's marks is: %d.\n",arr[i].roll,arr[i].name,arr[i].marks);
    }

    ret list = return_list(arr, n);
    printf("The maximum marks is %d.\n", list.students[0]->marks);
    for(i=0; i<list.count; i++){
        printf("Name: %s, Roll: %d.\n",list.students[i]->name, list.students[i]->roll);
    }
}