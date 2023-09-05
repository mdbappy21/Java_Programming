#include <stdio.h>
#include <stdlib.h>

void display();
void enQueue(int x);
void deQueue();
void peek();

typedef struct node {
    int data;
    struct node *next;
} node;

node *front = NULL, *rear = NULL, *newNode, *temp;

void main() {
    enQueue(10);
    enQueue(20);
    enQueue(30);
    display();
    deQueue();
    peek();
    deQueue();
    enQueue(40);
    enQueue(50);
    peek();
    enQueue(60);
    deQueue();
    display();
}


void enQueue(int x) {
    newNode = (node *) malloc(sizeof(node));
    newNode->data = x;
    newNode->next = NULL;

    if (front == NULL && rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
}

void display() {
    if (front == NULL && rear == NULL)
        printf("Queue is Empty\n");
    else {
        temp = front;
        printf("Data : ");
        while (temp != NULL) {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void deQueue() {
    temp = front;
    if (front == NULL && rear == NULL) {
        printf("Queue is Empty\n");
    } else {
        printf("De-Queue value is : %d\n", front->data);
        front = front->next;
        free(temp);
    }

}

void peek() {
    if (front == NULL && rear == NULL) {
        printf("Queue is Empty\n");
    } else {
        printf("Front data is : %d\n", front->data);
    }
}