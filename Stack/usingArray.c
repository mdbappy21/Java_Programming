#include <stdio.h>
#define capacity 3
int stack[capacity];
int top=-1;

void push(int vlaue){
    if(top<capacity-1){
        top=top+1;
        stack[top]=vlaue;
        printf("Succesfully added item : %d\n",vlaue);
    } else{
        printf("Exception ! No spaces\n");
    }
}

int pop(){
    if(top>=0){
        int value=stack[top];
        top-=1;
        return value;
    }
    printf("Exception from pop! Empty Stack\n");
    return -1;
}

int peek(){
    if(top>=0){
        return stack[top];
    }
    printf("Exception from peek ! Empty stack\n");
    return -1;
}

int main(){
    printf("Implementing my stack in C.\n");
    peek();
    push(10);
    push(20);
    push(30);
    printf("Pop item : %d\n",pop());
    push(40);
    printf("Top of Stack %d\n",peek());
    return 0;
}