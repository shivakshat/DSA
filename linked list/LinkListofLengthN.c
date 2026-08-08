#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *head = NULL,*newnode, *temp;
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->next = NULL;
        printf("Enter the value for the node %d: ",i);
        scanf("%d",&newnode->data);
        // newnode = NULL;
        if(head==NULL){
            head = newnode;
            temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
    }
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    return 0;
}