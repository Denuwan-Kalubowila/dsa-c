#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* head;

int printLinkedList(struct Node * ptr){
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;

    }
}
int addElemrntToEnd(int element){
    struct Node * addEle=(struct Node *)malloc(sizeof( struct Node *));
    addEle->data=element;
    addEle->next=head;
    head=addEle;
      
}
int findMiddle(struct Node * ptr){
    struct Node * temp=ptr;
    int count =0;
    int prev;
    while(ptr != NULL){
        ptr=ptr->next; 
        count++;
    }
    if (count%2==1){
        for(int i=0;i<((count/2));i++){
            temp=temp->next;
        }
        prev=temp->data;
        printf("middle is : %d\n ",prev);
    }else{
        printf("middle is : %d\n ",prev);
    }
    
}

int main(){
    for(int i=5;i>0;i--){
        addElemrntToEnd(i);
        findMiddle(head);
    }
    printLinkedList(head);
    findMiddle(head);

    
}