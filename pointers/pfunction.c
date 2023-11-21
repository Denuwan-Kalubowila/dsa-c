#include <stdio.h>
#include <stdlib.h>

int *Add(int *a,int *b){
    int c=(*a)+(*b);
    return &c;
}
int main(){
    int x=10,y=100;
    int* ptr=Add(&x,&y);
    printf("%d \n",*ptr);
}