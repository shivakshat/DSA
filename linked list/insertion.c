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
void access(){
    temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    return;
}
void main(){
    creation();
    access();
}