#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define MAX_LENGTH 101
char A[MAX_LENGTH];
int top =-1;

void Push(char x){
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
char Top(){
    int topelement=A[top];
    return topelement;
}
char pair(char p1){
    
    switch (p1) {
        case '}':
            return '{';
        case ']':
            return '[';
        case ')':
            return '(';
        default:
            return -1;
        
    }
}

int main(){
    char brack[100];
    printf("Enter Your input\n");
    gets(brack);

    int length=strlen(brack);

    for(int i=0;i<length;i++){
        if(brack[i]=='{' ||brack[i]=='[' || brack[i]=='('){
            Push(brack[i]);
            char t1=Top();
        }else{
            if(brack[i]=='}' ||brack[i]==']' || brack[i]==')'){
                if (top==-1){
                    printf("Not Balance...");
                }else{
                    char p2=pair(brack[i]);
                    char t2=Top();
                    // printf("%c\n",t2);
                    // printf("%c\n",p2);
                    if (p2 !=t2){
                        printf("Not Balance...");
                    }else{
                        Pop();
                    }
                }
            }
        }
    }
    if(top ==-1 ){
            printf("Balance...");
    }

}