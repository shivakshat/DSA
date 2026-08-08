#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL, *newnode, *temp;
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
void insertAtBeginning(){
    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value for new first node: ");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;
}
void insertAtEnd(){
    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value for new end node: ");
    scanf("%d",&newnode->data);
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}
void insertInBetween(){
    newnode = (struct Node*)malloc(sizeof(struct Node));
    int pos;
    printf("Enter the position: ");
    scanf("%d",&pos);
    printf("Enter the value for new node: ");
    scanf("%d",&newnode->data);
    temp = head;
    for(int i=1;i<pos-1;i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
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
    creation();
    // insertAtBeginning();
    // insertAtEnd();
    insertInBetween();
    access();
}