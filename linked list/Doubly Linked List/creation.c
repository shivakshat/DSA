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
}
void forwardAccess(){
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
void backwardAccess(){
    temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->prev;
    }
}
int main(){
    system("cls");
    creation();
    // forwardAccess();
    backwardAccess();
    return 0;
}