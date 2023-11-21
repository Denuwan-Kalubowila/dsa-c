#include <stdio.h>
#include <stdlib.h>

int* Add(int *a,int *b){
    int *c;
    c=(int *) malloc(sizeof(int));
    *c=(*a)+(*b);
    printf("%d c location :",c);
    return c;

}

int main(){
    int a=10,b=10;
    int *tot = Add(&a,&b);
    printf("%d",tot);
}