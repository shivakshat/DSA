/* #include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main(){
    struct Node *head, *second, *third, *temp, *newnode;
    int value;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value for the first node: ");
    scanf("%d",&value);
    head->data = value;
    head->next = second;
    printf("Enter the value for the second node: ");
    scanf("%d",&value);
    second->data = value;
    second->next = third;
    printf("Enter the value for the third node: ");
    scanf("%d",&value);
    third->data = value;
    third->next = NULL;
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    return 0;
}
 */
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

int main(){
    struct Node *head, *second, *third, *temp, *newnode;
    int value;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter the value for the first node: ");
    scanf("%d",&head->data);
    // head->data = value;
    head->next = second;
    printf("Enter the value for the second node: ");
    scanf("%d",&second->data);
    // second->data = value;
    second->next = third;
    printf("Enter the value for the third node: ");
    scanf("%d",&third->data);
    // third->data = value;
    third->next = NULL;
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    return 0;
}