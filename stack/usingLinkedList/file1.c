#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
node *temp, *newnode, *top=NULL;
int size = 0;
void push(int val){
    if(top==NULL){
        newnode = (node*)malloc(sizeof(node));//1000
        temp = top=newnode;//1000
        newnode->next = NULL;
        newnode->data = val;//1
        size++;//1
    }
    else{
        newnode = (node*)malloc(sizeof(node));//2000 3000 4000 5000
        temp=newnode;//3000 4000 5000
        temp->next = top;//2000->1000 3000>2000 4000>3000 5000>4000
        newnode->data = val;//2 3 4 5
        top = newnode;//2000 3000 4000 5000
        size++;       //2 3 4 5
    }
}
void pop(){
    if(top==NULL) printf("Stack underflow");
    else if(top->next==NULL){
        free(top);
        size--;
        top = NULL;
    }
    else{
        temp = top;
        top = temp->next;
        printf("Popped value is %d.\n",temp->data);
        free(temp);
        size--;
    }
}
void peek(){
    if(top==NULL) printf("Stack underflow");
    else{
        printf("%d\n",top->data);
    }
}
void display(){
    printf("Elements : ");
    temp = top;//5000
    while(temp!=NULL){//5000
        printf("%d ",temp->data);
        temp = temp->next;//4000
    }
    printf("\nSize = %d\n",size);
    return;
}
int main(){
    system("cls");
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    pop();
    push(100);
    push(110);
    pop();
    push(45);
    pop();
    peek();
    display();
    return 0;
}