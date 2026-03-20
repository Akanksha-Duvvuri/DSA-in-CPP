#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* createNode(int val){
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

void insert(struct Node* head, int val, int pos){
    struct Node* newNode = createNode(val);

    struct Node* temp = head;

    for(int i=0; i<pos-1; i++){
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

int main(){

    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    head = malloc(sizeof(struct Node));
    second = malloc(sizeof(struct Node));
    third = malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    insert(head, 15, 1);

    struct Node *temp = head;

    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");

    temp = head;
    while(temp != NULL){
        struct Node *next = temp->next;
        free(temp);
        temp = next;
    }

    return 0;
}