#include<stdio.h>
#include<stdlib.h>
int arr[100];
int top = -1,n;
void push(){
    if(top==n-1){
        printf("Stack Overflow\n");
    }
    else{
        top++;
        int val;
        printf("Value to be inserted : ");
        scanf("%d",&val);
        arr[top] = val;
    }
}
void pop(){
    if(top == -1){
        printf("Stack underflow");
    }
    else{
        printf("Element popped is %d.",arr[top]);
        top--;
    }
}
void peek(){
    printf("Peek element : %d\n",arr[top]);
}
void display(){
    for(int i=0;i<=top;i++){
        printf("___\n");
        printf("|%d|\n",arr[i]);
        printf("___\n");
    }
}
int main(){
    system("cls");
    printf("Length of stack: ");
    scanf("%d",&n);
    int ch;
    do{
        printf("0:Out\n1:push\n2:pop\n3:peek\n4:display\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1 : push(); break;
            case 2 : pop(); break;
            case 3 : peek(); break;
            case 4 : display(); break;
        }
    }
    while(ch!=0);
    return 0;
}