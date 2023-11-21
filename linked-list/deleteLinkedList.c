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
void addElementNth(int data,int x){
    struct Node * temp1=(struct Node*)malloc(sizeof(struct Node));
    temp1->data=data;
    temp1->next=NULL;
    if(x==1){
        temp1->next=head;
        head=temp1;
        return;
    }
    struct Node * temp2=head;
    for(int i=0;i<x-2;i++){
        temp2=temp2->next;

    }
    temp1->next=temp2->next;
    temp2->next=temp1;
    
}
void Delete(int x){
    struct Node * temp1=head;
    if(x==1){
        head=temp1->next;
        free(temp1);
        return;
    }
    for(int i=0;i<x-2;i++){
        temp1=temp1->next;

    }
    struct Node *temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
    
    
}


int main(){
    head=NULL;
    addElementNth(2,1);//2
    addElementNth(3,2);//2,3
    addElementNth(4,1);//4,2,3
    addElementNth(5,2);//4,5,2,3
    printLinkedList(head);

    int pos;
    printf("Enter Delete Possition");
    scanf("%d",&pos);
    Delete(pos);
    printLinkedList(head);

}