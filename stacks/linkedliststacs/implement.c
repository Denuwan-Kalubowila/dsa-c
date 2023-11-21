#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * link;
};

struct Node * top=NULL;

void Push (int element){
    struct Node* newNode =(struct Node*)malloc(sizeof(struct Node*));

    newNode->data=element;
    newNode->link=top;
    top=newNode;
}

void Pop (){
    if(top==NULL){
        printf("Linked List is Empty");
    }
    struct Node * curr;
    curr=top->link;
    top=curr;
    
}

void PrintList (struct Node* ll){
    while(ll != NULL){
        printf("%d ",ll->data);
        ll=ll->link;
    }
    printf("\n");
}




int main(){
    Push(12);
    Push(24);
    Push(36);
    PrintList(top);
    Pop();
    PrintList(top);
    Pop();
    PrintList(top);
    Push(12);
    PrintList(top);

}