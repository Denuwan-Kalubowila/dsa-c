#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head;

void printLinkedList(struct Node* llist){
    while(llist != NULL){
        printf("%d  ",llist->data);
        llist=llist->next;
    }
}
void addElementFirst(int x){
    struct Node * temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=x;
    temp->next=head;
    head=temp;

}

int main(){
    head=NULL;
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
    printf("\n");
    addElementFirst(7);
    addElementFirst(1);
    printLinkedList(head);
}
