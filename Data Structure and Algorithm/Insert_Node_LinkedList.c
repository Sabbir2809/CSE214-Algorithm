#include<stdio.h>
#include<stdlib.h>

struct Node *createLinkedList(int arr[],int size);
void insertAtBeginning(struct Node *head, int data);
void insertAtEnd(struct Node *head, int data);
void printList(struct Node *head);

struct Node{
    int data;
    struct Node *next;
};

int main(){

    int a[] = {15,30,45,60,100};

    struct Node *head;

    head = createLinkedList(a,5);

    printList(head);

    //insertAtBeginning(head, 500);
    insertAtEnd(head,222);


    return 0;
}

void insertAtBeginning(struct Node *head,int data){

    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));

    temp -> data = data;
    temp -> next = head;


    struct Node *newHead = temp;
    struct Node *current = newHead;
    newHead = temp;

    while(head != NULL){

        printf("%d ->",current->data);
        current = current->next;

    }
    printf("NULL\n");

}

void insertAtEnd(struct Node *head, int data){

    struct Node *current = head;
    //traverse and go to the end of list

    while(current->next != NULL){

        current = current -> next;
    }
    //create a new node with list
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));

    temp -> data = data;
    temp -> next = NULL;

    //insert
    current -> next = temp;
    printList(head);

}

void printList(struct Node *head){

        struct Node *cureent = head;
        while(cureent != NULL){

        printf("%d ->",cureent->data);
        cureent = cureent->next;
    }
    printf("NULL\n");
}

struct Node *createLinkedList(int arr[],int size){

    struct Node *head = NULL, *temp = NULL, *current = NULL;

    int i;
    for(i = 0; i < size; i++){
        
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = arr[i];
        temp->next = NULL;

        if(head == NULL){
            head = temp;
            current = temp;
        }else{
            current->next = temp;
            current = current->next;
        }

    }
    return head;
}
