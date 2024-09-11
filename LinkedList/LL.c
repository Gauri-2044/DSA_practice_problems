#include <stdio.h>
#include <stdbool.h>
//Linked List
struct Node{
    int data;
    struct Node *next;
};
struct Node *head = NULL;

bool isEmpty(){
    if(head == NULL){
        return true;
    }
    else{
        return false;
    }
}
void appendAtEnd(int newData){
    struct Node newNode;
    newNode.data = newData;
    newNode.next = NULL;
    
    if(isEmpty())
    {
        head = &newNode;
        return;
    }
    
     struct Node *node = head;
     while(node->next != NULL)
     {
         node = node->next;
     }
     node->next = &newNode;
}

int main()
{
    
    return 0;
}