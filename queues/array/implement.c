#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define Max_Length 10

int A[Max_Length];

int front=-1;
int rear=-1;

void Enqueue(int x){
    if (rear==Max_Length-1){
        return;
    }else if (front==-1 && rear==-1){
        front=rear=0;
    }else{
        rear +=1;
    }
    A[rear]=x;
}
int Dequeue(){
    if(front==-1 && rear==-1){
        printf("Queue is Empty.");
    }else if (front==rear){
        front=rear=-1;
    }else{
        front +=1;
    }

}
void IsEmpty(){
   if (front==-1 && rear==-1){
        printf("Queue is Empty.");
   }else{
    printf("Queue is Not Empty.");
   }    
}
void PrintArr(int * arr){
    for(int i=front;i<rear+1;i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");
}

int main(){
    Enqueue(2);
    Enqueue(4);
    Enqueue(6);
    Enqueue(8);
    PrintArr(A);
    Dequeue();
    PrintArr(A);
    Dequeue();
    Dequeue();
    PrintArr(A);
  


}