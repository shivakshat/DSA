#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
    struct node* prev;
}Node;
Node *head = NULL, *newnode, *temp;
void create(){
    printf("Enter number of nodes : ");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        newnode = (Node*)malloc(sizeof(Node*));//1000 2000
        newnode->next = NULL;
        newnode->prev = NULL;
        printf("Enter data of node : ");
        scanf("%d",&newnode->data);
        if(head == NULL){ // null 1000 
            head = temp = newnode;//temp = null
        }
        else{
            temp->next = newnode; //
            newnode->prev = temp;
            temp = newnode;
        }
    }
    head->prev = temp;
    temp->next = head;
    return;
}
void forwardAccess(){
    temp = head;
    for(int i=0;i<19;i++){
    
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
int main(){
    system("cls");
    create();
    forwardAccess();
    return 0;
}