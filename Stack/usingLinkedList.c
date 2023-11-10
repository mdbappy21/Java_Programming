#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node;

node *top=NULL,*temp,*newNode;;

void push(int value){
    newNode=(node*)malloc(sizeof (node));
    newNode->data=value;
    newNode->next=top;
    top=newNode;
}
void display(){
    temp=top;
    if(top==0)
        printf("No Element on Stack\n");
    else{
        printf("The elements are : ");
        while (temp!=0){
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}

void peek(){
    if(top==0)
        printf("stack is empty\n");
    else
        printf("Element on top is : %d\n",top->data);
}

void pop(){
    temp=top;
    if(top==0)
        printf("Stack is Empty!\n");
    else{
        printf("Pop element is : %d\n",top->data);
        top=top->next;
        free(temp);
    }
}

void main(){
    push(2);
    push(3);
    push(10);
    push(20);
    display();
    peek();
    pop();
    peek();
    display();
}