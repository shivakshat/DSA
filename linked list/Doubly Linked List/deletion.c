#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}Node;
Node *head, *temp, *newnode;
void creation(){
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    newnode = (Node*)malloc(sizeof(Node));
    newnode->next = NULL;
    newnode->prev = NULL;
    printf("Enter the data of node: ");
    scanf("%d",&newnode->data);
    if(head == NULL){
        head = temp = newnode;
    }
    else{
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
    }
    } 
    return;
}
void deletionAtBeginning(){
    if(head == NULL){printf("Linked List is empty.");}
    else if(head->next ==NULL){
        free(head);
        head = NULL;
    }
    else{
        temp = head;
        head->next->prev = NULL;
        head = head->next;
        free(temp);
    }
    return;
}
void deletionAtEnd(){
    if(head == NULL){printf("Linked List is empty.");}
    else if(head->next == NULL){
        free(head);
        head = NULL;
    }
    else{
        temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->prev->next = NULL;
        free(temp);
    }
    return;
}
void deletionAtBetween(){
    int pos;
    printf("Enter the position of node to delete: ");
    scanf("%d",&pos);
    if(head == NULL){printf("Linked List is empty.");}
    else if(pos == 1){
        // deletionAtBeginning();
        temp = head;
        head->next->prev = NULL;
        head = head->next;
        free(temp);
    }
    else{
        temp = head;
        for(int i=1;i<pos;i++){
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        if(temp->next!=NULL){
            temp->next->prev = temp->prev;
        }
        free(temp);
    }
    return;
}
void forwardAccess(){
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    return;
}
int main(){
    system("cls");
    creation();
    // deletionAtBeginning();
    // deletionAtEnd();
    deletionAtBetween();
    forwardAccess();
    return 0;
}