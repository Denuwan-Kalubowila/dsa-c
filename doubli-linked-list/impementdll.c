#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
//create head of list
struct Node* head;

void PrintForword(){
    struct Node* ptr=head;

    if (ptr==NULL) return;

    printf("Forword:=> ");
    while(ptr != NULL){
        printf( " %d",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");

}

void PrintReverse(){
    struct Node* ptr=head;
    if (ptr==NULL) return;

    while(ptr->next != NULL){
        ptr=ptr->next;
    }
    printf("Reverse:=> ");
    while(ptr != NULL){
        printf(" %d",ptr->data);
        ptr=ptr->prev;
    }
    printf("\n");

}

void InsertFirst(int val){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node*));
    newnode->data=val;
    newnode->next=NULL;
    newnode->prev=NULL;

    if (head == NULL){
        head=newnode;
        return;
    }

    newnode->next=head;
    head->prev=newnode;
    head=newnode;


}
int InsertTail(struct Node* ptr,int val){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node*));
    newnode->data=val;
    newnode->next=NULL;
    newnode->prev=NULL;

    while(ptr->next != NULL){
        ptr=ptr->next;
    }
    ptr->next=newnode;
    newnode->prev=ptr;

}

int main(){
    head=NULL;
    InsertFirst(12);PrintForword();PrintReverse();
    InsertFirst(13);PrintForword();PrintReverse();
    InsertFirst(14);PrintForword();PrintReverse();
    InsertFirst(15);PrintForword();PrintReverse();
    InsertTail(head,10);PrintForword();PrintReverse();
    InsertTail(head,9);PrintForword();PrintReverse();
    InsertTail(head,8);PrintForword();PrintReverse();
    InsertTail(head,7);PrintForword();PrintReverse();

}