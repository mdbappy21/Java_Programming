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
} node;

node *head = NULL, *current = NULL, *temp = NULL;

void main() {
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

void printList() {
    temp = head;
    while (temp != NULL) {
        printf("Name :  %s\t", temp->Name);
        printf("Id :  %d\n", temp->id);
        temp = temp->next;
    }
}

void createList(int n) {
    for (int i = 0; i < n; ++i) {
        temp = (node *) malloc(sizeof(node));
        printf("Enter Name and Id :");
        scanf("%s", &temp->Name);
        scanf("%d", &temp->id);
        temp->next = NULL;
        if (head == NULL) {
            head = temp;
            current = temp;
        } else {
            current->next = temp;
            current = current->next;
        }
    }
}

void inseartAtfirst() {
    temp = (node *) malloc(sizeof(node));
    printf("Enter Name and Id :");
    scanf("%s", &temp->Name);
    scanf("%d", &temp->id);

    temp->next = head;
    head = temp;
}

void inseartAtEnd() {
    current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    node *temp = (node *) malloc(sizeof(node));
    printf("Enter Name and Id : ");
    scanf("%s", &temp->Name);
    scanf("%d", &temp->id);
    temp->next = NULL;

    current->next = temp;
    current = current->next;

}

void inseartAtPosition() {
    int position, count = 1;
    printf("Which position do you want to inseart : ");
    scanf("%d", &position);

    current = head;
    while (current != NULL) {
        count++;
        if (count == position) {
            printf("Enter Name and Id : ");
            temp = (node *) malloc(sizeof(node));
            scanf("%s", &temp->Name);
            scanf("%d", &temp->id);
            temp->next = current->next;
            current->next = temp;
        }
        current = current->next;
    }
}

void delateAtfirst() {
    if (head == NULL) {
        printf("No Element !\n");
    } else {
        current = head;
        head = head->next;
        free(current);
    }
}

void delateAtlast() {
    if (head == NULL) {
        printf("NO Element !\n");
    } else {
        current = head;
        while (current->next != NULL) {
            temp = current;
            current = current->next;
        }
        temp->next = NULL;
        free(current);
    }
}

void delateAtPosition() {
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
        free(temp);
    } else{
        printf("Position does not exist !\n");
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