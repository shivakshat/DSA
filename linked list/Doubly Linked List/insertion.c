#include<stdlib.h>
#include<stdio.h>
typedef struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}Node;
Node *head = NULL, *temp, *newnode;
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
}
void insertAtBeginning(){
    newnode = (Node*)malloc(sizeof(Node));
    printf("Enter the data of new node: ");
    scanf("%d",&newnode->data);
    newnode->prev = NULL;
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
    return;
}

void insertAtEnd(){
    temp = head;
    newnode = (Node*)malloc(sizeof(Node));
    printf("Enter the data of new node: ");
    scanf("%d",&newnode->data);
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
    newnode->next = NULL;
    return;
}

void insertAtBetween(){
    newnode = (Node*)malloc(sizeof(Node));
    printf("Enter the data of new node: ");
    scanf("%d",&newnode->data);
    int pos;
    printf("Enter the position of new node: ");
    scanf("%d",&pos);
    temp = head;
    for(int i = 1;i<pos-1;i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next->prev = newnode;
    temp->next = newnode;
    return;
}

void forwardAccess(){
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
int main(){
    system("cls");
    creation();
    // insertAtBeginning();
    // insertAtEnd();
    insertAtBetween();
    forwardAccess();
    return 0;
}