#include<iostream>
#include<stdlib.h>
using namespace std;

struct array{
    int size;
    int* data;
};

struct array* create(struct array*);
void show(struct array*);

int main(){
    struct array *a, *b;  //Now we can creat 2 arrays using a structure
                        //Both have those attributes of the structure
    a = create(a);
    b = create(b);
    show(a);
    show(b);
    return 0;
}

struct array* create(struct array* arr){
    arr = (struct array*)malloc(sizeof(struct array));
    cout<<"Enter the size of array: ";
    cin>>arr->size;
    arr->data = (int*)malloc(arr->size * sizeof(int));
    cout<<"Enter the elements of array: ";
    int i;
    for(i=0; i < arr->size; i++ ){
        cin>>arr->data[i];
    }
    return arr;
}

void show(struct array* arr){
    int i;
    for(i=0; i < arr->size; i++){
        cout<<" "<<arr->data[i];
    }
    cout<<endl;
}