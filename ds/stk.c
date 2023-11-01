#include<stdio.h>
#define max_size 100
int stack[max_size];
int top=-1;

void push(int x){
    if(top==max_size-1){
        printf("stack is full ");
    }
    else {
        top++;
        stack[top]=x;
    }
}

void pop(){
    int item;
    if(top==-1){
        printf("Stack is empty");
    }
    else{
        item=stack[top];
        top--;
        printf("%d",item);
    }
}

void display(){
    int i;
        printf("\n%d",top);
    for (i=top;i>=0;i--){
        printf("\n%d",stack[i]);
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    pop();
    display();

}