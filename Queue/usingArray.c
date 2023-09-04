#include <stdio.h>
#define Capacity 5

int queue[Capacity];
int front =0,rear=0;

void enqueue(int item){
    if (Capacity == rear) {
        printf("\nQueue is full\n");
        return;
    }
    else {
        queue[rear] = item;
        rear++;
    }
}

void dequeue(){
    if (front == rear) {
        printf("\nQueue is empty\n");
        return;
    }
    // all element left shift so that 1st element does not exist.
    else {
        printf("Dequeue element is : %d\n",queue[0]);
        for (int i = 0; i < rear - 1; i++) {
            queue[i] = queue[i + 1];
        }
            queue[rear] = 0;
        rear--;
    }
}

void printqueue(){
    for (int i = front; i < rear; i++)
        printf("%d\t",queue[i]);
    printf("\n");
}

void main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printqueue();
    enqueue(50);
    printqueue();
    enqueue(60);
    dequeue();
    printqueue();
    enqueue(60);
    printqueue();
}