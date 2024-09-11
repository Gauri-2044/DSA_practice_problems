#include <stdio.h>
#include <stdbool.h>
//stack ADT usind array
//All operation must be done with 0(1).
// bool isEmpty(int s[]);
// bool isFull(int s[]);
// int pop(int s[],int size);
// void push(int s[],int newItem);
// void displayStack(int s[],int size)
// void peek(int s[]);

int top = -1;
int stack[10];
int size = sizeof(stack)/sizeof(stack[0]);

bool isEmpty(int s[]){
    if(top == -1)
    {
        return true;
    }
    else{
        return false;
    }
}

bool isFull(int s[]){
    if(top == size-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int pop(int s[]){
    if(isEmpty)
    {
        printf("Stack is Empty => Underflow");
    }
    else{
        int res = s[top];
        top--;
        return res;
    }
}

void push(int s[],int newItem){
    if(isFull(s))
    {
        printf("Stack is Full=> Overflow");
    }
    else{
        top++;
        s[top] = newItem;
    }
}

void peek(int s[]){
    printf("Top most Item is: %d",s[top]);
}

void displayStack(int s[]){
    printf("Stack is :");
    for(int i =0;i<=top;i++)
    {
        printf("\n%d",s[i]);
    }
}

int main()
{
    
    // printf("%d",size);
    push(stack,2);
    push(stack,5);
    push(stack,8);
    push(stack,4);
    push(stack,3);
    
    displayStack(stack);
    return 0;
}

