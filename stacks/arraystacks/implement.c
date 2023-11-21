#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 101
int A[MAX_LENGTH];
int top =-1;

void Push(int x){
    if (top==MAX_LENGTH-1){
        printf("Error: stackowerflow \n");
        return;
    }
    A[++top]=x;
}
void Pop(){
    if (top== -1){
        printf("Error: No Element in Stacks \n");
        return;

    }
    top --;
}
void Top(){
    int topelement=A[top];
    printf("Top element is %d \n",topelement);
}

void PrintTop(int *arr){
    for( int i=0;i<=top;i++){
         printf("%d ",*(arr+i));
    }
    printf("\n");
}

void IsEmpty(){
    if (top ==-1){
         printf("True" \n);
    }else{
         printf("False \n");
    }
}




int main(){
    IsEmpty();
    Push(10);
    Push(20);
    Push(30);
    PrintTop(A);
    Top();
    Pop();
    PrintTop(A);
    Pop();
    PrintTop(A);
    IsEmpty();

}