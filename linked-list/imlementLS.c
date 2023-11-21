#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
void printLinkedList(struct Node* llist){
    while(llist != NULL){
        printf("%d  ",llist->data);
        llist=llist->next;
    }
}

int main(){
    
    struct Node* head;
    struct Node* one=NULL;
    struct Node* two=NULL;
    struct Node* three=NULL;

    one = malloc(sizeof(struct Node));
    two = malloc(sizeof(struct Node));
    three = malloc(sizeof(struct Node));

    one->data=2;
    two->data=5;
    three->data=7;

    one->next=two;
    two->next=three;
    three->next=NULL;

    head=one;

    printLinkedList(head);
}
