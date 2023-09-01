#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printList();
void createList(int n);
void inseartAtfirst();
void inseartAtEnd();
void inseartAtPosition();
void delateAtfirst();
void delateAtlast();
void delateAtPosition();
void searchinLinkedList();

typedef struct node {
    char Name[20];
    int id;
    struct node *next;
    struct node *prev;
}node;

node *head=NULL,*tail=NULL,*current=NULL,*temp=NULL;

void main(){
    int n;
    printf("Enter how many data : ");
    scanf("%d", &n);

    createList(n);
    printList();

    printf("Inseart At first position \n");
    inseartAtfirst();
    printList();

    printf("Inseart At End position \n");
    inseartAtEnd();
    printList();

    printf("Inseart At selected position \n");
    inseartAtPosition();
    printList();

    printf("Searching value....\n");
    searchinLinkedList();

    printf("Delete at selected position \n");
    delateAtPosition();
    printList();

    printf("Delete at first position \n");
    delateAtfirst();
    printList();

    printf("Delete at end position \n");
    delateAtlast();
    printList();

}
void createList(int n) {
    for (int i = 0; i < n; ++i) {
        current = (node *) malloc(sizeof(node));
        printf("Enter Name and Id :");
        scanf("%s", &current->Name);
        scanf("%d", &current->id);
        current->next = NULL;
        current->prev=NULL;

        if (head == NULL) {
            head = current;
            tail = current;
        } else {
            tail->next = current;
            current->prev=tail;
            tail = tail->next;
        }
    }
}

void printList() {
    current = head;
    while (current != NULL) {
        printf("Name :  %s\t", current->Name);
        printf("Id :  %d\n", current->id);
        current = current->next;
    }
}
void inseartAtfirst(){
    current=(node*) malloc(sizeof (node));
    printf("Enter Name and Id : ");
    scanf("%s",&current->Name);
    scanf("%d",&current->id);
    current->next=head;
    head->prev=current;
    head=current;
}

void inseartAtEnd(){
    current=(node*) malloc(sizeof (node));
    printf("Enter Name and Id : ");
    scanf("%s",&current->Name);
    scanf("%d",&current->id);
    current->next=NULL;
    current->prev=tail;
    tail->next=current;
    tail=tail->next;
}

void inseartAtPosition(){
    int position,count=1;
    printf("Which position do you want to insert : ");
    scanf("%d",&position);
    temp=head;
    while (temp!=NULL){
        count++;
        if(position==count){
            printf("Enter Name and Id : ");
            current=(node *) malloc(sizeof (node));
            scanf("%s", &current->Name);
            scanf("%d", &current->id);
            current->next=temp->next;
            current->prev=tail->prev;
            temp->next=current;
            tail->prev=current;
        }
        temp=temp->next;
    }
}

void searchinLinkedList(){
    char name[20];
    int Id,index=1;
    printf("Enter Name and id that you are searching : ");
    scanf("%s",&name);
    scanf("%d",&Id);
    current=head;
    while (current!=NULL){
        if(strcmp(current->Name,name)==0 && current->id==Id){
            printf("Value found at position :%d\n",index);
            printf("Value are ...\nName : %s\tId : %d\n",name,Id);
            return;
        }
        index++;
        current=current->next;
    }
    printf("Value not found ! \n");
}

void delateAtPosition(){
    int position, count = 0;
    printf("Which position do you want to delete : ");
    scanf("%d", &position);

    current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    current=head;
    if (position < count) {
        for (int i = 1; i < position - 1; i++) {
            current = current->next;
        }
        temp = current->next;
        current->next = temp->next;
        current=current->next;
        current->prev=temp->prev;
        free(temp);
    } else{
        printf("Position does not exist !\n");
    }
}

void delateAtfirst(){
    if (head == NULL) {
        printf("No Element !\n");
    } else {
        current = head;
        head = head->next;
        head->prev=NULL;
        free(current);
    }
}

void delateAtlast(){
    if (head == NULL) {
        printf("NO Element !\n");
    } else {
        current=tail;
        tail=temp->prev;
        tail->next=NULL;
        free(current);
    }
}