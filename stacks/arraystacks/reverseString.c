#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 101

char stringStack[MAX_LEN];
int top=-1;

void Push(char letter){
    if (top == MAX_LEN-1){
        printf("Stackover flow \n");
    }
    stringStack[++top]=letter;
}

char Pop(){
    if(top == -1){
        printf("No items here \n");
    }
    char popChar=stringStack[top];
    top--;
    return popChar;
}
void ReverseString(){
    int revs;
    for(revs=top;revs>0;revs){
        char s=Pop();
        printf("%c",s);
    }
    printf("\n");
}
void PrintTop(int *arr){
    for( int i=0;i<=top;i++){
         printf("%c ",*(arr+i));
    }
    printf("\n");
}


int main(){
    Push("d");
    Push("e");
    Push("n");
    Push("u");
    Push("w");
    Push("a");
    Push("n");
    PrintTop(stringStack);
    ReverseString();
}