#include <stdio.h>
#include <stdbool.h>
#define Capacity 5

int queue[Capacity];
int front =0,rear=-1,totalItem=0;

bool isFull(){
    if(totalItem==Capacity)
        return true;

    return false;
}
bool isEmpty(){
    if(totalItem==0)
        return true;
    return false;
}

void enqueue(int item){
    if(isFull()){
        printf("Sorry queue is full\n");
        return;
    }
    rear=(rear+1)%Capacity;
    queue[rear]=item;
    totalItem++;
}

int dequeue(){
    if(isEmpty()){
        printf("Sorry , the queue is empty\n");
        return -1;
    }
    int frontItem=queue[front];
    queue[frontItem]=-1;
    front=(front+1)%Capacity;
    totalItem--;
    return frontItem;
}

void printqueue(){
    int i;
    for(i=0;i<Capacity;i++)
        printf("%d\t",queue[i]);
    printf("\n");
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printqueue();
    enqueue(50);
    printqueue();
    enqueue(60);
    printf("Dequeue : %d\n",dequeue());
    printqueue();
    return 0;
}
