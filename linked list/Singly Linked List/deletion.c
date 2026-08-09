#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL, *newnode, *temp, *prev;
struct Node* creation(){
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->next = NULL;
        printf("Enter the data of node %d: ",i);
        scanf("%d",&newnode->data);
        if(head == NULL){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
    }
    printf("Linked list created successfully.\n");
    free(temp);
    return head;
}
void deleteAtBeginning(){
    if(head == NULL){
        printf("List is empty. Cannot delete.\n");
        return;
    }
    else{
        temp = head;
        head = head->next;
        free(temp);
    }
}
void deleteAtEnd(){
    if(head == NULL){
        printf("List is empty.");
    }
    else if(head->next == NULL){
        free(head);
        head = NULL;
    }
    else{
        temp = head;
        while(temp->next!=NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
    }
}
void deleteInBetween(int pos){
    temp = head;
    for(int i=1;i<pos;i++){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
    free(prev);
}

void access(){
    temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    free(temp);
    return;
}
void main(){
    system("cls");
    creation();
    deleteAtEnd();
    // deleteInBetween(3);
    access();
}